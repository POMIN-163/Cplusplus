#include "MenuManager.h"
#include "imgui/imgui.h"
#include <vector>
#include <Windows.h>

enum FucType {
    FucMain,
    FucItem
};

class Item {
public:
    Item(char* name, char** stateName, int stateSize) {
        this->name = name;
        this->stateSize = stateSize;

        for (size_t i = 0; i < stateSize; i++)
        {
            this->stateName[i] = *(stateName + i);
        }
    }

    char* name;
    int              type = FucItem;
    int              currentState = 0;
    char* stateName[10];
    int              stateSize = 2;
    int              itemIndex;

    auto toString() {
        std::string str = name;
        str = str + u8"          " + stateName[currentState];
        return str;
    }
};

class MainItem {
public:
    MainItem() {}

    MainItem(char* name) {
        this->name = name;
        this->stateName[0] = u8"[ + ]";
        this->stateName[1] = u8"[ - ]";
    }

    char* name;
    int                 type = FucMain;
    int                 currentState = 0;
    char* stateName[2];
    int                 stateSize = 2;

    //index -1��ʾselect �������MainItem֮��,index 0����ΪMainItem����,index 1��ΪItem 0;
    int                 selectIndex = -1;
    std::vector<Item>   items;

    auto toString() {
        std::string str = name;
        str = str + u8"          " + stateName[currentState];
        return str;
    }

    auto drawItems() {
        ImGui::Function(toString().c_str(), 0xffFFF500, 0x77000000, { 6.4,1.5 }, this->currentState != 0, this->selectIndex == 0);

        if (currentState != 0)
            for each (Item item in items)
            {
                ImGui::FunctionItem(item.toString().c_str(), 0xffFFFfff, 0x77000000, { 5,1.5 }, item.currentState != 0, item.itemIndex == this->selectIndex);
            }
    }

    auto putItem(Item item)
    {
        item.itemIndex = 1 + items.size();
        items.push_back(item);
    }

    auto getItemSize() {
        return items.size() + 1;
    }
};

MainItem mainItems[2];
static int mainItemSize = 2;

void MenuManager::defineFucs()
{
    char* defaultStateName[2];
    defaultStateName[0] = u8"[�ر�]";
    defaultStateName[1] = u8"[����]";

    MainItem EspMainItem(u8"[͸������]");
    MainItem aimbotMainItem(u8"[��������]");

    //����������� ����
    Item aimbotEnableItem(u8"�Զ���׼", defaultStateName, 2);
    Item aimbotSlientItem(u8"��Ĭ��׼", defaultStateName, 2);
    Item aimbotOneTapItem(u8"ǹǹ��ͷ", defaultStateName, 2);

    char* aimHotkeyStateName[4];
    aimHotkeyStateName[0] = u8"[�ر�]";
    aimHotkeyStateName[1] = u8"[����]";
    aimHotkeyStateName[2] = u8"[���]";
    aimHotkeyStateName[3] = u8"[ALT ]";
    Item aimbotHotKeyItem(u8"�����ȼ�", aimHotkeyStateName, 4);

    char* aimRangeStateName[7];
    aimRangeStateName[0] = u8"[�ر�]";
    aimRangeStateName[1] = u8"[ 60 ]";
    aimRangeStateName[2] = u8"[120 ]";
    aimRangeStateName[3] = u8"[180 ]";
    aimRangeStateName[4] = u8"[240 ]";
    aimRangeStateName[5] = u8"[300 ]";
    aimRangeStateName[6] = u8"[360 ]";
    Item aimbotRangeItem(u8"���鷶Χ", aimRangeStateName, 7);


    char* aimPlaceStateName[4];
    aimPlaceStateName[0] = u8"[�ر�]";
    aimPlaceStateName[1] = u8"[ͷ��]";
    aimPlaceStateName[2] = u8"[�ز�]";
    aimPlaceStateName[3] = u8"[�ɲ�]";
    Item aimbotPlaceItem(u8"����λ��", aimPlaceStateName, 4);


    aimbotMainItem.putItem(aimbotEnableItem);
    aimbotMainItem.putItem(aimbotSlientItem);
    aimbotMainItem.putItem(aimbotOneTapItem);
    aimbotMainItem.putItem(aimbotHotKeyItem);
    aimbotMainItem.putItem(aimbotRangeItem);
    aimbotMainItem.putItem(aimbotPlaceItem);



    //���͸������
    char* EspBoxStateName[4];
    EspBoxStateName[0] = u8"[�ر�]";
    EspBoxStateName[1] = u8"[ 2D ]";
    EspBoxStateName[2] = u8"[ 3D ]";

    Item EspBoxItem(u8"����͸��", EspBoxStateName, 3);

    Item EspHealthItem(u8"��ʾѪ��", defaultStateName, 2);
    Item EspHealthValueItem(u8"��ʾѪ��", defaultStateName, 2);
    Item EspDirectLineItem(u8"��������", defaultStateName, 2);
    Item EspBoneItem(u8"��ʾ����", defaultStateName, 2);
    Item EspViewLineItem(u8"�ӽ�����", defaultStateName, 2);

    EspMainItem.putItem(EspBoxItem);
    EspMainItem.putItem(EspHealthItem);
    EspMainItem.putItem(EspHealthValueItem);
    EspMainItem.putItem(EspDirectLineItem);
    EspMainItem.putItem(EspBoneItem);
    EspMainItem.putItem(EspViewLineItem);

    EspMainItem.selectIndex = 0;

    mainItems[0] = EspMainItem;
    mainItems[1] = aimbotMainItem;

    //MessageBoxA(NULL, "", "", 0);
}

static int mainItemSelectIndex = 0;

void MenuManager::renderMenu()
{
    int flag = ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoCollapse
        | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar;
    ImGui::Begin("  IMGUI�ּ��˵�DEMO  ", NULL, flag);                          // Create a window called "Hello, world!" and append into it.

    ImGui::SetWindowSize({ 200,1000 });
    //title
    ImGui::Function(u8"    IMGUI�ּ��˵�DEMO    ", 0xffFFFfff, 0x77000000, { 6.4,1.5 }, false, false);

    for (size_t i = 0; i < mainItemSize; i++)
    {
        mainItems[i].drawItems();
    }

    if (ImGui::IsKeyReleased(VK_DOWN)) {
        auto tempMainItem = mainItems[mainItemSelectIndex];

        if (tempMainItem.currentState == 0 || tempMainItem.selectIndex == tempMainItem.getItemSize() - 1) {
            //����˵����۵���,��ѡ����һ��
            mainItems[mainItemSelectIndex].selectIndex = -1;
            mainItemSelectIndex = (mainItemSelectIndex + 1) % mainItemSize;
            mainItems[mainItemSelectIndex].selectIndex = 0;
        }
        else
        {
            //�˵���չ����
            mainItems[mainItemSelectIndex].selectIndex++;
        }
    }

    if (ImGui::IsKeyReleased(VK_UP)) {
        auto tempMainItem = mainItems[mainItemSelectIndex];

        if (tempMainItem.currentState == 0 || tempMainItem.selectIndex == 0) {
            //����˵����۵���,��ѡ����һ��
            mainItems[mainItemSelectIndex].selectIndex = -1;
            mainItemSelectIndex = (mainItemSelectIndex - 1) % mainItemSize;

            if (mainItemSelectIndex < 0)
                mainItemSelectIndex = mainItemSize - 1;

            if (mainItems[mainItemSelectIndex].currentState != 0)
                mainItems[mainItemSelectIndex].selectIndex = mainItems[mainItemSelectIndex].getItemSize() - 1;
            else
                mainItems[mainItemSelectIndex].selectIndex = 0;
        }
        else
        {
            //�˵���չ����
            mainItems[mainItemSelectIndex].selectIndex--;
        }
    }

    if (ImGui::IsKeyReleased(VK_RIGHT))
    {
        auto tempMainItem = mainItems[mainItemSelectIndex];

        if (tempMainItem.selectIndex == 0) {
            mainItems[mainItemSelectIndex].currentState = (tempMainItem.currentState + 1) % tempMainItem.stateSize;
        }
        else
        {
            auto tempItem = mainItems[mainItemSelectIndex].items[tempMainItem.selectIndex - 1];
            mainItems[mainItemSelectIndex].items[tempMainItem.selectIndex - 1].currentState = (tempItem.currentState + 1) % tempItem.stateSize;
        }
    }


    if (ImGui::IsKeyReleased(VK_LEFT))
    {
        auto tempMainItem = mainItems[mainItemSelectIndex];

        if (tempMainItem.selectIndex == 0) {
            auto temp = (tempMainItem.currentState - 1) % tempMainItem.stateSize;
            if (temp < 0)
                temp = mainItemSize - 1;
            mainItems[mainItemSelectIndex].currentState = temp;
        }
        else
        {
            auto tempItem = mainItems[mainItemSelectIndex].items[tempMainItem.selectIndex - 1];

            auto temp = (tempItem.currentState - 1) % tempItem.stateSize;
            if (temp < 0)
                temp = mainItems[mainItemSelectIndex].items[tempMainItem.selectIndex - 1].stateSize - 1;

            mainItems[mainItemSelectIndex].items[tempMainItem.selectIndex - 1].currentState = temp;
        }
    }

    ImGui::End();
}

