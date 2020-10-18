/**************************************************************************\
*
* Copyright (c)  炫彩界面库. All Rights Reserved.
*
* 炫彩界面库 - 官方网站 : http://www.xcgui.com
*
\**************************************************************************/
#pragma once

//v2.8.0   2019-09-25
////////////输入输出///////////////////
#define in_
#define out_
#define in_out_
#define XC_API extern "C"

#define  XC_NAME1   _T("name1")
#define  XC_NAME2   _T("name2")
#define  XC_NAME3   _T("name3")
#define  XC_NAME4   _T("name4")
#define  XC_NAME5   _T("name5")
#define  XC_NAME6   _T("name6")

//对象类型决定功能
//对象样式决定外观

/// @defgroup groupObjectType 接口句柄类型
/// @ingroup macroDefine
/// @{
/// 炫彩对象类型
enum XC_OBJECT_TYPE  ///<炫彩对象类型
{
	XC_ERROR = -1,   ///<错误类型
	XC_NOTHING = 0,
	XC_WINDOW = 1,    ///<窗口
	XC_MODALWINDOW = 2,    ///<模态窗口
	XC_FRAMEWND = 3,    ///<框架窗口
	XC_FLOATWND = 4,    ///<浮动窗口
	XC_COMBOBOXWINDOW = 11,   //comboBoxWindow_        组合框弹出下拉列表窗口
	XC_POPUPMENUWINDOW = 12,  //popupMenuWindow_       弹出菜单主窗口
	XC_POPUPMENUCHILDWINDOW = 13,   //popupMenuChildWindow_  弹出菜单子窗口
	XC_OBJECT_UI = 19,   ///<...
	XC_WIDGET_UI = 20,
	//元素
	XC_ELE = 21,   ///<基础元素
	XC_ELE_LAYOUT = 53,   ///<布局元素
	XC_LAYOUT_STACK = 54,   ///<流式布局
	XC_BUTTON = 22,   ///<按钮
	XC_EDIT = 45,   ///<编辑框
	XC_EDITOR = 46,   ///<代码编辑框
//	XC_RICHEDIT2      =47,
//	XC_Chat           =48,

XC_RICHEDIT = 23,   ///<富文本编辑框
XC_COMBOBOX = 24,   ///<下拉组合框元素
XC_SCROLLBAR = 25,   ///<滚动条元素
XC_SCROLLVIEW = 26,   ///<滚动视图元素
XC_LIST = 27,   ///<列表元素
XC_LISTBOX = 28,   ///<列表框元素
XC_LISTVIEW = 29,   ///<列表视图,大图标
XC_TREE = 30,   ///<树元素
XC_MENUBAR = 31,   ///<菜单条
XC_SLIDERBAR = 32,   ///<滑动条
XC_PROGRESSBAR = 33,   ///<进度条
XC_TOOLBAR = 34,   ///<工具条
XC_MONTHCAL = 35,   ///<月历元素
XC_DATETIME = 36,   ///<时间元素
XC_PROPERTYGRID = 37,   ///<属性网格
XC_EDIT_COLOR = 38,   ///<颜色选择元素
XC_EDIT_SET = 39,   ///<...
XC_TABBAR = 40,   ///<tab条
XC_TEXTLINK = 41,   ///<文本链接按钮

XC_PANE = 42,   ///<布局窗格
XC_PANE_SPLIT = 43,   ///<布局窗格拖动分割条
XC_MENUBAR_BUTTON = 44,   ///<菜单条上的按钮
//	XC_TOOLBAR_BUTTON       =45,   ///<工具条上按钮
//	XC_PROPERTYPAGE_LABEL   =46,   ///<属性页标签按钮
//	XC_PIER                 =47,   ///<窗格停靠码头
//	XC_BUTTON_MENU          =48,   ///<弹出菜单按钮
//	XC_VIRTUAL_ELE          =49,   ///<虚拟元素
XC_EDIT_FILE = 50,   ///<EditFile 文件选择编辑框
XC_EDIT_FOLDER = 51,   ///<EditFolder  文件夹选择编辑框
XC_LIST_HEADER = 52,   ///<列表头元素

XC_SHAPE = 61,    ///<形状对象
XC_SHAPE_TEXT = 62,    ///<形状对象-文本
XC_SHAPE_PICTURE = 63,    ///<形状对象-图片
XC_SHAPE_RECT = 64,    ///<形状对象-矩形
XC_SHAPE_ELLIPSE = 65,    ///<形状对象-圆
XC_SHAPE_LINE = 66,    ///<形状对象-直线
XC_SHAPE_GROUPBOX = 67,    ///<形状对象-组框
XC_SHAPE_GIF = 68,    ///<形状对象-GIF
XC_SHAPE_TABLE = 69,    ///<形状对象-表格

//其他类型
XC_MENU = 81,   ///<弹出菜单
XC_IMAGE = 82,         ///<图片
XC_IMAGE_TEXTURE = XC_IMAGE,   ///<图片纹理,图片源,图片素材
XC_HDRAW = 83,   ///<绘图操作
XC_FONT = 84,   ///<炫彩字体
XC_FLASH = 85,   ///<flash   
XC_PANE_CELL = 86,   ///<...
XC_WEB = 87,   ///<...
XC_IMAGE_FRAME = 88,   ///<图片帧,指定图片的渲染属性

XC_LAYOUT_OBJECT = 101,   ///<布局对象LayoutObject
XC_ADAPTER = 102,   ///<...
XC_ADAPTER_TABLE = 103,   ///<数据适配器AdapterTable
XC_ADAPTER_TREE = 104,   ///<数据适配器AdapterTree
XC_ADAPTER_LISTVIEW = 105,   ///<数据适配器AdapterListView
XC_ADAPTER_MAP = 106,   ///<数据适配器AdapterMap

XC_BKINFOM = 116, //背景管理器

//无实体对象,只是用来判断布局
XC_LAYOUT_LISTVIEW = 111,
XC_LAYOUT_LIST = 112,
XC_LAYOUT_OBJECT_GROUP = 113,
XC_LAYOUT_OBJECT_ITEM = 114,
XC_LAYOUT_PANEL = 115,

//无实体对象,只是用来判断类型
XC_LIST_ITEM = 121,     //列表项模板 list_item
XC_LISTVIEW_GROUP = 122,
XC_LISTVIEW_ITEM = 123,
//XC_BUTTON_EX,
};

///@}


/// @defgroup groupObjectTypeEx   对象扩展类型
/// @ingroup macroDefine
/// @{
enum XC_OBJECT_TYPE_EX
{
	xc_ex_error = -1,   ///<错误类型
	button_type_default = 0, ///<默认类型
	button_type_radio,     ///<单选按钮
	button_type_check,     ///<复选按钮
	button_type_close,     ///<窗口关闭按钮
	button_type_min,       ///<窗口最小化按钮
	button_type_max,       ///<窗口最大化还原按钮

	element_type_layout,   ///<布局元素,启用布局功能的元素
};

///@}


/// @defgroup groupObjectStyle 对象样式(用于区分外观)
/// @ingroup macroDefine
/// @{
enum  XC_OBJECT_STYLE
{
	xc_style_default = 0,
	button_style_default = xc_style_default,  ///<默认风格
	button_style_check = 1,    ///<复选按钮
	button_style_radio = 2,    ///<单选按钮
	button_style_expand = 3,    ///<展开收缩按钮
	button_style_scrollbar_left = 4,    ///<水平滚动条,左按钮
	button_style_scrollbar_right = 5,    ///<水平滚动条,右按钮
	button_style_scrollbar_up = 6,    ///<垂直滚动条,上按钮
	button_style_scrollbar_down = 7,    ///<垂直滚动条,下按钮
	button_style_scrollbar_slider_h = 8,    ///<水平滚动条,滑块
	button_style_scrollbar_slider_v = 9,    ///<垂直滚动条,滑块
	button_style_tabBar_button = 10,   ///<TabBar上的标签按钮
	button_style_toolBar_left = 11,   ///<ToolBar左滚动按钮
	button_style_toolBar_right = 12,   ///<ToolBar右滚动按钮

	button_style_pane_close = 13,   ///<窗格关闭按钮
	button_style_pane_lock = 14,   ///<窗格锁定按钮
	button_style_pane_menu = 15,   ///<窗格下拉菜单按钮
	button_style_pane_dockH = 16,   ///<框架窗口左边或右边码头上按钮
	button_style_pane_dockV = 17,   ///<框架窗口上边或下边码头上按钮

	xc_style_frameWnd_dock_left = 18,   ///<框架窗口停靠码头
	xc_style_frameWnd_dock_top = 19,   ///<框架窗口停靠码头
	xc_style_frameWnd_dock_right = 20,   ///<框架窗口停靠码头
	xc_style_frameWnd_dock_bottom = 21,   ///<框架窗口停靠码头

	xc_style_ToolBar_separator = 22,   ///<工具条上的分割线
	xc_style_listBox_comboBox = 23,   ///<下拉组合框弹出的listBox

	//xc_style_richEdit_onlyRead      =23,   ///<编辑框只读模式
};

///@}

#define DECLARE_HANDLEX(name) struct name##__ { int unused; }; typedef struct name##__ *name

/// @defgroup groupHandle 句柄列表
/// @ingroup macroDefine
/// @{
typedef void*   HXCGUI;       ///<资源句柄
DECLARE_HANDLEX(HWINDOW);     ///<窗口资源句柄
DECLARE_HANDLEX(HELE);        ///<元素资源句柄
DECLARE_HANDLEX(HMENUX);      ///<菜单资源句柄
DECLARE_HANDLEX(HDRAW);       ///<图形绘制资源句柄
DECLARE_HANDLEX(HIMAGE);      ///<图片资源句柄
DECLARE_HANDLEX(HFONTX);      ///<炫彩字体句柄
DECLARE_HANDLEX(HBKM);        ///<背景内容管理器句柄
DECLARE_HANDLEX(HTEMP);       ///<模板句柄

///@}

#ifndef _INC_SHELLAPI
DECLARE_HANDLE(HDROP);
#endif

#define  XC_GetObjectByUID_(T)  XC_GetObjectByUID(XRes_GetIDValue(L#T))
#define  GetLayoutFile()        GetLayoutFile()
#define  XC_LAYOUT_FILE(file)   const wchar_t*  GetLayoutFile(){ return file; };
#define  XC_EVENT_DECLARE_MARK
#define  XC_EVENT_REGISTER_MARK
#define  XC_EVENT_IMPLEMENT_MARK(T)


#define CLOUDUI_flag_openUrl       1
#define CLOUDUI_flag_downloadFile  2
#define CLOUDUI_flag_downloadFileComplete      3
#define CLOUDUI_flag_complete      4

typedef   void  bkInfo_i;  //背景信息
typedef   struct lua_State lua_State;

struct  RECTF
{
	float  left;
	float  top;
	float  right;
	float  bottom;
};

//窗口样式----------------------------
/// @defgroup groupWindowStyle 炫彩窗口样式
/// @ingroup macroDefine
/// @{
enum  xc_window_style_
{
	xc_window_style_nothing = 0x00000000,      ///<什么也没有
	xc_window_style_caption = 0x00000001,      ///<top布局,如果指定该属性,默认为绑定标题栏元素
	xc_window_style_border = 0x00000002,      ///<边框,指定默认上下左右布局大小,如果没有指定,那么边框布局大小为0
	xc_window_style_center = 0x00000004,      ///<窗口居中
	xc_window_style_drag_border = 0x00000008,    ///<拖动窗口边框
	xc_window_style_drag_window = 0x00000010,    ///<拖动窗口
	xc_window_style_allow_maxWindow = 0x00000020,   ///允许窗口最大化

	///窗口默认样式
	xc_window_style_default = (xc_window_style_caption | xc_window_style_border | xc_window_style_center | xc_window_style_drag_border | xc_window_style_allow_maxWindow),
	xc_window_style_default2 = (xc_window_style_caption | xc_window_style_border | xc_window_style_drag_border | xc_window_style_allow_maxWindow),

	///模态窗口样式
	xc_window_style_modal = (xc_window_style_caption | xc_window_style_center | xc_window_style_border),
};

///@}

#ifdef _DEBUG
#define XTRACE   _xtrace
#define XTRACEW  _xtracew
#define XERROR   XTRACE 
#define XERRORW  XTRACEW
#else
#define XTRACE
#define XTRACEW
#define XERROR 
#define XERRORW
#endif

#define  XC_WINDOW_TOP            1 //上
#define  XC_WINDOW_BOTTOM         2 //下
#define  XC_WINDOW_LEFT           3 //左
#define  XC_WINDOW_RIGHT          4 //右
#define  XC_WINDOW_TOPLEFT        5 //左上角
#define  XC_WINDOW_TOPRIGHT       6 //右上角
#define  XC_WINDOW_BOTTOMLEFT     7 //左下角
#define  XC_WINDOW_BOTTOMRIGHT    8 //右下角
#define  XC_WINDOW_CAPTION        9 //标题栏移动窗口区域
#define  XC_WINDOW_BODY           10

/// @defgroup groupWindow_position 窗口位置
/// @ingroup macroDefine
/// @{
enum   window_position_
{
	window_position_error = -1,  ///<错误
	window_position_top = 0,     ///<top
	window_position_bottom,    ///<bottom
	window_position_left,      ///<left
	window_position_right,     ///<right
	window_position_body,      ///<body
	window_position_window,    ///<window 整个窗口 
};

///@}

/// @defgroup groupElement_position UI元素位置
/// @ingroup macroDefine
/// @{
enum element_position_
{
	element_position_no = 0x00,     ///<无效
	element_position_left = 0x01,     ///<左边
	element_position_top = 0x02,		///<上边
	element_position_right = 0x04,		///<右边
	element_position_bottom = 0X08,		///<下边
};

///@}

//透明窗口
/// @defgroup groupWindowTransparent 炫彩窗口透明标识
/// @ingroup macroDefine
/// @{
enum  window_transparent_
{
	window_transparent_false = 0,   ///<默认窗口,不透明
	window_transparent_shaped,    ///<透明窗口,带透明通道,异型
	window_transparent_shadow,    ///<阴影窗口,带透明通道,边框阴影,窗口透明或半透明
	window_transparent_simple,    ///<透明窗口,不带透明通道,指定半透明度,指定透明色
	window_transparent_win7,      ///<WIN7玻璃窗口,需要WIN7开启特效,当前未启用,当前未启用.
};

///@}

/// @defgroup groupID_fixed  特殊ID
/// @ingroup macroDefine
/// @{
#define  XC_ID_ROOT            0   ///<根节点
#define  XC_ID_ERROR          -1   ///<ID错误
#define  XC_ID_FIRST          -2   ///<插入开始位置
#define  XC_ID_LAST           -3   ///<插入末尾位置

/// @}


/// @defgroup groupMenu 弹出菜单
/// @ingroup macroDefine
/// @{

//弹出菜单项标识
///@name 弹出菜单项标识
///@{
enum   menu_item_flags_
{
	menu_item_flags_normal = 0x00,   ///<正常
	menu_item_flags_select = 0x01,   ///<选择 
	menu_item_flags_check = 0x02,   ///<勾选
	menu_item_flags_popup = 0x04,   ///<弹出
	menu_item_flags_separator = 0x08,   ///<分隔栏 ID号任意,ID号被忽略
	menu_item_flags_disable = 0x10,   ///<禁用
};

///@}

//弹出菜单方向
///@name 弹出菜单方向
///@{
enum  menu_popup_position_
{
	menu_popup_position_left_top = 0,      ///<左上角
	menu_popup_position_left_bottom,     ///<左下角
	menu_popup_position_right_top,       ///<右上角
	menu_popup_position_right_bottom,    ///<右下角
	menu_popup_position_center_left,     ///<左居中
	menu_popup_position_center_top,      ///<上居中
	menu_popup_position_center_right,    ///<右居中
	menu_popup_position_center_bottom,   ///<下居中
};

///@}

//菜单ID--------------------------------------
///@name 菜单ID , 当前未使用
///@{
#define  IDM_CLIP          1000000000    ///<剪切
#define  IDM_COPY          1000000001    ///<复制
#define  IDM_PASTE         1000000002    ///<粘贴
#define  IDM_DELETE        1000000003    ///<删除
#define  IDM_SELECTALL     1000000004    ///<全选
#define  IDM_DELETEALL     1000000005    ///<清空

///@}

///@}

/// @defgroup groupImageDrawType 图片绘制类型
/// @ingroup macroDefine
/// @{
enum  image_draw_type_
{
	image_draw_type_default = 0,  ///<默认
	image_draw_type_stretch,    ///<拉伸
	image_draw_type_adaptive,   ///<自适应,九宫格
	image_draw_type_tile,       ///<平铺
	image_draw_type_fixed_ratio,  ///<固定比例,当图片超出显示范围时,按照原始比例压缩显示图片
	image_draw_type_adaptive_border,  ///<九宫格不绘制中间区域
};

///@}


//状态--------------------------------------
/// @defgroup groupCommonState3 普通三种状态
/// @ingroup  macroDefine
/// @{
enum  common_state3_
{
	common_state3_leave = 0,  ///<离开
	common_state3_stay,     ///<停留
	common_state3_down,     ///<按下
};

///@}

/// @defgroup groupButtonStateFlag 按钮状态
/// @ingroup  macroDefine
/// @{
enum  button_state_
{
	button_state_leave = 0,   ///<离开状态
	button_state_stay,      ///<停留状态
	button_state_down,      ///<按下状态
	button_state_check,     ///<选中状态
	button_state_disable,   ///<禁用状态
};

///@}

/// @defgroup   groupComboBoxState ComboBox状态
/// @ingroup macroDefine
/// @{
enum  comboBox_state_
{
	comboBox_state_leave = 0,   ///<鼠标离开状态
	comboBox_state_stay = 1,    ///<鼠标停留状态
	comboBox_state_down = 2,    ///<按下状态
};

///@}

/// @defgroup groupListItemState List项状态
/// @ingroup macroDefine
/// @{
enum  list_item_state_
{
	list_item_state_leave = 0,   ///<项鼠标离开状态
	list_item_state_stay = 1,    ///<项鼠标停留状态
	list_item_state_select = 2,  ///<项选择状态
};

///@}


/// @defgroup groupTreeItemState Tree项状态
/// @ingroup macroDefine
/// @{
enum  tree_item_state_
{
	tree_item_state_leave = 0,   ///<项鼠标离开状态
	tree_item_state_stay = 1,    ///<项鼠标停留状态
	tree_item_state_select = 2,  ///<项选择状态
};

///@}


//按钮图标对齐方式
/// @defgroup groupButtonIconAlign 按钮图标对齐方式
/// @ingroup macroDefine
/// @{
enum  button_icon_align_
{
	button_icon_align_left = 0,  ///<图标在左边
	button_icon_align_top,     ///<图标在顶部
	button_icon_align_right,   ///<图标在右边
	button_icon_align_bottom,  ///<图标在底部
};

///@}

/// @defgroup groupLayoutSize 布局大小类型
/// @ingroup macroDefine
/// @{
enum  layout_size_type_
{
	layout_size_type_fixed = 0,   ///<指定大小
	layout_size_type_fill,      ///<fill 填充父
	layout_size_type_auto,      ///<auto 自动大小,根据内容计算大小
	layout_size_type_weight,    ///<weight 比例,按照比例分配剩余空间
	layout_size_type_disable,   ///<disable 不使用
};

///@}

/// @defgroup  groupListDrawItemBkFlags  List,ListBox,ListView,Tree,项背景绘制标志位
/// @ingroup macroDefine
/// @{
enum  list_drawItemBk_flags_
{
	list_drawItemBk_flags_nothing = 0x000,    ///<不绘制
	list_drawItemBk_flags_leave = 0x001,    ///<绘制鼠标离开状态项背景
	list_drawItemBk_flags_stay = 0x002,    ///<绘制鼠标选择状态项背景
	list_drawItemBk_flags_select = 0x004,    ///<绘制鼠标停留状态项项背景
	list_drawItemBk_flags_group_leave = 0x008, ///<绘制鼠标离开状态组背景,当项为组时
	list_drawItemBk_flags_group_stay = 0x010,  ///<绘制鼠标停留状态组背景,当项为组时
};

/// @}

//弹出消息框类型
/// @defgroup groupMessageBox 弹出消息框
/// @ingroup macroDefine
/// @{
enum  messageBox_flags_
{
	messageBox_flags_other = 0x00,    ///<其他
	messageBox_flags_ok = 0x01,    ///<确定按钮
	messageBox_flags_cancel = 0x02,    ///<取消按钮

	messageBox_flags_icon_appicon = 0x01000,  ///<图标 应用程序  IDI_APPLICATION
	messageBox_flags_icon_info = 0x02000,  ///<图标 信息     IDI_ASTERISK
	messageBox_flags_icon_qustion = 0x04000,  ///<图标 问询/帮助/提问   IDI_QUESTION
	messageBox_flags_icon_error = 0x08000,  ///<图标 错误/拒绝/禁止  IDI_ERROR
	messageBox_flags_icon_warning = 0x10000,  ///<图标 警告       IDI_WARNING
	messageBox_flags_icon_shield = 0x20000,  ///<图标 盾牌/安全   IDI_SHIELD
};

///@}

///@defgroup GroupPropertyGrid_item_type    属性网格项类型
///@ingroup  macroDefine
///@{
enum  propertyGrid_item_type_
{
	propertyGrid_item_type_text = 0,      ///<默认,字符串类型
	propertyGrid_item_type_edit,        ///<编辑框
	propertyGrid_item_type_edit_color,  ///<颜色选择元素
	propertyGrid_item_type_edit_file,   ///<文件选择编辑框
	propertyGrid_item_type_edit_set,    ///<设置
	propertyGrid_item_type_comboBox,    ///<组合框
	propertyGrid_item_type_group,       ///<组
	propertyGrid_item_type_panel,       ///<面板
};

///@}

///@defgroup  GroupZOrder    Z序位置
///@ingroup  macroDefine
///@{
enum zorder_
{
	zorder_top,    ///<最上面
	zorder_bottom, ///<最下面
	zorder_before, ///<指定目标下面
	zorder_after,  ///<指定目标上面
};

///@}

//////////////框架窗口///////////////////////////////////////////////
//窗格菜单 当前未使用
#define  IDM_LOCK          1000000006    ///<锁定
#define  IDM_DOCK          1000000007    ///<停靠
#define  IDM_FLOAT         1000000008    ///<浮动
#define  IDM_HIDE          1000000009    ///<隐藏

enum  layout_align_
{
	layout_align_left = 0,
	layout_align_top,
	layout_align_right,
	layout_align_bottom,
	layout_align_center,
	layout_align_equidistant,
};

enum pane_align_
{
	pane_align_error = -1,
	pane_align_left = 0,
	pane_align_top,
	pane_align_right,
	pane_align_bottom,
	pane_align_center,
};

enum align_flag_
{
	align_left = 0x0,   ///<左侧
	align_right = 0x1,   ///<右侧
	align_center = 0x2,   ///<水平居中

	align_top = 0x0,  ///<顶部
	align_bottom = 0x4,  ///<底部
	align_center_v = 0x8,  ///<垂直居中
};

///@defgroup Group_pane_state_  窗格状态
///@ingroup  macroDefine
///@{
enum pane_state_
{
	pane_state_any = 0,
	pane_state_lock,   ///<锁定
	pane_state_dock,   ///<停靠码头
	pane_state_float,  ///<浮动窗格
};

///@}

///@defgroup Group_textFormatFlag_    字符串显示格式
///@ingroup  macroDefine
///@{
enum  textFormatFlag_
{
	textAlignFlag_left = 0,       ///<左对齐
	textAlignFlag_top = 0,        ///<垂直定对齐
	textAlignFlag_left_top = 0x4000,  ///<内部保留
	textAlignFlag_center = 0x1,   ///<水平居中
	textAlignFlag_right = 0x2,    ///<右对齐
	textAlignFlag_vcenter = 0x4,  ///<垂直居中
	textAlignFlag_bottom = 0x8,   ///<垂直底对齐

	textFormatFlag_DirectionRightToLeft = 0x10,  ///<从右向左顺序显示文本
	textFormatFlag_NoWrap = 0x20,                ///<禁止换行
	textFormatFlag_DirectionVertical = 0x40,     ///<垂直显示文本
	textFormatFlag_NoFitBlackBox = 0x80,         ///<允许部分字符延伸该字符串的布局矩形。默认情况下，将重新定位字符以避免任何延伸
	textFormatFlag_DisplayFormatControl = 0x100,  ///<控制字符（如从左到右标记）随具有代表性的标志符号一起显示在输出中。
	textFormatFlag_NoFontFallback = 0x200,        ///<对于请求的字体中不支持的字符，禁用回退到可选字体。缺失的任何字符都用缺失标志符号的字体显示，通常是一个空的方块
	textFormatFlag_MeasureTrailingSpaces = 0x400, ///<包括每一行结尾处的尾随空格。在默认情况下，MeasureString 方法返回的边框都将排除每一行结尾处的空格。设置此标记以便在测定时将空格包括进去
	textFormatFlag_LineLimit = 0x800,             ///<如果内容显示高度不够一行,那么不显示
	textFormatFlag_NoClip = 0x1000,               ///<允许显示标志符号的伸出部分和延伸到边框外的未换行文本。在默认情况下，延伸到边框外侧的所有文本和标志符号部分都被剪裁

	textTrimming_None = 0,        ///<不使用去尾
	textTrimming_Character = 0x40000,  ///<以字符为单位去尾
	textTrimming_Word = 0x80000,  ///<以单词为单位去尾
	textTrimming_EllipsisCharacter = 0x8000,   ///<以字符为单位去尾,省略部分使用且略号表示
	textTrimming_EllipsisWord = 0x10000,  ///<以单词为单位去尾,
	textTrimming_EllipsisPath = 0x20000,  ///<略去字符串中间部分，保证字符的首尾都能够显示  
};

///@}

///@defgroup Group_listItemTemp_type_    列表项模板类型
///@ingroup  macroDefine
///@{
enum listItemTemp_type_
{
	listItemTemp_type_tree = 0x01,					  ///<tree
	listItemTemp_type_listBox = 0x02,				  ///<listBox
	listItemTemp_type_list_head = 0x04,				  ///<list 列表头
	listItemTemp_type_list_item = 0x08,				  ///<list 列表项
	listItemTemp_type_listView_group = 0x10,		  ///<listView 列表视组
	listItemTemp_type_listView_item = 0x20,			  ///<listView 列表视项
	listItemTemp_type_list = listItemTemp_type_list_head | listItemTemp_type_list_item,  ///<list (列表头)与(列表项)组合
	listItemTemp_type_listView = listItemTemp_type_listView_group | listItemTemp_type_listView_item, ///<listView (列表视组)与(列表视项)组合
};

///@}

///@defgroup Group_adjustLayout    调整布局标识位
///@ingroup  macroDefine
///@{
enum xc_adjustLayout_
{
	xc_adjustLayout_no = 0x00,  ///<不调整布局
	xc_adjustLayout_all = 0x01,  ///<强制调整自身和子对象布局.
	xc_adjustLayout_self = 0x02,  ///<只调整自身布局,不调整子对象布局.
	//xc_adjustLayout_free = 0x03   调整布局,非强制性, 只调整坐标改变的对象
};

///@}

typedef void (CALLBACK *funDebugError)(const char *pInfo);  //错误回调
typedef BOOL(CALLBACK *funLoadFile)(const wchar_t *pFileName);  //图片资源文件加载回调
typedef void (CALLBACK *funCloudEvent)(const wchar_t *pFileName, int nEvent, HXCGUI hXCGUI);  //云UI事件回调

typedef int  (CALLBACK *funCallUiThread)(int data);
typedef void (CALLBACK *funIdle)();
typedef void (CALLBACK *funExit)();

/////////////////////////////////////////////////////////
//////////////定义结构体///////////////////////////////////
/////////////////////////////////////////////////////////
///边大小
struct BorderSize_i  //4条边的大小
{
	int  leftSize;
	int  topSize;
	int  rightSize;
	int  bottomSize;
};
typedef  BorderSize_i  SpaceSize_i, PaddingSize_i, MarginSize_i;

///位置点
struct  Position_i
{
	int  iRow;
	int  iColumn;
};

///ListBox 列表框项信息
struct listBox_item_i
{
	int     index;      ///<项索引
	int     nUserData;  ///<用户绑定数据
	int     nHeight;    ///<项默认高度
	int     nSelHeight; ///<项选中时高度
	list_item_state_  nState;  ///<状态
	RECT    rcItem;     ///<项坐标
	HXCGUI  hLayout;    ///<布局对象
	HTEMP   hTemp;      ///<列表项模板
};

///ListBox 列表框项信息2
struct listBox_item_info_i
{
	int     nUserData;  ///<用户绑定数据
	int     nHeight;    ///<项高度, -1使用默认高度
	int     nSelHeight; ///<项选中时高度, -1使用默认高度
};

///ListView 列表视项ID
struct  listView_item_id_i
{
	int  iGroup;   ///<组索引
	int  iItem;    ///<项索引
};

///List 列表项信息
struct list_item_i
{
	int     index;
	int     iSubItem;
	int     nUserData;
	list_item_state_  nState;
	RECT    rcItem;
	HXCGUI  hLayout;    ///<布局对象
	HTEMP   hTemp;      ///<列表项模板
};

///List 列表头项信息
struct list_header_item_i
{
	int     index;
	int     nUserData;

	BOOL    bSort;           //是否支持排序
	int     nSortType;       //排序方式,0无效,1升序,2降序
	int     iColumnAdapter;  //对应数据适配器中的列索引

	common_state3_  nState;
	RECT      rcItem;
	HXCGUI    hLayout;  ///<布局对象
	HTEMP     hTemp;    ///<列表项模板
};

///Tree 树项信息
struct tree_item_i
{
	int     nID;
	int     nDepth;
	int     nHeight;
	int     nSelHeight;
	int     nUserData;
	BOOL    bExpand;
	tree_item_state_  nState;
	RECT    rcItem;
	HXCGUI  hLayout;   ///<布局对象
	HTEMP   hTemp;     ///<列表项模板
};

///ListView 列表视项信息
struct listView_item_i
{
	int     iGroup;            ///<项所述组索引 -1没有组
	int     iItem;             ///<项在数组中位置索引,如果此致为-1,那么为组
	int     nUserData;         ///<用户绑定数据
	list_item_state_  nState;  ///<状态  
	RECT    rcItem;            ///<整个区域,包含边框
	HXCGUI  hLayout;           ///<布局对象
	HTEMP   hTemp;             ///<列表项模板
};

///布局浮动类型
enum layout_float_type_
{
	layout_float_type_none = 0,   ///<无
	layout_float_type_left,       ///<浮动左侧
	layout_float_type_right,      ///<浮动右侧
};

///布局信息
struct layout_info_i
{
	layout_size_type_  widthType;
	layout_size_type_  heightType;
	short  width;    ///<宽度
	short  height;   ///<高度
	layout_float_type_    float_;   ///<浮动类型, 当流式布局时有效
	//int    display;  //0:none, 1:block
	BOOL   bWrap;      ///<强制换行,  当流式布局时有效
};

/// @defgroup group_menu_macro Menu菜单
/// @ingroup macroDefine
/// @{

///菜单-弹出窗口信息
struct  menu_popupWnd_i
{
	HWINDOW hWindow;    ///<窗口句柄
	int     nParentID;  ///<父项ID
};

///菜单背景自绘结构
struct menu_drawBackground_i
{
	HMENUX  hMenu;      ///<菜单句柄
	HWINDOW hWindow;    ///<当前弹出菜单项的窗口句柄
	int     nParentID;  ///<父项ID
};

///菜单项自绘结构
struct  menu_drawItem_i
{
	HMENUX     hMenu;       ///<菜单句柄
	HWINDOW    hWindow;     ///<当前弹出菜单项的窗口句柄
	int        nID;         ///<ID
	int        nState;	    ///<状态 @ref menu_item_flags_
	RECT       rcItem;      ///<坐标
	HIMAGE     hIcon;       ///<菜单项图标
	const wchar_t    *pText;   ///<文本
};
///@}

///树UI元素拖动项
struct tree_drag_item_i
{
	int  nDragItem;  ///< 拖动项ID
	int  nDestItem;  ///< 目标项ID
	int  nType;      ///< 停放相对目标位置,1:(上)停放到目标的上面,2:(中)停放到目标的的子项, 3:(下)停放到目标的下面,
};

///字体信息
struct  xc_font_info_i
{
	int   nSize;                 ///<字体大小,单位(pt,磅).
	int   nStyle;                ///<字体样式 xc_fontStyle_i
	wchar_t  name[LF_FACESIZE];  ///<字体名称
};

///PGrid 属性网格项信息
struct propertyGrid_item_i
{
	propertyGrid_item_type_ nType;
	int   nID;
	int   nDepth;
	int   nUserData;     ///<用户数据
	int   nNameColWidth; ///<名称列宽度

	RECT  rcItem;
	RECT  rcExpand;
	BOOL  bExpand;  ///<是否展开
	BOOL  bShow;    ///<是否可见
};

/// @defgroup group_edit_macro Edit编辑框
/// @ingroup macroDefine
/// @{

enum edit_type_
{
	edit_type_none = 0,   ///<普通编辑框
	edit_type_richedit,   ///<富文本编辑框
	edit_type_chat,       ///<聊天气泡
};

#define  edit_style_no   0xFFFF ///<无效样式
enum edit_style_type_
{
	edit_style_type_font_color = 1,  ///<字体
	edit_style_type_image,           ///<图片
	edit_style_type_obj,             ///<UI对象
};

///Edit 聊天气泡对齐方式
enum chat_flag_
{
	chat_flag_left = 0x1,    ///<左侧
	chat_flag_right = 0x2,   ///<右侧
	chat_flag_center = 0x4,  ///<中间
	chat_flag_next_row_bubble = 0x8,   ///<下一行显示气泡
};

///Edit 样式信息
struct edit_style_info_
{
	edit_style_type_   type;    ///<样式类型
	USHORT   nRef;              ///<引用计数
	HXCGUI   hFont_image_obj;   ///<字体,图片,UI对象
	COLORREF color;             ///<颜色
	BOOL     bColor;            ///<是否使用颜色
};

///Edit 数据复制-样式
struct edit_data_copy_style_
{
	HIMAGE   hFont_image_obj; ///<字体,图片,UI对象
	COLORREF color;           ///<颜色
	BOOL     bColor;          ///<是否使用颜色
};

///Edit 数据复制
struct edit_data_copy_
{
	int  nCount;       ///<内容数量
	int  nStyleCount;  ///<样式数量
	edit_data_copy_style_*  pStyle; ///<样式数组
	UINT *pData;       ///<内容数组
};

///Editor 颜色信息
struct editor_color_
{
	COLORREF   clrMargin1;    ///<背景色1
	COLORREF   clrMargin2;    ///<背景色2
	COLORREF   clrMarginText; ///<文本色
	COLORREF   clrBreakpoint;       ///<断点色
	COLORREF   clrBreakpointArrow;  ///<断点箭头色
	COLORREF   clrRun;              ///<当前执行位置指示色
	COLORREF   clrMatch;            ///<设置匹配文本背景色
};

///@}

/// @defgroup group_layoutStack  layoutStack
/// @ingroup macroDefine
/// @{
enum layoutStack_align_
{
	layoutStack_align_center = 0x0,  ///<居中
	layoutStack_align_left = 0x1,   ///<左侧
	layoutStack_align_right = 0x2,   ///<右侧
};

enum  layoutStack_width_type_
{
	layoutStack_width_type_fill = 0,  ///<填充
	layoutStack_width_type_fixed = 1,  ///<指定大小
	layoutStack_width_type_percent = 2,  ///<百分比
};
///@}

/// @defgroup group_easeFlag  缓动标识
/// @ingroup macroDefine
/// @{
enum ease_flag_
{
	easeIn,      ///<从慢到快
	easeOut,     ///<从快到慢
	easeInOut,   ///<从慢到快再到慢
};
///@}

/// @defgroup group_table  table
/// @ingroup macroDefine
/// @{

///Table 标识
enum  table_flag_
{
	table_flag_full = 0,   ///<铺满组合单元格
	table_flag_none,       ///<正常最小单元格
};

///Table 线标识
enum  table_line_flag_
{
	table_line_flag_left = 0x1,
	table_line_flag_top = 0x2,
	table_line_flag_right = 0x4,
	table_line_flag_bottom = 0x8,
	table_line_flag_left2 = 0x10,
	table_line_flag_top2 = 0x20,
	table_line_flag_right2 = 0x40,
	table_line_flag_bottom2 = 0x80,
};
///@}

#ifndef __IOleControlSite_INTERFACE_DEFINED__
struct POINTF
{
	float x;
	float y;
};
#endif

/// @defgroup group_combo_StateFlags 组合状态
/// @ingroup macroDefine
/// @{
enum  window_state_flag_
{
	window_state_flag_nothing = 0x0000,  ///<无
	window_state_flag_leave = 0x0001,  ///<整个窗口
	window_state_flag_body_leave = 0x0002,  ///<窗口-body
	window_state_flag_top_leave = 0x0004,  ///<窗口-top
	window_state_flag_bottom_leave = 0x0008,  ///<窗口-bottom
	window_state_flag_left_leave = 0x0010,  ///<窗口-left
	window_state_flag_right_leave = 0x0020,  ///<窗口-right

	window_state_flag_layout_body = 0x20000000, ///<布局内容区
};

enum  element_state_flag_  //组合状态
{
	element_state_flag_nothing = window_state_flag_nothing,  ///<无
	element_state_flag_enable = 0x0001,  ///<启用
	element_state_flag_disable = 0x0002,  ///<禁用
	element_state_flag_focus = 0x0004,  ///<焦点
	element_state_flag_focus_no = 0x0008,  ///<无焦点
	element_state_flag_focusEx = 0x40000000,  ///<该元素或该元素的子元素拥有焦点
	element_state_flag_focusEx_no = 0x80000000,  ///<无焦点Ex

	layout_state_flag_layout_body = window_state_flag_layout_body, ///<布局内容区

	element_state_flag_leave = 0x0010,  ///<鼠标离开
	element_state_flag_stay = 0x0020,  ///<为扩展模块保留
	element_state_flag_down = 0x0040,  ///<为扩展模块保留

};

enum  button_state_flag_  //组合状态
{
	button_state_flag_leave = element_state_flag_leave,  ///<鼠标离开
	button_state_flag_stay = element_state_flag_stay,   ///<鼠标停留
	button_state_flag_down = element_state_flag_down,   ///<鼠标按下

	button_state_flag_check = 0x0080, ///<选中
	button_state_flag_check_no = 0x0100, ///<未选中

	button_state_flag_WindowRestore = 0x0200, ///<窗口还原
	button_state_flag_WindowMaximize = 0x0400, ///<窗口最大化
};

enum comboBox_state_flag_
{
	comboBox_state_flag_leave = element_state_flag_leave, ///<鼠标离开
	comboBox_state_flag_stay = element_state_flag_stay,  ///<鼠标停留
	comboBox_state_flag_down = element_state_flag_down,  ///<鼠标按下
};

enum listBox_state_flag_
{
	listBox_state_flag_item_leave = 0x0080, ///<项鼠标离开
	listBox_state_flag_item_stay = 0x0100, ///<项鼠标停留

	listBox_state_flag_item_select = 0x0200, ///<项选择
	listBox_state_flag_item_select_no = 0x0400, ///<项未选择
};

enum list_state_flag_
{
	list_state_flag_item_leave = 0x0080, ///<项鼠标离开
	list_state_flag_item_stay = 0x0100, ///<项鼠标停留

	list_state_flag_item_select = 0x0200, ///<项选择
	list_state_flag_item_select_no = 0x0400, ///<项未选择
};

enum listHeader_state_flag_
{
	listHeader_state_flag_item_leave = 0x0080, ///<项鼠标离开
	listHeader_state_flag_item_stay = 0x0100, ///<项鼠标停留
	listHeader_state_flag_item_down = 0x0200, ///<项鼠标按下
};

enum listView_state_flag_
{
	listView_state_flag_item_leave = 0x0080, ///<项鼠标离开
	listView_state_flag_item_stay = 0x0100, ///<项鼠标停留

	listView_state_flag_item_select = 0x0200, ///<项选择
	listView_state_flag_item_select_no = 0x0400, ///<项未选择

	listView_state_flag_group_leave = 0x0800, ///<组鼠标离开
	listView_state_flag_group_stay = 0x1000, ///<组鼠标停留

	listView_state_flag_group_select = 0x2000, ///<组选择
	listView_state_flag_group_select_no = 0x4000, ///<组未选择
};

enum tree_state_flag_
{
	tree_state_flag_item_leave = 0x0080,  ///<项鼠标离开
	tree_state_flag_item_stay = 0x0100,  ///<项鼠标停留,保留值, 暂未使用

	tree_state_flag_item_select = 0x0200,  ///<项选择
	tree_state_flag_item_select_no = 0x0400,  ///<项未选择

	tree_state_flag_group = 0x0800,  ///<项为组
	tree_state_flag_group_no = 0x1000,  ///<项不为组
};

enum monthCal_state_flag_
{
	monthCal_state_flag_leave = element_state_flag_leave,  ///<离开状态

	monthCal_state_flag_item_leave = 0x0080,     ///< 项-离开
	monthCal_state_flag_item_stay = 0x0100,     ///< 项-停留
	monthCal_state_flag_item_down = 0x0200,     ///< 项-按下

	monthCal_state_flag_item_select = 0x0400,     ///< 项-选择
	monthCal_state_flag_item_select_no = 0x0800,     ///< 项-未选择

	monthCal_state_flag_item_today = 0x1000,     ///< 项-今天
	monthCal_state_flag_item_other = 0x2000,     ///< 项-上月及下月
	monthCal_state_flag_item_last_month = 0x4000,     ///< 项-上月
	monthCal_state_flag_item_cur_month = 0x8000,     ///< 项-当月
	monthCal_state_flag_item_next_month = 0x10000,    ///< 项-下月
};

enum propertyGrid_state_flag_
{
	propertyGrid_state_flag_item_leave = 0x0080,
	propertyGrid_state_flag_item_stay = 0x0100,

	propertyGrid_state_flag_item_select = 0x0200,
	propertyGrid_state_flag_item_select_no = 0x0400,

	propertyGrid_state_flag_group_leave = 0x0800,
	propertyGrid_state_flag_group_expand = 0x1000,
	propertyGrid_state_flag_group_expand_no = 0x2000,
};

enum pane_state_flag_
{
	pane_state_flag_leave = element_state_flag_leave,
	pane_state_flag_stay = element_state_flag_stay,

	pane_state_flag_caption = 0x0080,
	pane_state_flag_body = 0x0100,
};

enum layout_state_flag_
{
	layout_state_flag_nothing = window_state_flag_nothing,  ///<无
	layout_state_flag_full = 0x0001,   //完整背景
	layout_state_flag_body = 0x0002,   //内容区域, 不包含边大小
};

///@}

/// @defgroup group_monthCal_button_type_    月历元素上的按钮类型
/// @ingroup macroDefine
/// @{
enum monthCal_button_type_
{
	monthCal_button_type_today = 0,  ///< 今天按钮
	monthCal_button_type_last_year,  ///< 上一年
	monthCal_button_type_next_year,  ///< 下一年
	monthCal_button_type_last_month, ///< 上一月
	monthCal_button_type_next_month, ///< 下一月
};

///@}

///@defgroup  group_monthCal_item_i_    月历元素项数据
///@ingroup   macroDefine
///@{

/// 月历元素项数据
struct monthCal_item_i
{
	int  nDay;     ///< 日期
	int  nType;    ///< 1上月,2当月,3下月
	int  nState;   ///< 组合状态 monthCal_state_flag_
	RECT rcItem;   ///< 项坐标
};

enum xc_fontStyle_i
{
	xc_fontStyle_regular = 0,  ///<正常
	xc_fontStyle_bold = 1,  ///<粗体
	xc_fontStyle_italic = 2,  ///<斜体
	xc_fontStyle_boldItalic = 3,  ///<粗斜体
	xc_fontStyle_underline = 4,  ///<下划线
	xc_fontStyle_strikeout = 8   ///<删除线
};

///@}

///@defgroup  group_adapter_date_type_    数据适配器数据类型
///@ingroup   macroDefine
///@{
enum  adapter_date_type_
{
	adapter_date_type_error = -1,
	adapter_date_type_int = 0,     ///<整形
	adapter_date_type_float = 1,   ///<浮点型
	adapter_date_type_string = 2,  ///<字符串
	adapter_date_type_image = 3,   ///<图片
};

///@}

///////////////////////////////////////////////////////////////////////////////////
/////////////////////窗口消息//////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

//窗口消息
/**
@addtogroup wndMSG

<hr>
<h2>Windows 标准消息</h2>
- @ref WM_PAINT 窗口绘制消息
- @ref WM_CLOSE 窗口关闭消息.
- @ref WM_DESTROY 窗口销毁消息.
- @ref WM_NCDESTROY 窗口非客户区销毁消息.
- @ref WM_MOUSEMOVE 窗口鼠标移动消息.
- @ref WM_LBUTTONDOWN 窗口鼠标左键按下消息
- @ref WM_LBUTTONUP 窗口鼠标左键弹起消息.
- @ref WM_RBUTTONDOWN 窗口鼠标右键按下消息.
- @ref WM_RBUTTONUP 窗口鼠标右键弹起消息.
- @ref WM_LBUTTONDBLCLK 窗口鼠标左键双击消息.
- @ref WM_RBUTTONDBLCLK 窗口鼠标右键双击消息.
- @ref WM_MOUSEWHEEL 窗口鼠标滚轮滚动消息.
- @ref WM_EXITSIZEMOVE 窗口退出移动或调整大小模式循环改，详情参见MSDN.
- @ref WM_MOUSEHOVER 窗口鼠标进入消息
- @ref WM_MOUSELEAVE 窗口鼠标离开消息.
- @ref WM_SIZE 窗口大小改变消息.
- @ref WM_TIMER 窗口定时器消息.
- @ref WM_SETFOCUS 窗口获得焦点.
- @ref WM_KILLFOCUS 窗口失去焦点.
- @ref WM_KEYDOWN 窗口键盘按键消息.
- @ref WM_CAPTURECHANGED 窗口鼠标捕获改变消息.
- @ref WM_SETCURSOR  窗口设置鼠标光标.
- @ref WM_CHAR       窗口字符消息.
- @ref WM_DROPFILES  拖动文件到窗口.
- @ref other 其他Windows系统消息,包含你自定义的Windows消息.

<hr>
@anchor WM_PAINT WM_PAINT 窗口绘制消息
@code   int CALLBACK OnWndDrawWindow(HDRAW hDraw,BOOL *pbHandled); @endcode
@param  hDraw   图形绘制句柄.

<hr>
@anchor WM_CLOSE WM_CLOSE 窗口关闭消息.
@code   int CALLBACK OnWndClose(BOOL *pbHandled); @endcode

<hr>
@anchor WM_DESTROY WM_DESTROY 窗口销毁消息.
@code   int CALLBACK OnWndDestroy(BOOL *pbHandled);  @endcode

<hr>
@anchor WM_NCDESTROY WM_NCDESTROY 窗口非客户区销毁消息.
@code   int CALLBACK OnWndNCDestroy(BOOL *pbHandled); @endcode

<hr>
@anchor WM_MOUSEMOVE WM_MOUSEMOVE 窗口鼠标移动消息.
@code   int CALLBACK OnWndMouseMove(UINT nFlags,POINT *pPt,BOOL *pbHandled);  @endcode
@param  flags   请参见MSDN WM_MOUSEMOVE wParam参数.
@param  pPt     鼠标坐标点.

<hr>
@anchor WM_LBUTTONDOWN WM_LBUTTONDOWN 窗口鼠标左键按下消息
@code   int CALLBACK OnWndLButtonDown(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   请参见MSDN WM_LBUTTONDOWN.
@param  pPt     鼠标坐标点.

<hr>
@anchor WM_LBUTTONUP WM_LBUTTONUP 窗口鼠标左键弹起消息.
@code   int CALLBACK OnWndLButtonUp(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   请参见MSDN WM_LBUTTONUP.
@param  pPt     鼠标坐标点.

<hr>
@anchor WM_RBUTTONDOWN WM_RBUTTONDOWN 窗口鼠标右键按下消息.
@code   int CALLBACK OnWndRButtonDown(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   请参见MSDN WM_RBUTTONDOWN.
@param  pPt     鼠标坐标点.

<hr>
@anchor WM_RBUTTONUP WM_RBUTTONUP 窗口鼠标右键弹起消息.
@code   int CALLBACK OnWndRButtonUp(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   请参见MSDN WM_RBUTTONUP.
@param  pPt     鼠标坐标点.

<hr>
@anchor WM_LBUTTONDBLCLK WM_LBUTTONDBLCLK 窗口鼠标左键双击消息.
@code   int CALLBACK OnWndLButtonDBClick(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   请参见MSDN WM_LBUTTONDBLCLK.
@param  pPt     鼠标坐标点.

<hr>
@anchor WM_RBUTTONDBLCLK WM_RBUTTONDBLCLK 窗口鼠标右键双击消息.
@code   int CALLBACK OnWndRButtonDBClick(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   请参见MSDN WM_RBUTTONDBLCLK.
@param  pPt     鼠标坐标点.

<hr>
@anchor WM_MOUSEWHEEL WM_MOUSEWHEEL 窗口鼠标滚轮滚动消息.
@code   int CALLBACK OnWndMouseWheel(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   请参见MSDN WM_MOUSEWHEEL消息wParam参数.
@param  pPt     鼠标坐标点.

<hr>
@anchor WM_EXITSIZEMOVE WM_EXITSIZEMOVE 窗口退出移动或调整大小模式循环改，详情参见MSDN.
@code   int CALLBACK OnWndExitSizeMove(BOOL *pbHandled); @endcode

<hr>
@anchor WM_MOUSEHOVER WM_MOUSEHOVER 窗口鼠标进入消息.
@code   int CALLBACK OnWndMouseHover(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags  请参见MSDN WM_MOUSEHOVER消息wParam参数.
@param  pPt    鼠标位置

<hr>
@anchor WM_MOUSELEAVE WM_MOUSELEAVE 窗口鼠标离开消息.
@code   int CALLBACK OnWndMouseLeave(BOOL *pbHandled); @endcode

<hr>
@anchor WM_SIZE WM_SIZE 窗口大小改变消息.
@code   int CALLBACK OnWndSize(UINT nFlags,SIZE *pSize,BOOL *pbHandled); @endcode
@param  flags   请参见MSDN WM_SIZE消息wParam参数.
@param  pSize   窗口大小.

<hr>
@anchor WM_TIMER WM_TIMER 窗口定时器消息.
@code   int CALLBACK OnWndTimer(UINT nIDEvent,BOOL *pbHandled); @endcode
@param  nIDEnent 定时器标示符.
@param  uElapse  指定所经过的系统启动以来的毫秒数,这是由GetTickCount函数的返回值.

<hr>
@anchor WM_SETFOCUS WM_SETFOCUS 窗口获得焦点.
@code   int CALLBACK OnWndSetFocus(BOOL *pbHandled); @endcode

<hr>
@anchor WM_KILLFOCUS WM_KILLFOCUS 窗口失去焦点.
@code   int CALLBACK OnWndKillFocus(BOOL *pbHandled); @endcode

<hr>
@anchor WM_KEYDOWN WM_KEYDOWN 窗口键盘按键消息.
@code   int CALLBACK OnWndKeyDown(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
@note   wParam,lParam:请参见MSDN WM_KEYDOWN.

<hr>
@anchor WM_CAPTURECHANGED WM_CAPTURECHANGED 窗口鼠标捕获改变消息.
@code   int CALLBACK OnWndCaptureChanged(HWND hWnd,BOOL *pbHandled); @endcode
@param  hWnd    获得鼠标捕获的窗口句柄.

<hr>
@anchor  WM_SETCURSOR WM_SETCURSOR 窗口设置鼠标光标.
@code    int CALLBACK OnWndSetCursor(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
@note    wParam,lParam:请参见MSDN WM_SETCURSOR.

<hr>
@anchor  WM_CHAR WM_CHAR 窗口字符输入消息.
@code    int CALLBACK OnWndChar(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
@note    wParam,lParam:请参见MSDN WM_CHAR.

<hr>
@anchor  WM_DROPFILES WM_DROPFILES 拖动文件到窗口消息.
@code    int CALLBACK OnDropFiles(HDROP hDropInfo , BOOL *pbHandled); @endcode
@note    请参见MSDN WM_DROPFILES.

<hr>
@anchor other 其他Windows系统消息,包含你自定义的Windows消息.
@code   int CALLBACK OnWndOther(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
@param  wParam  消息参数.
@param  lParam  消息参数.
@note   参数信息请参见MSDN.
@{
*/

//窗口消息-包含系统非客户区消息
#define  XWM_EVENT_ALL        WM_APP+1000 //事件投递 -------不公开-------不需要注册

//wParam:left-top坐标组合; lParam:right-bottom坐标组合; 如果这2个参数为空,那么重绘整个窗口
//#define  XWM_REDRAW           WM_APP+1007  //窗口重绘延时 ----不公开-----内部自定义消息

//重绘元素,内部使用
#define  XWM_REDRAW_ELE       0x7000+1 //重绘元素 wParam:元素句柄, lParam:RECT*基于窗口坐标

///@brief 窗口消息过程
///@code  int CALLBACK OnWndProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL *pbHandled);  @endcode
#define  XWM_WINDPROC         0x7000+2    //注册窗口处理过程

#define  XWM_DRAW_T           0x7000+3    //窗口绘制,内部使用, wParam:0, lParam:0

#define  XWM_TIMER_T          0x7000+4    //内部使用, wParam:hXCGUI, lParam:ID

#define  XWM_CLOUDUI_DOWNLOADFILE_COMPLETE   0x7000+6  //内部使用

#define  XWM_CLOUNDUI_OPENURL_WAIT    0x7000+7 //内部使用

#define  XWM_CALL_UI_THREAD   0x7000+8     //内部使用

/// @brief  炫彩定时器,非系统定时器,注册消息XWM_TIMER接收
/// @code  int CALLBACK OnWndXCTimer(UINT nTimerID,BOOL *pbHandled);  @endcode
/// @param hWindow   窗口句柄
/// @param nTimerID   定时器ID
#define  XWM_XC_TIMER         0x7000+5 //wParam:定时器ID, lParam:0

///@brief 菜单弹出
///@code  int CALLBACK OnWndMenuPopup(HMENUX hMenu, BOOL *pbHandled); @endcode
#define  XWM_MENU_POPUP       0x7000+11

///@brief 菜单弹出窗口
///@code  int CALLBACK OnWndMenuPopupWnd(HMENUX hMenu,menu_popupWnd_i *pInfo,BOOL *pbHandled); @endcode
#define  XWM_MENU_POPUP_WND     0x7000+12    

///@brief 菜单选择
///@code  int CALLBACK OnWndMenuSelect(int nID,BOOL *pbHandled); @endcode
#define  XWM_MENU_SELECT       0x7000+13 //菜单选择 wParam:菜单项ID, lParam:0

///@brief 菜单退出
///@code  int CALLBACK OnWndMenuExit(BOOL *pbHandled); @endcode
#define  XWM_MENU_EXIT         0x7000+14 //菜单退出 wParam:0, lParam:0

///@brief 绘制菜单背景, 启用该功能需要调用XMenu_EnableDrawBackground().
///@code  int CALLBACK OnWndMenuDrawBackground(HDRAW hDraw,menu_drawBackground_i *pInfo,BOOL *pbHandled); @endcode
#define  XWM_MENU_DRAW_BACKGROUND   0x7000+15 //绘制菜单背景

/// @brief 绘制菜单项事件, 启用该功能需要调用XMenu_EnableDrawItem().
/// @code  int CALLBACK OnMenuDrawItem(HDRAW hDraw,menu_drawItem_i* pInfo,BOOL *pbHandled); @endcode
#define  XWM_MENU_DRAWITEM           0x7000+16  //绘制菜单项 

#define  XWM_COMBOBOX_POPUP_DROPLIST   0x7000+17  //弹出下拉组框列表,内部使用

///@brief 浮动窗格
///@code  int CALLBACK OnWndFloatPane(HWINDOW hFloatWnd, HELE hPane, BOOL *pbHandled); @endcode
#define  XWM_FLOAT_PANE               0x7000+18 //浮动窗格, 窗格从框架窗口中弹出,变成浮动窗格

///@brief 窗口绘制完成消息
///@code   int CALLBACK OnWndDrawWindowEnd(HDRAW hDraw,BOOL *pbHandled); @endcode
#define  XWM_PAINT_END               0x7000+19

///@brief 窗口绘制完成并且已经显示到屏幕
///@code   int CALLBACK OnWndDrawWindowDisplay(BOOL *pbHandled); @endcode
#define  XWM_PAINT_DISPLAY           0x7000+20


///@}

///////////////////////////////////////////////////////////////////////////////////
/////////////////元素事件//////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
//元素事件
/// @addtogroup eleEvents
/// @{


/// @brief 元素处理过程事件.
/// @code  int CALLBACK OnEventProc(UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled) @endcode
#define  XE_ELEPROCE         1     ///元素事件处理过程

/// @brief 元素绘制事件
/// @code  int CALLBACK OnDraw(HDRAW hDraw,BOOL *pbHandled);  @endcode
#define  XE_PAINT            2

/// @brief 该元素及子元素绘制完成事件.启用该功能需要调用XEle_EnableEvent_XE_PAINT_END();
/// @code  int CALLBACK OnPaintEnd(HDRAW hDraw,BOOL *pbHandled); @endcode
#define  XE_PAINT_END        3     //元素及子元素绘制完成后触发,需要启用该功能,XEle_EnableEvent_XE_PAINT_END();

/// @brief 滚动视图绘制事件.
/// @code int CALLBACK OnDrawScrollView(HDRAW hDraw,BOOL *pbHandled); @endcode
#define  XE_PAINT_SCROLLVIEW   4

/// @brief 元素鼠标移动事件.
/// @code  int CALLBACK OnMouseMove(UINT nFlags, POINT *pPt, BOOL *pbHandled);  @endcode
#define  XE_MOUSEMOVE        5

/// @brief 元素鼠标停留事件.
/// @code  int CALLBACK OnMouseStay(BOOL *pbHandled); @endcode
#define  XE_MOUSESTAY        6   ///停留

/// @brief 元素鼠标悬停事件.
/// @code  int CALLBACK OnMouseHover(UINT nFlags, POINT *pPt, BOOL *pbHandled); @endcode
#define  XE_MOUSEHOVER       7   ///悬停

/// @brief 元素鼠标离开事件.
/// @param  hEleStay 将获得鼠标停留状态的元素.
/// @code  int CALLBACK OnMouseLeave(HELE hEleStay,BOOL *pbHandled); @endcode
#define  XE_MOUSELEAVE       8   ///离开

/// @brief 元素鼠标滚轮滚动事件. 如果非滚动视图需要调用 XEle_EnableEvent_XE_MOUSEWHEEL()
/// @code  int CALLBACK OnMouseWheel(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
/// @param flags      见MSDN中WM_MOUSEWHEEL消息wParam参数说明.
#define  XE_MOUSEWHEEL         9  //鼠标滚轮  wParam:标识,lParam:POINT坐标

/// @brief 鼠标左键按下事件.
/// @code  int CALLBACK OnLButtonDown(UINT nFlags, POINT *pPt,BOOL *pbHandled);  @endcode
#define  XE_LBUTTONDOWN        10

/// @brief 鼠标左键弹起事件.
/// @code  int CALLBACK OnLButtonUp(UINT nFlags, POINT *pPt,BOOL *pbHandled); @endcode
#define  XE_LBUTTONUP          11

/// @brief 鼠标右键按下事件.
/// @code  int CALLBACK OnRButtonDown(UINT nFlags, POINT *pPt,BOOL *pbHandled);  @endcode
#define  XE_RBUTTONDOWN        12

/// @brief 鼠标右键弹起事件.
/// @code int CALLBACK OnRButtonUp(UINT nFlags, POINT *pPt,BOOL *pbHandled);  @endcode
#define  XE_RBUTTONUP          13

/// @brief 鼠标左键双击事件.
/// @code   int CALLBACK OnLButtonDBClick(UINT nFlags, POINT *pPt,BOOL *pbHandled); @endcode
#define  XE_LBUTTONDBCLICK     14


//#define  XE_RBUTTONDBCLICK     15


/// @brief 炫彩定时器,非系统定时器,定时器消息 XM_TIMER.
/// @code int CALLBACK OnEleXCTimer(UINT nTimerID,BOOL *pbHandled); @endcode
/// @param hEle        元素句柄.
/// @param nTimerID    定时器ID.
#define  XE_XC_TIMER             16  //wParam:定时器ID, lParam:0

/// @brief 调整布局事件.
/// @code int CALLBACK OnAdjustLayout(int nFlags, BOOL *pbHandled); @endcode
#define  XE_ADJUSTLAYOUT         17

/// @brief 调整布局完成事件.
/// @code int CALLBACK OnAdjustLayoutEnd(int nFlags, BOOL *pbHandled); @endcode
#define  XE_ADJUSTLAYOUT_END     18

/// @brief 元素获得焦点事件.
/// @code int CALLBACK OnSetFocus(BOOL *pbHandled); @endcode
#define  XE_SETFOCUS           31

/// @brief 元素失去焦点事件.
/// @code int CALLBACK OnKillFocus(BOOL *pbHandled); @endcode
#define  XE_KILLFOCUS          32

/// @brief 元素销毁事件.
/// @code int CALLBACK OnDestroy(BOOL *pbHandled); @endcode
#define  XE_DESTROY            33   //元素销毁

/// @brief 按钮点击事件.
/// @code int CALLBACK OnBtnClick(BOOL *pbHandled); @endcode
#define  XE_BNCLICK            34

/// @brief 按钮选中事件.
/// @code int CALLBACK OnButtonCheck(BOOL bCheck,BOOL *pbHandled); @endcode
#define  XE_BUTTON_CHECK       35  //按钮选中事件

/// @brief 元素大小改变事件.
/// @code int CALLBACK OnSize(int nFlags, BOOL *pbHandled); @endcode
#define  XE_SIZE               36

/// @brief 元素显示隐藏事件.
/// @code  int CALLBACK OnShow(BOOL bShow,BOOL *pbHandled); @endcode
#define  XE_SHOW               37  //wParam:TRUE或FALSE, lParam:0

/// @brief 元素设置字体事件.
/// @code  int CALLBACK OnSetFont(BOOL *pbHandled); @endcode
#define  XE_SETFONT           38

/// @brief 元素按键事件.
/// @code  int CALLBACK OnEventKeyDown(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
/// @note  wParam,lParam:请参见MSDN WM_KEYDOWN. 
#define  XE_KEYDOWN            39 //wParam和lParam参数与标准消息相同

/// @brief 元素按键事件.
/// @code  int CALLBACK OnEventKeyUp(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
/// @note  wParam,lParam:请参见MSDN WM_KEYDOWN. 
#define  XE_KEYUP             40 //wParam和lParam参数与标准消息相同

/// @brief 通过TranslateMessage函数翻译的字符事件.
/// @code  int CALLBACK OnEventChar(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
/// @note   wParam,lParam:请参见MSDN WM_KEYDOWN. 
#define  XE_CHAR               41  //wParam和lParam参见MSDN

/// @brief 元素设置鼠标捕获.
/// @code int CALLBACK OnSetCapture(BOOL *pbHandled); @endcode
#define  XE_SETCAPTURE      51

/// @brief 元素失去鼠标捕获.
/// @code int CALLBACK OnKillCapture(BOOL *pbHandled); @endcode
#define  XE_KILLCAPTURE     52

/// @brief 设置鼠标光标
/// @code int CALLBACK OnSetCursor(WPARAM wParam,LPARAM lParam,BOOL *pbHandled) @endcode
#define  XE_SETCURSOR            53  // SetCursor

/// @brief 滚动视图元素水平滚动事件,滚动视图触发.
/// @code  int CALLBACK OnScrollViewScrollH(int pos,BOOL *pbHandled); @endcode
/// @param pos         当前滚动点.
#define  XE_SCROLLVIEW_SCROLL_H    54  //滚动视图 滚动事件 wParam:滚动点,lParam:0 (滚动视图触发,表明滚动视图已滚动完成)

/// @brief 滚动视图元素垂直滚动事件,滚动视图触发.
/// @code  int CALLBACK OnScrollViewScrollV(int pos,BOOL *pbHandled); @endcode
/// @param pos         当前滚动点.
#define  XE_SCROLLVIEW_SCROLL_V    55  //滚动视图 滚动事件 wParam:滚动点,lParam:0 (滚动视图触发,表明滚动视图已滚动完成)

/// @brief 滚动条元素滚动事件,滚动条触发.
/// @code  int CALLBACK OnSBarScroll(int pos,BOOL *pbHandled); @endcode
/// @param pos   当前滚动点.
#define  XE_SBAR_SCROLL        56   //滚动条滚动事件 wParam:滚动点,lParam:0 (滚动条触发)

///@brief 菜单弹出
///@code  int CALLBACK OnMenuPopup(HMENUX hMenu, BOOL *pbHandled); @endcode
#define  XE_MENU_POPUP       57

///@brief 菜单弹出窗口
///@code  int CALLBACK OnMenuPopupWnd(HMENUX hMenu,menu_popupWnd_i* pInfo,BOOL *pbHandled); @endcode
#define  XE_MENU_POPUP_WND     58

/// @brief 弹出菜单项选择事件.
/// @code  int CALLBACK OnMenuSelect(int nItem,BOOL *pbHandled); @endcode
/// @param nItem          菜单项id.
#define  XE_MENU_SELECT      59  //菜单项选择 wParam:菜单ID,lParam:0

///@brief 绘制菜单背景, 启用该功能需要调用XMenu_EnableDrawBackground().
///@code  int CALLBACK OnMenuDrawBackground(HDRAW hDraw,menu_drawBackground_i *pInfo,BOOL *pbHandled); @endcode
#define  XE_MENU_DRAW_BACKGROUND   60 //绘制菜单背景

/// @brief 绘制菜单项事件, 启用该功能需要调用XMenu_EnableDrawItem().
/// @code  int CALLBACK OnMenuDrawItem(HDRAW hDraw,menu_drawItem_i* pInfo,BOOL *pbHandled); @endcode
#define  XE_MENU_DRAWITEM    61  //绘制菜单项 

/// @brief 弹出菜单退出事件.
/// @code  int CALLBACK OnMenuExit(BOOL *pbHandled); @endcode
#define  XE_MENU_EXIT        62 //菜单退出

/// @brief 滑动条元素,滑块位置改变事件.
/// @code  int CALLBACK OnSliderBarChange(int pos,BOOL *pbHandled); @endcode
#define  XE_SLIDERBAR_CHANGE   63

/// @brief 进度条元素,进度改变事件.
/// @code  int CALLBACK OnProgressBarChange(int pos,BOOL *pbHandled); @endcode
#define  XE_PROGRESSBAR_CHANGE  64

/// @brief 组合框下拉列表项选择事件.
/// @code  int CALLBACK OnComboBoxSelect(int iItem,BOOL *pbHandled);  @endcode
#define  XE_COMBOBOX_SELECT       71   //组合框项选择  

/// @brief 组合框下拉列表项选择完成事件,编辑框内容已经改变.
/// @code  int CALLBACK OnComboBoxSelectEnd(int iItem,BOOL *pbHandled);  @endcode
#define  XE_COMBOBOX_SELECT_END   74   //组合框项选择  

/// @brief 组合框下拉列表弹出事件.
/// @code  int CALLBACK OnComboBoxPopupList(HWINDOW hWindow,HELE hListBox,BOOL *pbHandled);  @endcode
#define  XE_COMBOBOX_POPUP_LIST   72

/// @brief 组合框下拉列表退出事件.
/// @code  int CALLBACK OnComboBoxExitList(BOOL *pbHandled);  @endcode
#define  XE_COMBOBOX_EXIT_LIST    73

/// @brief 列表框元素,项模板创建.
/// @code int CALLBACK OnListBoxTemplateCreate(listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_TEMP_CREATE     81

/// @brief 列表框元素,项模板创建完成事件.
/// @code int CALLBACK OnListBoxTemplateCreateEnd(listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_TEMP_CREATE_END     82

/// @brief 列表框元素,项模板销毁.
/// @code int CALLBACK OnListBoxTemplateDestroy(listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_TEMP_DESTROY    83

/// @brief 列表框元素,项模板调整坐标.
/// @code  int CALLBACK OnListBoxTemplateAdjustCoordinate(listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_TEMP_ADJUST_COORDINATE  84

/// @brief 列表框元素,项绘制事件.
/// @code  int CALLBACK OnListBoxDrawItem(HDRAW hDraw,listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_DRAWITEM     85

/// @brief 列表框元素,项选择事件.
/// @code  int CALLBACK OnListBoxSelect(int iItem,BOOL *pbHandled);  @endcode
#define  XE_LISTBOX_SELECT       86

/// @brief 列表元素,项模板创建.
/// @code  int CALLBACK OnListTemplateCreate(list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_TEMP_CREATE     101

/// @brief 列表元素,项模板创建完成事件.
/// @code  int CALLBACK OnListTemplateCreateEnd(list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_TEMP_CREATE_END     102

/// @brief 列表元素,项模板销毁.
/// @code int CALLBACK OnListTemplateDestroy(list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_TEMP_DESTROY    103

/// @brief 列表元素,项模板调整坐标.
/// @code  typedef int CALLBACK OnListTemplateAdjustCoordinate(list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_TEMP_ADJUST_COORDINATE  104

/// @brief 列表元素,绘制项.
/// @code  int CALLBACK OnListDrawItem(HDRAW hDraw,list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_DRAWITEM                105

/// @brief 列表元素,项选择事件.
/// @code  int CALLBACK OnListSelect(int iItem,BOOL *pbHandled); @endcode
#define  XE_LIST_SELECT                  106

/// @brief 列表元素绘制列表头项.
/// @code  int CALLBACK OnListHeaderDrawItem(HDRAW hDraw, list_header_item_i* pItem, BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_DRAWITEM         107

/// @brief 列表元素,列表头项点击事件.
/// @code  int CALLBACK OnListHeaderClick(int iItem, BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_CLICK            108

/// @brief 列表元素,列表头项宽度改变事件.
/// @code  int CALLBACK OnListHeaderItemWidthChange(int iItem, int nWidth BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_WIDTH_CHANGE     109

/// @brief 列表元素,列表头项模板创建.
/// @code  int CALLBACK OnListHeaderTemplateCreate(list_header_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_TEMP_CREATE          110

/// @brief 列表元素,列表头项模板创建完成事件.
/// @code  int CALLBACK OnListHeaderTemplateCreateEnd(list_header_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_TEMP_CREATE_END      111

/// @brief 列表元素,列表头项模板销毁.
/// @code int CALLBACK OnListHeaderTemplateDestroy(list_header_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_TEMP_DESTROY          112

/// @brief 列表元素,列表头项模板调整坐标.
/// @code  typedef int CALLBACK OnListHeaderTemplateAdjustCoordinate(list_header_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_TEMP_ADJUST_COORDINATE  113


/// @brief 树元素,项模板创建.
/// @code  int CALLBACK OnTreeTemplateCreate(tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_TEMP_CREATE             121  

/// @brief 树元素,项模板创建完成.
/// @code  int CALLBACK OnTreeTemplateCreateEnd(tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_TEMP_CREATE_END         122

/// @brief 树元素,项模板销毁.
/// @code  int CALLBACK OnTreeTemplateDestroy(tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_TEMP_DESTROY            123 

/// @brief 树元素,项模板,调整项坐标.
/// @code  int CALLBACK OnTreeTemplateAdjustCoordinate(tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_TEMP_ADJUST_COORDINATE  124  

/// @brief 树元素,绘制项.
/// @code  int CALLBACK OnTreeDrawItem(HDRAW hDraw,tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_DRAWITEM                125  

/// @brief 树元素,项选择事件.
/// @code  int CALLBACK OnTreeSelect(int nItemID,BOOL *pbHandled); @endcode
/// @param nItemID  项ID.
#define  XE_TREE_SELECT                 126

/// @brief 树元素,项展开收缩事件.
/// @code int CALLBACK OnTreeExpand(int id,BOOL bExpand,BOOL *pbHandled); @endcode
#define  XE_TREE_EXPAND                 127

/// @brief 树元素,用户正在拖动项, 可对参数值修改.
/// @code int CALLBACK OnTreeDragItemIng(tree_drag_item_i* pInfo, BOOL *pbHandled); @endcode 
#define XE_TREE_DRAG_ITEM_ING           128

/// @brief 树元素,拖动项事件.
/// @code int CALLBACK OnTreeDragItem(tree_drag_item_i* pInfo, BOOL *pbHandled); @endcode 
#define XE_TREE_DRAG_ITEM               129

/// @brief 列表视元素,项模板创建.
/// @code  int CALLBACK OnListViewTemplateCreate(listView_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_TEMP_CREATE           141

/// @brief 列表视元素,项模板创建完成事件.
/// @code  int CALLBACK OnListViewTemplateCreateEnd(listView_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_TEMP_CREATE_END           142

/// @brief 列表视元素,项模板销毁.
/// @code  int CALLBACK OnListViewTemplateDestroy(listView_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_TEMP_DESTROY           143

/// @brief 列表视元素,项模板调整坐标.
/// @code  int CALLBACK OnListViewTemplateAdjustCoordinate(listView_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_TEMP_ADJUST_COORDINATE   144

/// @brief 列表视元素,自绘项.
/// @code int CALLBACK OnListViewDrawItem(HDRAW hDraw,listView_item_i* pItem,BOOL *pbHandled);  @endcode
#define  XE_LISTVIEW_DRAWITEM              145

/// @brief 列表视元素,项选择事件.
/// @code int CALLBACK OnListViewSelect(int iGroup,int iItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_SELECT            146

/// @brief 列表视元素,组展开收缩事件.
/// @code int CALLBACK OnListViewExpand(int iGroup,BOOL bExpand,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_EXPAND         147


/// @brief 属性网格元素 项值改变事件
/// @code   int CALLBACK OnPGridValueChange(int nItemID,BOOL *pbHandled); @endcode
/// @param  nItemID  项ID.
#define  XE_PGRID_VALUE_CHANGE     151

/// @code int CALLBACK OnPGridItemSet(int nItemID, BOOL *pbHandled);  @endcode
#define XE_PGRID_ITEM_SET          152

/// @code int CALLBACK OnPGridItemSelect(int nItemID, BOOL *pbHandled);  @endcode
#define XE_PGRID_ITEM_SELECT         153  //项选择

/// @code int CALLBACK OnPGridItemAdjustCoordinate(propertyGrid_item_i* pItem, BOOL *pbHandled);  @endcode
#define XE_PGRID_ITEM_ADJUST_COORDINATE  154

/// @code int CALLBACK OnPGridItemDestroy(int nItemID, BOOL *pbHandled);  @endcode
#define XE_PGRID_ITEM_DESTROY   155

/// @code int CALLBACK OnPGridItemExpand(int nItemID, BOOL bExpand, BOOL *pbHandled); @endcode
#define XE_PGRID_ITEM_EXPAND    156

/// @brief 富文本元素 用户修改内容事件,只有当用户操作时才会触发,需要开启后有效, XRichEdit_EnableEvent_XE_RICHEDIT_CHANGE()；
/// XRichEdit_SetText()、 XRichEdit_InsertString()不会触发此事件
/// @code   int CALLBACK OnRichEditChange(BOOL *pbHandled); @endcode
#define  XE_RICHEDIT_CHANGE       161

/// @code int CALLBACK OnEditSet(BOOL *pbHandled);  @endcode
#define XE_EDIT_SET           162

/// @code int CALLBACK OnEditDrawRow(HDRAW hDraw, int iRow, BOOL *pbHandled);  @endcode
#define XE_EDIT_DRAWROW    181   //暂未使用

/// @code int CALLBACK OnEditChanged(BOOL *pbHandled);  @endcode
#define XE_EDIT_CHANGED   182  //内容被更改

/// @code int CALLBACK OnEditPosChanged(int iPos, BOOL *pbHandled);  @endcode
#define XE_EDIT_POS_CHANGED    183  //位置改变

/// @code int CALLBACK OnEditStyleChanged(int iStyle, BOOL *pbHandled);  @endcode
#define XE_EDIT_STYLE_CHANGED  184  //样式改变

/// @code int CALLBACK OnEditorSetBreakpoint(int iRow, BOOL bCheck, BOOL *pbHandled);  @endcode
#define XE_EDITOR_SETBREAKPOINT       191 //设置断点

/// @code int CALLBACK OnEditorRemoveBreakpoint(int iRow, BOOL *pbHandled);  @endcode
#define XE_EDITOR_REMOVEBREAKPOINT    192 //移除断点

/// @code int CALLBACK OnEditorBreakpointChanged(int iRow, int iChangeRows, BOOL *pbHandled);  @endcode
#define XE_EDITOR_BREAKPOINT_CHANGED  193 //断点位置改变


/// @brief  TabBar标签按钮选择改变事件
/// @code   int CALLBACK OnTabBarSelect(int iItem, BOOL *pbHandled); @endcode
/// @param  iItem  标签位置索引.
#define  XE_TABBAR_SELECT    221

/// @brief  TabBar标签按钮删除事件
/// @code   int CALLBACK OnTabBarDelete(int iItem, BOOL *pbHandled); @endcode
/// @param  iItem  标签位置索引.
#define  XE_TABBAR_DELETE    222

/// @brief  月历元素日期改变事件, 未开放
/// @code   int CALLBACK OnCalendarChange(BOOL *pbHandled); @endcode
#define  XE_MONTHCAL_CHANGE   231   //月历 日期改变事件

/// @brief  日期时间元素,内容改变事件, 未开放
/// @code   int CALLBACK OnDateTimeChange(BOOL *pbHandled); @endcode
#define  XE_DATETIME_CHANGE    241   //日期时间元素  改变事件

/// @brief  日期时间元素,弹出月历卡片事件, 未开放
/// @code   int CALLBACK OnDateTimePopupMonthCal(HWINDOW hMonthCalWnd,HELE hMonthCal,BOOL *pbHandled); @endcode
#define  XE_DATETIME_POPUP_MONTHCAL     242   //日期时间元素  弹出月历事件

/// @brief  日期时间元素,弹出的月历卡片退出事件, 未开放
/// @code   int CALLBACK OnDateTimeExitMonthCal(HWINDOW hMonthCalWnd,HELE hMonthCal,BOOL *pbHandled); @endcode
#define  XE_DATETIME_EXIT_MONTHCAL      243   //日期时间元素  退出月历事件

/// @brief  文件拖放事件.
/// @code   int CALLBACK OnDropFiles(HDROP hDropInfo, BOOL *pbHandled); @endcode
#define  XE_DROPFILES                 250  

//#define  XE_LISTVIEW_DRAG_INSERT
//#define  XE_PANE_LOACK
//#define  XE_PANE_DOCK
//#define  XE_PANE_FLOAT

///@}

///////////////////////////////////////////////////////////////////////////////////
/////////////事件注册//////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
class bind_event_cpp
{
public:
	virtual BOOL  Equal(bind_event_cpp* p) = 0;
	virtual void* GetThis() = 0;
	virtual void* GetMFun(int &nSize) = 0;
	virtual int HandleEvent(int regType, HELE hEle, HELE hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled) = 0;
	virtual int HandleEventWnd(int regType, HWINDOW hWindow, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled) = 0;
};

template<class R, class C, class F>
class bind_event_cpp_ : public bind_event_cpp
{
public:
	bind_event_cpp_(C* c, F f) :_c(c), _f(f) { }
	virtual BOOL Equal(bind_event_cpp* p) {
		if (_c != p->GetThis())
			return FALSE;
		int size = 0;
		void*  f = p->GetMFun(size);
		if (sizeof(F) == size)
		{
			if (0 == memcmp(f, &_f, size))
				return TRUE;
		}
		return FALSE;
	}
	virtual void* GetThis() { return (void*)_c; }
	virtual void* GetMFun(int &nSize) { nSize = sizeof(F); return &_f; }

	template<class H, class A1>
	int CallT(int (C::*f)(A1), int regType, H hEleOrWindow, H hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		if (0 == regType)
			return (_c->*f)(pbHandled);
		MessageBoxA(NULL, "HandleEvent_cpp_Call a1", "error", 0);
		return 0;
	}
	template<class H, class A1, class A2>
	int CallT(int (C::*f)(A1, A2), int regType, H hEleOrWindow, H hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		if (0 == regType)
			return (_c->*f)((A1)wParam, pbHandled);
		else if (1 == regType)
			return (_c->*f)((A1)hEventEle, pbHandled);
		MessageBoxA(NULL, "HandleEvent_cpp_Call a2", "error", 0);
		return 0;
	}
	template<class H, class A1, class A2, class A3>
	int CallT(int (C::*f)(A1, A2, A3), int regType, H hEleOrWindow, H hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		if (0 == regType)
			return (_c->*f)((A1)wParam, (A2)lParam, pbHandled);
		else if (1 == regType)
			return (_c->*f)((A1)hEventEle, (A2)wParam, pbHandled);
		else if (2 == regType)
			return (_c->*f)((A1)hEleOrWindow, (A2)hEventEle, pbHandled);
		MessageBoxA(NULL, "HandleEvent_cpp_Call a3", "error", 0);
		return 0;
	}
	template<class H, class A1, class A2, class A3, class A4>
	int CallT(int (C::*f)(A1, A2, A3, A4), int regType, H hEleOrWindow, H hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		if (0 == regType)
			return (_c->*f)((A1)nEvent, (A2)wParam, (A3)lParam, pbHandled);
		if (1 == regType)
			return (_c->*f)((A1)hEventEle, (A2)wParam, (A3)lParam, pbHandled);
		else if (2 == regType)
			return (_c->*f)((A1)hEleOrWindow, (A2)hEventEle, (A3)wParam, pbHandled);
		MessageBoxA(NULL, "HandleEvent_cpp_Call a4", "error", 0);
		return 0;
	}
	template<class H, class A1, class A2, class A3, class A4, class A5>
	int CallT(int (C::*f)(A1, A2, A3, A4, A5), int regType, H hEleOrWindow, H hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		if (1 == regType)
			return (_c->*f)((A1)hEventEle, (A2)nEvent, (A3)wParam, (A4)lParam, pbHandled);
		else if (2 == regType)
			return (_c->*f)((A1)hEleOrWindow, (A2)hEventEle, (A3)wParam, (A4)lParam, pbHandled);
		MessageBoxA(NULL, "HandleEvent_cpp_Call a5", "error", 0);
		return 0;
	}
	virtual int HandleEvent(int regType, HELE hEle, HELE hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		return CallT(_f, regType, hEle, hEventEle, nEvent, wParam, lParam, pbHandled);
	}
	virtual int HandleEventWnd(int regType, HWINDOW hWindow, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		return CallT(_f, regType, hWindow, hWindow, nEvent, wParam, lParam, pbHandled);
	}
	C*  _c;
	F   _f;
};

struct bind_event_c
{
	enum MyEnum
	{
		event_c_ex,
		event_lua_ex,
		event_js_ex,
	} type;
	virtual ~bind_event_c() {}
	virtual BOOL Equal(bind_event_c* p) { return FALSE; };
	virtual void*  GetFunc() { return NULL; };
	virtual int HandleEvent(int regType, HELE hEle, HELE hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled) { return 0; };
	virtual int HandleEventWnd(int regType, HWINDOW hWindow, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled) { return 0; };
};

struct xc_event
{
	xc_event(int regType, const char* pFunName) {
		m_pBind = 0;
		m_pFunC = 0;
		m_name[0] = 0;
		m_regType = regType;
		if (pFunName) strcpy_s(m_name, pFunName);
	}
	int            m_regType;   //注册类型, 0:CPP,1:CPP1,2:CPP2
	bind_event_cpp*  m_pBind;     //C++事件回调
	bind_event_c*    m_pFunC;     //C事件回调
	char           m_name[MAX_PATH]; //函数名

	BOOL Equal(xc_event* pEvent) {
		if (m_pBind && pEvent->m_pBind)
			return (m_pBind->Equal(pEvent->m_pBind));
		if (m_pFunC && pEvent->m_pFunC)
			return (m_pFunC->Equal(pEvent->m_pFunC));
		return FALSE;
	}
	BOOL Equal(void* pFunc) {
		if (m_pFunC)
		{
			if (m_pFunC->GetFunc() == pFunc)
				return TRUE;
		}
		return FALSE;
	}
	int HandleEvent(HELE hEle, HELE hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		if (m_pBind)
			return m_pBind->HandleEvent(m_regType, hEle, hEventEle, nEvent, wParam, lParam, pbHandled);
		if (m_pFunC)
			return m_pFunC->HandleEvent(m_regType, hEle, hEventEle, nEvent, wParam, lParam, pbHandled);
		MessageBoxA(NULL, "HandleEvent()", "error", 0);
		return 0;
	}
	int HandleEventWnd(HWINDOW hWindow, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		if (m_pBind)
			return m_pBind->HandleEventWnd(m_regType, hWindow, nEvent, wParam, lParam, pbHandled);
		if (m_pFunC)
			return m_pFunC->HandleEventWnd(m_regType, hWindow, nEvent, wParam, lParam, pbHandled);
		MessageBoxA(NULL, "HandleEventWnd()", "error", 0);
		return 0;
	}
	char* GetFunName() { return m_name; }
	virtual void Release() {
		if (m_pBind) delete m_pBind;
		if (m_pFunC) delete m_pFunC;
		delete this;
	}
};

template<class R, class C, class F>
BOOL XEle_RegEventCPP_tt(HXCGUI hXCGUI, UINT nEvent, int regType, BOOL bEle, C* c, F f, const char* pFunName) {
	BOOL bResult = TRUE;
	bind_event_cpp*  pBind = new bind_event_cpp_<R, C, F>(c, f);
	xc_event*  pEvent = new xc_event(regType, pFunName);
	pEvent->m_pBind = pBind;
	if (-1 == regType)
	{
		if (bEle)
			bResult = _XEle_RemoveEvent((HELE)hXCGUI, nEvent, pEvent);
		else
			bResult = _XWnd_RemoveEvent((HWINDOW)hXCGUI, nEvent, pEvent);
		pEvent->Release();
	} else
	{
		if (bEle)
		{
			if (FALSE == _XEle_RegEvent((HELE)hXCGUI, nEvent, pEvent))
			{
				pEvent->Release();
				bResult = FALSE;
			}
		} else
		{
			if (FALSE == _XWnd_RegEvent((HWINDOW)hXCGUI, nEvent, pEvent))
			{
				pEvent->Release();
				bResult = FALSE;
			}
		}
	}
	return bResult;
}

template<class R, class C, class CT, class A1>
BOOL XCGUI_RegEventCPP_t(HXCGUI hXCGUI, UINT nEvent, int type, BOOL bEle, C* c, R(CT::*f)(A1), const char* pFunName) {
	return XEle_RegEventCPP_tt<R>(hXCGUI, nEvent, type, bEle, (CT*)c, f, pFunName);
}

template<class R, class C, class CT, class A1, class A2>
BOOL XCGUI_RegEventCPP_t(HXCGUI hXCGUI, UINT nEvent, int type, BOOL bEle, C* c, R(CT::*f)(A1, A2), const char* pFunName) {
	return XEle_RegEventCPP_tt<R>(hXCGUI, nEvent, type, bEle, (CT*)c, f, pFunName);
}

template<class R, class C, class CT, class A1, class A2, class A3>
BOOL XCGUI_RegEventCPP_t(HXCGUI hXCGUI, UINT nEvent, int type, BOOL bEle, C* c, R(CT::*f)(A1, A2, A3), const char* pFunName) {
	return XEle_RegEventCPP_tt<R>(hXCGUI, nEvent, type, bEle, (CT*)c, f, pFunName);
}

template<class R, class C, class CT, class A1, class A2, class A3, class A4>
BOOL XCGUI_RegEventCPP_t(HXCGUI hXCGUI, UINT nEvent, int type, BOOL bEle, C* c, R(CT::*f)(A1, A2, A3, A4), const char* pFunName) {
	return XEle_RegEventCPP_tt<R>(hXCGUI, nEvent, type, bEle, (CT*)c, f, pFunName);
}

template<class R, class C, class CT, class A1, class A2, class A3, class A4, class A5>
BOOL XCGUI_RegEventCPP_t(HXCGUI hXCGUI, UINT nEvent, int type, BOOL bEle, C* c, R(CT::*f)(A1, A2, A3, A4, A5), const char* pFunName) {
	return XEle_RegEventCPP_tt<R>(hXCGUI, nEvent, type, bEle, (CT*)c, f, pFunName);
}

#define XEle_RegEventCPP(hXCGUI,Event,mFun)  XCGUI_RegEventCPP_t(hXCGUI,Event,0,TRUE,this,mFun,#mFun)
#define XEle_RegEventCPP1(hXCGUI,Event,mFun)  XCGUI_RegEventCPP_t(hXCGUI,Event,1,TRUE,this,mFun,#mFun)
#define XEle_RegEventCPP2(hXCGUI,Event,mFun)  XCGUI_RegEventCPP_t(hXCGUI,Event,2,TRUE,this,mFun,#mFun)
#define XEle_RemoveEventCPP(hXCGUI,Event,mFun) XCGUI_RegEventCPP_t(hXCGUI,Event,-1,TRUE,this,mFun,#mFun)

#define XWnd_RegEventCPP(hXCGUI,Event,mFun)  XCGUI_RegEventCPP_t(hXCGUI,Event,0,FALSE,this,mFun,#mFun)
#define XWnd_RegEventCPP1(hXCGUI,Event,mFun)  XCGUI_RegEventCPP_t(hXCGUI,Event,1,FALSE,this,mFun,#mFun)
#define XWnd_RemoveEventCPP(hXCGUI,Event,mFun) XCGUI_RegEventCPP_t(hXCGUI,Event,-1,FALSE,this,mFun,#mFun)

//hEle      接收事件的元素句柄
//hEventEle 触发事件的元素句柄
//////////////////////////////////////////////////////////////////////


XC_API HELE WINAPI XDateTime_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API void WINAPI XDateTime_SetStyle(HELE hEle, int nStyle);
XC_API int WINAPI XDateTime_GetStyle(HELE hEle);
XC_API void WINAPI XDateTime_EnableSplitSlash(HELE hEle, BOOL bSlash);
XC_API void WINAPI XDateTime_GetTime(HELE hEle, out_ int* pnHour, out_ int* pnMinute, out_ int* pnSecond);
XC_API void WINAPI XDateTime_SetTime(HELE hEle, int nHour, int nMinute, int nSecond);
XC_API void WINAPI XDateTime_GetDate(HELE hEle, out_ int* pnYear, out_ int* pnMonth, out_ int* pnDay);
XC_API void WINAPI XDateTime_SetDate(HELE hEle, int nYear, int nMonth, int nDay);
XC_API COLORREF WINAPI XDateTime_GetSelBkColor(HELE hEle);
XC_API void WINAPI XDateTime_SetSelBkColor(HELE hEle, COLORREF crSelectBk, BYTE alpha = 255);
XC_API HELE WINAPI XDateTime_GetButton(HELE hEle, int nType);
XC_API HELE WINAPI XMonthCal_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API void WINAPI XMonthCal_SetToday(HELE hEle, int nYear, int nMonth, int nDay);
XC_API void WINAPI XMonthCal_GetToday(HELE hEle, out_ int* pnYear, out_ int* pnMonth, out_ int* pnDay);
XC_API void WINAPI XMonthCal_SeSelDate(HELE hEle, int nYear, int nMonth, int nDay);
XC_API void WINAPI XMonthCal_GetSelDate(HELE hEle, out_ int* pnYear, out_ int* pnMonth, out_ int* pnDay);
XC_API HELE WINAPI XMonthCal_GetButton(HELE hEle, monthCal_button_type_ nType);
XC_API int WINAPI XC_UnicodeToAnsi(const wchar_t *pIn, int inLen, char *pOut, int outLen);
XC_API int WINAPI XC_AnsiToUnicode(const char *pIn, int inLen, wchar_t *pOut, int outLen);
XC_API int     WINAPI XC_MessageBox(HWINDOW hWindow, const wchar_t* pText, const wchar_t* pCaption, int nFlags);
XC_API LRESULT WINAPI XC_SendMessage(HWINDOW hWindow, UINT msg, WPARAM wParam, LPARAM lParam);
XC_API BOOL    WINAPI XC_PostMessage(HWINDOW hWindow, UINT msg, WPARAM wParam, LPARAM lParam);
XC_API int WINAPI XC_CallUiThread(funCallUiThread pCall, int data);
XC_API void WINAPI XC_DebugToFileInfo(const char *pInfo);//打印调试信息到文件 xcgui_debug.txt
XC_API BOOL WINAPI XC_IsHELE(HXCGUI hEle); //检查句柄
XC_API BOOL WINAPI XC_IsHWINDOW(HXCGUI hWindow); //检查句柄
XC_API BOOL WINAPI XC_IsShape(HXCGUI hShape); //检查句柄
XC_API BOOL WINAPI XC_IsHXCGUI(HXCGUI hXCGUI, XC_OBJECT_TYPE nType);
XC_API HWINDOW WINAPI XC_hWindowFromHWnd(HWND hWnd);
XC_API BOOL    WINAPI XC_SetActivateTopWindow();
XC_API BOOL WINAPI XC_SetProperty(HXCGUI hXCGUI, const wchar_t* pName, const wchar_t* pValue);
XC_API const wchar_t* WINAPI XC_GetProperty(HXCGUI hXCGUI, const wchar_t* pName);
XC_API BOOL WINAPI XC_RegisterWindowClassName(const wchar_t* pClassName); //注册窗口类名
XC_API BOOL WINAPI XC_IsSViewExtend(HELE hEle);  //判断元素是否从滚动视图元素扩展的新元素,包含滚动视图元素
XC_API XC_OBJECT_TYPE WINAPI XC_GetObjectType(HXCGUI hXCGUI);
XC_API HXCGUI WINAPI XC_GetObjectByID(HWINDOW hWindow, int nID); //通过ID获取对象句柄
XC_API HXCGUI WINAPI XC_GetObjectByIDName(HWINDOW hWindow, const wchar_t*  pName);
XC_API HXCGUI WINAPI XC_GetObjectByUID(int nUID);
XC_API HXCGUI WINAPI XC_GetObjectByUIDName(const wchar_t*  pName);
XC_API HXCGUI WINAPI XC_GetObjectByName(const wchar_t*  pName);
XC_API void WINAPI XC_SetPaintFrequency(int nMilliseconds); //设置UI绘制频率
XC_API void WINAPI XC_SetTextRenderingHint(int  nType);   //设置文本渲染质量
XC_API void WINAPI XC_EnableGdiDrawText(BOOL bEnable);
XC_API BOOL WINAPI XC_RectInRect(RECT *pRect1, RECT *pRect2);
XC_API void WINAPI XC_CombineRect(RECT *pDest, RECT *pSrc1, RECT *pSrc2);
XC_API void WINAPI XC_ShowLayoutFrame(BOOL bShow);
XC_API void WINAPI XC_EnableDebugFile(BOOL bEnable);
XC_API void WINAPI XC_EnableResMonitor(BOOL bEnable);
XC_API void WINAPI XC_SetLayoutFrameColor(COLORREF color);
XC_API void WINAPI XC_EnableErrorMessageBox(BOOL bEnabel);
XC_API void WINAPI XC_EnableAutoExitApp(BOOL bEnabel);
XC_API HXCGUI WINAPI XC_LoadLayout(const wchar_t *pFileName, HXCGUI hParent = NULL);
XC_API HXCGUI WINAPI XC_LoadLayoutZip(const wchar_t *pZipFileName, const wchar_t *pFileName, const wchar_t* pPassword = NULL, HXCGUI hParent = NULL);
XC_API HXCGUI WINAPI XC_LoadLayoutZipMem(void* data, int length, const wchar_t *pFileName, const wchar_t* pPassword = NULL, HXCGUI hParent = NULL);
XC_API HXCGUI WINAPI XC_LoadLayoutFromString(const char *pStringXML, HXCGUI hParent = NULL);
XC_API HXCGUI WINAPI XC_LoadLayoutFromStringUtf8(const char *pStringXML, HXCGUI hParent = NULL);
XC_API BOOL WINAPI XC_LoadResource(const wchar_t *pFileName);
XC_API BOOL WINAPI XC_LoadResourceZip(const wchar_t *pZipFileName, const wchar_t *pFileName, const wchar_t* pPassword = NULL);
XC_API BOOL WINAPI XC_LoadResourceZipMem(void* data, int length, const wchar_t *pFileName, const wchar_t* pPassword = NULL);
XC_API BOOL WINAPI XC_LoadResourceFromString(const char *pStringXML, const wchar_t* pFileName);
XC_API BOOL WINAPI XC_LoadResourceFromStringUtf8(const char *pStringXML, const wchar_t* pFileName);
XC_API BOOL WINAPI XC_LoadStyle(const wchar_t *pFileName);
XC_API BOOL WINAPI XC_LoadStyleZip(const wchar_t *pZipFile, const wchar_t *pFileName, const wchar_t* pPassword = NULL);
XC_API BOOL WINAPI XC_LoadStyleZipMem(void* data, int length, const wchar_t *pFileName, const wchar_t* pPassword = NULL);
XC_API void WINAPI XC_GetTextSize(const wchar_t* pString, int length, HFONTX hFontX, out_ SIZE* pOutSize);
XC_API void WINAPI XC_GetTextShowSize(const wchar_t* pString, int length, HFONTX hFontX, out_ SIZE* pOutSize);
XC_API HFONTX WINAPI XC_GetDefaultFont(); //获取默认字体
XC_API void   WINAPI XC_SetDefaultFont(HFONTX hFontX); //设置默认字体
XC_API void  WINAPI XC_AddFileSearchPath(const wchar_t* pPath);
XC_API void  WINAPI XC_InitFont(LOGFONTW *pFont, wchar_t *pName, int size, BOOL bBold = FALSE, BOOL bItalic = FALSE, BOOL bUnderline = FALSE, BOOL bStrikeOut = FALSE);
XC_API  void* WINAPI XC_Malloc(int size);
XC_API  void  WINAPI XC_Free(void *p);
XC_API void WINAPI _XC_SetType(HXCGUI hXCGUI, XC_OBJECT_TYPE nType);
XC_API void WINAPI _XC_AddType(HXCGUI hXCGUI, XC_OBJECT_TYPE nType);
XC_API void WINAPI _XC_BindData(HXCGUI hXCGUI, int data);
XC_API int  WINAPI _XC_GetBindData(HXCGUI hXCGUI);
XC_API void WINAPI  XC_Alert(const wchar_t* pText, const wchar_t* pTitle);
XC_API void* WINAPI XC_Sys_ShellExecute(HWND hwnd, const wchar_t* lpOperation, const wchar_t* lpFile, const wchar_t* lpParameters, const wchar_t* lpDirectory, int nShowCmd);
XC_API HMODULE WINAPI XC_LoadLibrary(const wchar_t* lpFileName);
XC_API FARPROC WINAPI XC_GetProcAddress(HMODULE hModule, const char* lpProcName);
XC_API BOOL    WINAPI XC_FreeLibrary(HMODULE hModule);
XC_API HMODULE WINAPI XC_LoadDll(const wchar_t* pDllFileName);
XC_API BOOL WINAPI XInitXCGUI(wchar_t *pText = NULL);
XC_API void WINAPI XRunXCGUI();
XC_API void WINAPI XExitXCGUI();
XC_API void WINAPI XC_PostQuitMessage(int nExitCode);
XC_API XC_OBJECT_TYPE    WINAPI XObj_GetType(HXCGUI hXCGUI);
XC_API XC_OBJECT_TYPE    WINAPI XObj_GetTypeBase(HXCGUI hXCGUI);
XC_API XC_OBJECT_TYPE_EX WINAPI XObj_GetTypeEx(HXCGUI hXCGUI);
XC_API void              WINAPI XUI_SetStyle(HXCGUI hXCGUI, XC_OBJECT_STYLE nStyle);
XC_API XC_OBJECT_STYLE   WINAPI XUI_GetStyle(HXCGUI hXCGUI);
XC_API BOOL   WINAPI XWidget_IsShow(HXCGUI hXCGUI);
XC_API void   WINAPI XWidget_Show(HXCGUI hXCGUI, BOOL bShow);
XC_API HELE   WINAPI XWidget_GetParentEle(HXCGUI hXCGUI);
XC_API HXCGUI WINAPI XWidget_GetParent(HXCGUI hXCGUI);
XC_API HWND   WINAPI XWidget_GetHWND(HXCGUI hXCGUI);
XC_API HWINDOW WINAPI XWidget_GetHWINDOW(HXCGUI hXCGUI);
XC_API  void WINAPI _XC_RegJsBind(const char* pName, int func);
XC_API  void WINAPI XC_RegFunExit(funExit func);
XC_API HBKM WINAPI XBkM_Create();
XC_API void WINAPI XBkM_Destroy(HBKM hBkInfoM);
XC_API int  WINAPI XBkM_SetBkInfo(HBKM hBkInfoM, const wchar_t *pText);
XC_API int  WINAPI XBkM_AddInfo(HBKM hBkInfoM, const wchar_t *pText);
XC_API void WINAPI XBkM_AddBorder(HBKM hBkInfoM, int nState, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XBkM_AddFill(HBKM hBkInfoM, int nState, COLORREF color, BYTE alpha);
XC_API void WINAPI XBkM_AddImage(HBKM hBkInfoM, int nState, HIMAGE hImage);
XC_API int  WINAPI XBkM_GetCount(HBKM hBkInfoM);
XC_API void WINAPI XBkM_Clear(HBKM hBkInfoM);
XC_API BOOL WINAPI XBkM_Draw(HBKM hBkInfoM, int nState, HDRAW hDraw, RECT* pRect);
XC_API BOOL WINAPI XBkM_DrawEx(HBKM hBkInfoM, int nState, HDRAW hDraw, RECT* pRect, int nStateEx);
XC_API HELE WINAPI XBtn_Create(int x, int y, int cx, int cy, const wchar_t *pName, HXCGUI hParent = NULL);
XC_API BOOL WINAPI XBtn_IsCheck(HELE hEle); //按钮是否被选中
XC_API BOOL WINAPI XBtn_SetCheck(HELE hEle, BOOL bCheck);
XC_API void WINAPI XBtn_SetState(HELE hEle, common_state3_ nState);
XC_API common_state3_  WINAPI XBtn_GetState(HELE hEle);
XC_API button_state_   WINAPI XBtn_GetStateEx(HELE hEle);
XC_API void WINAPI XBtn_SetStyle(HELE hEle, XC_OBJECT_STYLE  nStyle);
XC_API XC_OBJECT_STYLE  WINAPI XBtn_GetStyle(HELE hEle);
XC_API void WINAPI XBtn_SetType(HELE hEle, XC_OBJECT_TYPE_EX nType);
XC_API void WINAPI XBtn_SetTypeEx(HELE hEle, XC_OBJECT_TYPE_EX nType);
XC_API XC_OBJECT_TYPE_EX  WINAPI XBtn_GetType(HELE hEle);
XC_API void WINAPI XBtn_SetGroupID(HELE hEle, int nID);
XC_API int  WINAPI XBtn_GetGroupID(HELE hEle);
XC_API void WINAPI XBtn_SetBindEle(HELE hEle, HELE hBindEle);
XC_API HELE WINAPI XBtn_GetBindEle(HELE hEle);
XC_API void WINAPI XBtn_SetTextAlign(HELE hEle, int nFlags);
XC_API int  WINAPI XBtn_GetTextAlign(HELE hEle);
XC_API void WINAPI XBtn_SetIconAlign(HELE hEle, button_icon_align_ align);
XC_API void WINAPI XBtn_SetOffset(HELE hEle, int x, int y);
XC_API void WINAPI XBtn_SetOffsetIcon(HELE hEle, int x, int y);
XC_API void WINAPI XBtn_SetIconSpace(HELE hEle, int size);
XC_API void WINAPI XBtn_SetText(HELE hEle, in_ const wchar_t *pName);
XC_API const wchar_t* WINAPI XBtn_GetText(HELE hEle);
XC_API void WINAPI XBtn_SetIcon(HELE hEle, HIMAGE hImage);
XC_API void WINAPI XBtn_SetIconDisable(HELE hEle, HIMAGE hImage);
XC_API HIMAGE WINAPI XBtn_GetIcon(HELE hEle, int nType);
XC_API void WINAPI XBtn_AddAnimationFrame(HELE hEle, HIMAGE hImage, UINT uElapse);
XC_API void WINAPI XBtn_EnableAnimation(HELE hEle, BOOL bEnable, BOOL bLoopPlay = FALSE);
XC_API void WINAPI XBtn_AddBkBorder(HELE hEle, button_state_ nState, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XBtn_AddBkFill(HELE hEle, button_state_ nState, COLORREF color, BYTE alpha);
XC_API void WINAPI XBtn_AddBkImage(HELE hEle, button_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XBtn_GetBkInfoCount(HELE hEle);
XC_API void WINAPI XBtn_ClearBkInfo(HELE hEle);
XC_API HELE WINAPI XComboBox_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API BOOL  WINAPI XComboBox_SetSelItem(HELE hEle, int iIndex);
XC_API void WINAPI XComboBox_GetButtonRect(HELE hEle, out_ RECT* pRect);
XC_API void WINAPI XComboBox_SetButtonSize(HELE hEle, int size);
XC_API void WINAPI XComboBox_SetDropHeight(HELE hEle, int height); //设置下拉列表高度
XC_API int  WINAPI XComboBox_GetDropHeight(HELE hEle);
XC_API HXCGUI WINAPI XComboBox_CreateAdapter(HELE hEle);
XC_API void WINAPI XComboBox_BindAdapter(HELE hEle, HXCGUI hAdapter);
XC_API HXCGUI WINAPI XComboBox_GetAdapter(HELE hEle);
XC_API void WINAPI XComboBox_SetBindName(HELE hEle, const wchar_t*  pName);
XC_API void WINAPI XComboBox_SetItemTemplateXML(HELE hEle, const wchar_t* pXmlFile);
XC_API void WINAPI XComboBox_SetItemTemplateXMLFromString(HELE hEle, const char* pStringXML);
XC_API void WINAPI XComboBox_EnableDrawButton(HELE hEle, BOOL bEnable);
XC_API void WINAPI XComboBox_EnableEdit(HELE hEle, BOOL bEdit);  //启动编辑内容
XC_API void WINAPI XComboBox_EnableDropHeightFixed(HELE hEle, BOOL bEnable);
XC_API void WINAPI XComboBox_AddBkBorder(HELE hEle, comboBox_state_ nState, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XComboBox_AddBkFill(HELE hEle, comboBox_state_ nState, COLORREF color, BYTE alpha);
XC_API void WINAPI XComboBox_AddBkImage(HELE hEle, comboBox_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XComboboX_GetBkInfoCount(HELE hEle);
XC_API void WINAPI XComboBox_ClearBkInfo(HELE hEle);
XC_API int WINAPI XComboBox_GetSelItem(HELE hEle);
XC_API comboBox_state_ WINAPI XComboBox_GetState(HELE hEle);
XC_API int WINAPI XComboBox_AddItemText(HELE hEle, const wchar_t* pText);
XC_API int WINAPI XComboBox_AddItemTextEx(HELE hEle, const wchar_t* pName, const wchar_t* pText);
XC_API int WINAPI XComboBox_AddItemImage(HELE hEle, HIMAGE hImage);
XC_API int WINAPI XComboBox_AddItemImageEx(HELE hEle, const wchar_t* pName, HIMAGE hImage);
XC_API int WINAPI XComboBox_InsertItemText(HELE hEle, int iItem, const wchar_t* pValue);
XC_API int WINAPI XComboBox_InsertItemTextEx(HELE hEle, int iItem, const wchar_t* pName, const wchar_t* pValue);
XC_API int WINAPI XComboBox_InsertItemImage(HELE hEle, int iItem, HIMAGE hImage);
XC_API int WINAPI XComboBox_InsertItemImageEx(HELE hEle, int iItem, const wchar_t* pName, HIMAGE hImage);
XC_API BOOL WINAPI XComboBox_SetItemText(HELE hEle, int iItem, int iColumn, const wchar_t* pText);
XC_API BOOL WINAPI XComboBox_SetItemTextEx(HELE hEle, int iItem, const wchar_t* pName, const wchar_t* pText);
XC_API BOOL WINAPI XComboBox_SetItemImage(HELE hEle, int iItem, int iColumn, HIMAGE hImage);
XC_API BOOL WINAPI XComboBox_SetItemImageEx(HELE hEle, int iItem, const wchar_t* pName, HIMAGE hImage);
XC_API BOOL WINAPI XComboBox_SetItemInt(HELE hEle, int iItem, int iColumn, int nValue);
XC_API BOOL WINAPI XComboBox_SetItemIntEx(HELE hEle, int iItem, const wchar_t* pName, int nValue);
XC_API BOOL WINAPI XComboBox_SetItemFloat(HELE hEle, int iItem, int iColumn, float fFloat);
XC_API BOOL WINAPI XComboBox_SetItemFloatEx(HELE hEle, int iItem, const wchar_t* pName, float fFloat);
XC_API const wchar_t* WINAPI XComboBox_GetItemText(HELE hEle, int iItem, int iColumn);
XC_API const wchar_t* WINAPI XComboBox_GetItemTextEx(HELE hEle, int iItem, const wchar_t* pName);
XC_API HIMAGE WINAPI XComboBox_GetItemImage(HELE hEle, int iItem, int iColumn);
XC_API HIMAGE WINAPI XComboBox_GetItemImageEx(HELE hEle, int iItem, const wchar_t* pName);
XC_API BOOL WINAPI XComboBox_GetItemInt(HELE hEle, int iItem, int iColumn, out_ int* pOutValue);
XC_API BOOL WINAPI XComboBox_GetItemIntEx(HELE hEle, int iItem, const wchar_t* pName, out_ int* pOutValue);
XC_API BOOL WINAPI XComboBox_GetItemFloat(HELE hEle, int iItem, int iColumn, out_ float* pOutValue);
XC_API BOOL WINAPI XComboBox_GetItemFloatEx(HELE hEle, int iItem, const wchar_t* pName, out_ float* pOutValue);
XC_API BOOL WINAPI XComboBox_DeleteItem(HELE hEle, int iItem);
XC_API BOOL WINAPI XComboBox_DeleteItemEx(HELE hEle, int iItem, int nCount);
XC_API void WINAPI XComboBox_DeleteItemAll(HELE hEle);
XC_API void WINAPI XComboBox_DeleteColumnAll(HELE hEle);
XC_API int WINAPI XComboBox_GetCount(HELE hEle);
XC_API int WINAPI XComboBox_GetCountColumn(HELE hEle);
XC_API int  WINAPI XAd_AddRef(HXCGUI hAdapter);
XC_API int  WINAPI XAd_Release(HXCGUI hAdapter);
XC_API int  WINAPI XAd_GetRefCount(HXCGUI hAdapter);
XC_API void WINAPI XAd_Destroy(HXCGUI hAdapter);
XC_API void WINAPI XAd_EnableAutoDestroy(HXCGUI hAdapter, BOOL bEnable);
XC_API HXCGUI WINAPI XAdListView_Create();
XC_API int  WINAPI XAdListView_Group_AddColumn(HXCGUI hAdapter, const wchar_t *pName);

XC_API int  WINAPI XAdListView_Group_AddItemText(HXCGUI hAdapter, const wchar_t *pValue, int iPos=-1);
XC_API int  WINAPI XAdListView_Group_AddItemTextEx(HXCGUI hAdapter, const wchar_t* pName, const wchar_t *pValue, int iPos=-1);
XC_API int  WINAPI XAdListView_Group_AddItemImage(HXCGUI hAdapter, HIMAGE hImage, int iPos=-1);
XC_API int  WINAPI XAdListView_Group_AddItemImageEx(HXCGUI hAdapter, const wchar_t* pName, HIMAGE hImage, int iPos=-1);
XC_API BOOL WINAPI XAdListView_Group_SetText(HXCGUI hAdapter, int iGroup, int iColumn, const wchar_t *pValue);
XC_API BOOL WINAPI XAdListView_Group_SetTextEx(HXCGUI hAdapter, int iGroup, const wchar_t *pName, const wchar_t *pValue);
XC_API BOOL WINAPI XAdListView_Group_SetImage(HXCGUI hAdapter, int iGroup, int iColumn, HIMAGE hImage);
XC_API BOOL WINAPI XAdListView_Group_SetImageEx(HXCGUI hAdapter, int iGroup, const wchar_t *pName, HIMAGE hImage);
XC_API int  WINAPI XAdListView_Group_GetCount(HXCGUI hAdapter);
XC_API int  WINAPI XAdListView_Item_GetCount(HXCGUI hAdapter, int iGroup);
XC_API int  WINAPI XAdListView_Item_AddColumn(HXCGUI hAdapter, const wchar_t *pName);  //增加列

XC_API int  WINAPI XAdListView_Item_AddItemText(HXCGUI hAdapter, int iGroup, const wchar_t *pValue, int iPos=-1);
XC_API int  WINAPI XAdListView_Item_AddItemTextEx(HXCGUI hAdapter, int iGroup, const wchar_t *pName, const wchar_t *pValue, int iPos=-1);
XC_API int  WINAPI XAdListView_Item_AddItemImage(HXCGUI hAdapter, int iGroup, HIMAGE hImage, int iPos=-1);
XC_API int  WINAPI XAdListView_Item_AddItemImageEx(HXCGUI hAdapter, int iGroup, const wchar_t *pName, HIMAGE hImage, int iPos=-1);
XC_API BOOL WINAPI XAdListView_Item_SetText(HXCGUI hAdapter, int iGroup, int iItem, int iColumn, const wchar_t* pValue);
XC_API BOOL WINAPI XAdListView_Item_SetTextEx(HXCGUI hAdapter, int iGroup, int iItem, const wchar_t *pName, const wchar_t* pValue);
XC_API BOOL WINAPI XAdListView_Item_SetImage(HXCGUI hAdapter, int iGroup, int iItem, int iColumn, HIMAGE hImage);
XC_API BOOL WINAPI XAdListView_Item_SetImageEx(HXCGUI hAdapter, int iGroup, int iItem, const wchar_t *pName, HIMAGE hImage);
XC_API BOOL WINAPI XAdListView_Group_DeleteItem(HXCGUI hAdapter, int iGroup);
XC_API void WINAPI XAdListView_Group_DeleteAllChildItem(HXCGUI hAdapter, int iGroup);
XC_API BOOL WINAPI XAdListView_Item_DeleteItem(HXCGUI hAdapter, int iGroup, int iItem);
XC_API void WINAPI XAdListView_DeleteAll(HXCGUI hAdapter);
XC_API void WINAPI XAdListView_DeleteAllGroup(HXCGUI hAdapter);
XC_API void WINAPI XAdListView_DeleteAllItem(HXCGUI hAdapter);
XC_API void WINAPI XAdListView_DeleteColumnGroup(HXCGUI hAdapter, int iColumn);
XC_API void WINAPI XAdListView_DeleteColumnItem(HXCGUI hAdapter, int iColumn);
XC_API const wchar_t* WINAPI XAdListView_Item_GetTextEx(HXCGUI hAdapter, int iGroup, int iItem, const wchar_t* pName);
XC_API HIMAGE WINAPI XAdListView_Item_GetImageEx(HXCGUI hAdapter, int iGroup, int iItem, const wchar_t* pName);
XC_API HXCGUI WINAPI XAdTable_Create();
XC_API void   WINAPI XAdTable_Sort(HXCGUI hAdapter, int iColumn, BOOL bAscending);  //排序
XC_API adapter_date_type_  WINAPI XAdTable_GetItemDataType(HXCGUI hAdapter, int iItem, int iColumn);
XC_API adapter_date_type_  WINAPI XAdTable_GetItemDataTypeEx(HXCGUI hAdapter, int iItem, const wchar_t* pName);
XC_API int WINAPI XAdTable_AddColumn(HXCGUI hAdapter, const wchar_t* pName);
XC_API int WINAPI XAdTable_SetColumn(HXCGUI hAdapter, const wchar_t*  pColName);
XC_API int WINAPI XAdTable_AddItemText(HXCGUI hAdapter, const wchar_t* pValue);
XC_API int WINAPI XAdTable_AddItemTextEx(HXCGUI hAdapter, const wchar_t* pName, const wchar_t* pValue);
XC_API int WINAPI XAdTable_AddItemImage(HXCGUI hAdapter, HIMAGE hImage);
XC_API int WINAPI XAdTable_AddItemImageEx(HXCGUI hAdapter, const wchar_t* pName, HIMAGE hImage);
XC_API int WINAPI XAdTable_InsertItemText(HXCGUI hAdapter, int iItem, const wchar_t* pValue);
XC_API int WINAPI XAdTable_InsertItemTextEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, const wchar_t* pValue);
XC_API int WINAPI XAdTable_InsertItemImage(HXCGUI hAdapter, int iItem, HIMAGE hImage);
XC_API int WINAPI XAdTable_InsertItemImageEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, HIMAGE hImage);
XC_API BOOL WINAPI XAdTable_SetItemText(HXCGUI hAdapter, int iItem, int iColumn, const wchar_t* pValue);
XC_API BOOL WINAPI XAdTable_SetItemTextEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, const wchar_t* pValue);
XC_API BOOL WINAPI XAdTable_SetItemInt(HXCGUI hAdapter, int iItem, int iColumn, int nValue);
XC_API BOOL WINAPI XAdTable_SetItemIntEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, int nValue);
XC_API BOOL WINAPI XAdTable_SetItemFloat(HXCGUI hAdapter, int iItem, int iColumn, float nValue);
XC_API BOOL WINAPI XAdTable_SetItemFloatEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, float nValue);
XC_API BOOL WINAPI XAdTable_SetItemImage(HXCGUI hAdapter, int iItem, int iColumn, HIMAGE hImage);
XC_API BOOL WINAPI XAdTable_SetItemImageEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, HIMAGE hImage);
XC_API BOOL WINAPI XAdTable_DeleteItem(HXCGUI hAdapter, int iItem);
XC_API BOOL WINAPI XAdTable_DeleteItemEx(HXCGUI hAdapter, int iItem, int nCount);
XC_API void WINAPI XAdTable_DeleteItemAll(HXCGUI hAdapter);
XC_API void WINAPI XAdTable_DeleteColumnAll(HXCGUI hAdapter);
XC_API int WINAPI XAdTable_GetCount(HXCGUI hAdapter);
XC_API int WINAPI XAdTable_GetCountColumn(HXCGUI hAdapter);
XC_API const wchar_t* WINAPI XAdTable_GetItemText(HXCGUI hAdapter, int iItem, int iColumn);
XC_API const wchar_t* WINAPI XAdTable_GetItemTextEx(HXCGUI hAdapter, int iItem, const wchar_t* pName);
XC_API HIMAGE WINAPI XAdTable_GetItemImage(HXCGUI hAdapter, int iItem, int iColumn);
XC_API HIMAGE WINAPI XAdTable_GetItemImageEx(HXCGUI hAdapter, int iItem, const wchar_t* pName);
XC_API BOOL WINAPI XAdTable_GetItemInt(HXCGUI hAdapter, int iItem, int iColumn, out_ int* pOutValue);
XC_API BOOL WINAPI XAdTable_GetItemIntEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, out_ int* pOutValue);
XC_API BOOL WINAPI XAdTable_GetItemFloat(HXCGUI hAdapter, int iItem, int iColumn, out_ float* pOutValue);
XC_API BOOL WINAPI XAdTable_GetItemFloatEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, out_ float* pOutValue);
XC_API HXCGUI WINAPI XAdTree_Create();
XC_API int WINAPI XAdTree_AddColumn(HXCGUI hAdapter, const wchar_t* pName);
XC_API int WINAPI XAdTree_SetColumn(HXCGUI hAdapter, const wchar_t* pColName);
XC_API int WINAPI XAdTree_InsertItemText(HXCGUI hAdapter, const wchar_t* pValue, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST);
XC_API int WINAPI XAdTree_InsertItemTextEx(HXCGUI hAdapter, const wchar_t* pName, const wchar_t* pValue, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST);
XC_API int WINAPI XAdTree_InsertItemImage(HXCGUI hAdapter, HIMAGE hImage, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST);
XC_API int WINAPI XAdTree_InsertItemImageEx(HXCGUI hAdapter, const wchar_t* pName, HIMAGE hImage, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST);
XC_API int WINAPI XAdTree_GetCount(HXCGUI hAdapter);
XC_API int WINAPI XAdTree_GetCountColumn(HXCGUI hAdapter);
XC_API BOOL WINAPI XAdTree_SetItemText(HXCGUI hAdapter, int nID, int iColumn, const wchar_t* pValue);
XC_API BOOL WINAPI XAdTree_SetItemTextEx(HXCGUI hAdapter, int nID, const wchar_t* pName, const wchar_t* pValue);
XC_API BOOL WINAPI XAdTree_SetItemImage(HXCGUI hAdapter, int nID, int iColumn, HIMAGE hImage);
XC_API BOOL WINAPI XAdTree_SetItemImageEx(HXCGUI hAdapter, int nID, const wchar_t* pName, HIMAGE hImage);
XC_API const wchar_t* WINAPI XAdTree_GetItemText(HXCGUI hAdapter, int nID, int iColumn);
XC_API const wchar_t* WINAPI XAdTree_GetItemTextEx(HXCGUI hAdapter, int nID, const wchar_t* pName);
XC_API HIMAGE WINAPI XAdTree_GetItemImage(HXCGUI hAdapter, int nID, int iColumn);
XC_API HIMAGE WINAPI XAdTree_GetItemImageEx(HXCGUI hAdapter, int nID, const wchar_t* pName);
XC_API BOOL WINAPI XAdTree_DeleteItem(HXCGUI hAdapter, int nID);
XC_API void WINAPI XAdTree_DeleteItemAll(HXCGUI hAdapter);
XC_API void WINAPI XAdTree_DeleteColumnAll(HXCGUI hAdapter);
XC_API HXCGUI WINAPI XAdMap_Create();
XC_API BOOL WINAPI XAdMap_AddItemText(HXCGUI hAdapter, const wchar_t* pName, const wchar_t* pValue);
XC_API BOOL WINAPI XAdMap_AddItemImage(HXCGUI hAdapter, const wchar_t* pName, HIMAGE hImage);
XC_API BOOL WINAPI XAdMap_DeleteItem(HXCGUI hAdapter, const wchar_t* pName);
XC_API int  WINAPI XAdMap_GetCount(HXCGUI hAdapter);
XC_API const wchar_t* WINAPI XAdMap_GetItemText(HXCGUI hAdapter, const wchar_t* pName);
XC_API HIMAGE WINAPI XAdMap_GetItemImage(HXCGUI hAdapter, const wchar_t* pName);
XC_API BOOL WINAPI XAdMap_SetItemText(HXCGUI hAdapter, const wchar_t* pName, const wchar_t* pValue);
XC_API BOOL WINAPI XAdMap_SetItemImage(HXCGUI hAdapter, const wchar_t* pName, HIMAGE hImage);
XC_API void WINAPI XDebug_Print(int  level, const char *pInfo);
XC_API void WINAPI _xtrace(const char *pFormat, ...);
XC_API void WINAPI _xtracew(const wchar_t *pFormat, ...);
XC_API void WINAPI XDebug_OutputDebugStringA(const char* pString); //OutputDebugStringA
XC_API void WINAPI XDebug_OutputDebugStringW(const wchar_t* pString); //OutputDebugStringW
XC_API void WINAPI XDebug_Set_OutputDebugString_UTF8(BOOL bUTF8); //设置debug输出编码方式 encoding_utf8
XC_API HDRAW WINAPI XDraw_Create(HDC hdc); //创建
XC_API void  WINAPI XDraw_Destroy(HDRAW hDraw); //销毁
XC_API void  WINAPI XDraw_SetOffset(HDRAW hDraw, int x, int y); //设置坐标偏移量
XC_API void  WINAPI XDraw_GetOffset(HDRAW hDraw, out_ int *pX, out_ int *pY); //获取坐标偏移量
XC_API void  WINAPI XDraw_RestoreGDIOBJ(HDRAW hDraw);  //还原状态,释放用户绑定的GDI对象
XC_API HDC   WINAPI XDraw_GetHDC(HDRAW hDraw);
XC_API void WINAPI XDraw_SetBrushColor(HDRAW hDraw, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XDraw_SetTextAlign(HDRAW hDraw, int nFlag);
XC_API void WINAPI XDraw_SetTextVertical(HDRAW hDraw, BOOL bVertical);
XC_API void WINAPI XDraw_SetFontX(HDRAW hDraw, HFONTX  hFontx);
XC_API void WINAPI XDraw_SetLineWidth(HDRAW hDraw, int nWidth);
XC_API int  WINAPI XDraw_SetBkMode(HDRAW hDraw, BOOL bTransparent);
XC_API void WINAPI XDraw_SetClipRect(HDRAW hDraw, RECT*  pRect);
XC_API void WINAPI XDraw_ClearClip(HDRAW hDraw);
XC_API void WINAPI XDraw_EnableSmoothingMode(HDRAW hDraw, BOOL  bEnable);   //启用平滑模式
XC_API void WINAPI XDraw_EnableWndTransparent(HDRAW hDraw, BOOL  bTransparent);
XC_API HBRUSH WINAPI XDraw_CreateSolidBrush(HDRAW hDraw, COLORREF crColor);
XC_API HPEN WINAPI XDraw_CreatePen(HDRAW hDraw, int fnPenStyle, int nWidth, COLORREF crColor);
XC_API HRGN WINAPI XDraw_CreateRectRgn(HDRAW hDraw, int nLeftRect, int nTopRect, int nRightRect, int nBottomRect);
XC_API HRGN WINAPI XDraw_CreateRoundRectRgn(HDRAW hDraw, int nLeftRect, int nTopRect, int nRightRect, int nBottomRect, int nWidthEllipse, int nHeightEllipse);
XC_API HRGN WINAPI XDraw_CreatePolygonRgn(HDRAW hDraw, POINT *pPt, int cPoints, int fnPolyFillMode);
XC_API int WINAPI XDraw_SelectClipRgn(HDRAW hDraw, HRGN hRgn);
XC_API void WINAPI XDraw_FillRect(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_FillRectColor(HDRAW hDraw, RECT *pRect, COLORREF color, BYTE alpha = 255);
XC_API BOOL WINAPI XDraw_FillRgn(HDRAW hDraw, HRGN hrgn, HBRUSH hbr);
XC_API void WINAPI XDraw_FillEllipse(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_DrawEllipse(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_FillRoundRect(HDRAW hDraw, RECT *pRect, int nWidth, int nHeight); //填充圆角矩形
XC_API void WINAPI XDraw_DrawRoundRect(HDRAW hDraw, RECT *pRect, int nWidth, int nHeight); //绘制圆角矩形边框
XC_API void WINAPI XDraw_FillRoundRectEx(HDRAW hDraw, RECT *pRect, int nLeftTop, int nRightTop, int nRightBottom, int nLeftBottom); //填充圆角矩形
XC_API void WINAPI XDraw_DrawRoundRectEx(HDRAW hDraw, RECT *pRect, int nLeftTop, int nRightTop, int nRightBottom, int nLeftBottom); //绘制圆角矩形边框
XC_API BOOL WINAPI XDraw_Rectangle(HDRAW hDraw, int nLeftRect, int nTopRect, int nRightRect, int nBottomRect);
XC_API void WINAPI XDraw_DrawGroupBox_Rect(HDRAW hDraw, RECT *pRect, const wchar_t* pName, COLORREF textColor, BYTE textAlpha, POINT* pOffset);
XC_API void WINAPI XDraw_DrawGroupBox_RoundRect(HDRAW hDraw, RECT *pRect, const wchar_t* pName, COLORREF textColor, BYTE textAlpha, POINT* pOffset, int nWidth, int nHeight);
XC_API void WINAPI XDraw_GradientFill2(HDRAW hDraw, COLORREF color1, BYTE alpha1, COLORREF color2, BYTE alpha2, RECT *pRect, int mode);
XC_API BOOL WINAPI XDraw_GradientFill4(HDRAW hDraw, COLORREF color1, COLORREF color2, COLORREF color3, COLORREF color4, RECT *pRect, int mode);
XC_API BOOL WINAPI XDraw_FrameRgn(HDRAW hDraw, HRGN hrgn, HBRUSH hbr, int nWidth, int nHeight);
XC_API void  WINAPI XDraw_FrameRect(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_FocusRect(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_DrawLine(HDRAW hDraw, int x1, int y1, int x2, int y2);
XC_API void WINAPI XDraw_DrawCurve(HDRAW hDraw, in_ POINT *points, int count, float tension);
XC_API BOOL WINAPI XDraw_MoveToEx(HDRAW hDraw, int X, int Y, LPPOINT lpPoint = NULL);
XC_API BOOL WINAPI XDraw_LineTo(HDRAW hDraw, int nXEnd, int nYEnd);
XC_API BOOL WINAPI XDraw_Polyline(HDRAW hDraw, in_ POINT *pArrayPt, int arrayPtSize);
XC_API void WINAPI XDraw_Dottedline(HDRAW hDraw, int x1, int y1, int x2, int y2);  //绘制虚线
XC_API COLORREF WINAPI XDraw_SetPixel(HDRAW hDraw, int X, int Y, COLORREF crColor);
XC_API void WINAPI XDraw_Check(HDRAW hDraw, int x, int y, COLORREF color, BOOL bCheck);
XC_API BOOL WINAPI XDraw_DrawIconEx(HDRAW hDraw, int xLeft, int yTop, HICON hIcon, int cxWidth, int cyWidth, UINT istepIfAniCur, HBRUSH hbrFlickerFreeDraw, UINT diFlags);
XC_API BOOL WINAPI XDraw_BitBlt(HDRAW hDrawDest, int nXDest, int nYDest, int nWidth, int nHeight, HDC hdcSrc, int nXSrc, int nYSrc, DWORD dwRop);
XC_API BOOL WINAPI XDraw_BitBlt2(HDRAW hDrawDest, int nXDest, int nYDest, int nWidth, int nHeight, HDRAW hDrawSrc, int nXSrc, int nYSrc, DWORD dwRop);
XC_API BOOL WINAPI XDraw_AlphaBlend(HDRAW hDraw, int nXOriginDest, int nYOriginDest, int nWidthDest, int nHeightDest, HDC hdcSrc, int nXOriginSrc, int nYOriginSrc, int nWidthSrc, int nHeightSrc, int alpha);
XC_API void WINAPI XDraw_TriangularArrow(HDRAW hDraw, int align, int x, int y, int width, int height);
XC_API void WINAPI XDraw_DrawPolygon(HDRAW hDraw, in_ POINT *points, int nCount);
XC_API void WINAPI XDraw_DrawPolygonF(HDRAW hDraw, in_ POINTF *points, int nCount);
XC_API void WINAPI XDraw_FillPolygon(HDRAW hDraw, in_ POINT *points, int nCount);
XC_API void WINAPI XDraw_FillPolygonF(HDRAW hDraw, in_ POINTF *points, int nCount);
XC_API void WINAPI XDraw_Image(HDRAW hDraw, HIMAGE hImageFrame, int x, int y);
XC_API void WINAPI XDraw_Image2(HDRAW hDraw, HIMAGE hImageFrame, int x, int y, int width, int height);
XC_API void WINAPI XDraw_ImageStretch(HDRAW hDraw, HIMAGE hImageFrame, int x, int y, int width, int height);
XC_API void WINAPI XDraw_ImageAdaptive(HDRAW hDraw, HIMAGE hImageFrame, RECT *pRect, BOOL bOnlyBorder = FALSE);
XC_API void WINAPI XDraw_ImageExTile(HDRAW hDraw, HIMAGE hImageFrame, RECT *pRect, int flag = 0);
XC_API void WINAPI XDraw_ImageSuper(HDRAW hDraw, HIMAGE hImageFrame, RECT *pRect, BOOL bClip = FALSE);
XC_API void WINAPI XDraw_ImageSuper2(HDRAW hDraw, HIMAGE hImageFrame, RECT *pRcDest, RECT *pSrcRect);
XC_API void WINAPI XDraw_ImageSuperMask(HDRAW hDraw, HIMAGE hImageFrame, HIMAGE hImageFrameMask, RECT *pRect, RECT *pRectMask, BOOL bClip = FALSE);
XC_API void WINAPI XDraw_ImageMask(HDRAW hDraw, HIMAGE hImageFrame, HIMAGE hImageFrameMask, int x, int y, int x2, int y2);
XC_API void WINAPI XDraw_DrawText(HDRAW hDraw, const wchar_t * lpString, int nCount, RECT* lpRect);
XC_API void WINAPI XDraw_DrawTextUnderline(HDRAW hDraw, const wchar_t * lpString, int nCount, RECT* lpRect, COLORREF colorLine, BYTE alphaLine = 255);
XC_API void WINAPI XDraw_TextOut(HDRAW hDraw, int nXStart, int nYStart, const wchar_t * lpString, int cbString);
XC_API void WINAPI XDraw_TextOutEx(HDRAW hDraw, int nXStart, int nYStart, const wchar_t * lpString);
XC_API void WINAPI XDraw_TextOutA(HDRAW hDraw, int nXStart, int nYStart, const char * lpString);
XC_API float WINAPI XEase_Linear(float p);
XC_API float WINAPI XEase_Quad(float p, ease_flag_ flag);
XC_API float WINAPI XEase_Cubic(float p, ease_flag_ flag);
XC_API float WINAPI XEase_Quart(float p, ease_flag_ flag);
XC_API float WINAPI XEase_Quint(float p, ease_flag_ flag);
XC_API float WINAPI XEase_Sine(float p, ease_flag_ flag);
XC_API float WINAPI XEase_Expo(float p, ease_flag_ flag);
XC_API float WINAPI XEase_Circ(float p, ease_flag_ flag);
XC_API float WINAPI XEase_Elastic(float p, ease_flag_ flag);
XC_API float WINAPI XEase_Back(float p, ease_flag_ flag);
XC_API float WINAPI XEase_Bounce(float p, ease_flag_ flag);
XC_API HELE WINAPI XEditor_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API BOOL WINAPI XEditor_IsBreakpoint(HELE hEle, int iRow);
XC_API BOOL WINAPI XEditor_SetBreakpoint(HELE hEle, int iRow, BOOL bActivate = TRUE);
XC_API int  WINAPI XEditor_GetBreakpointCount(HELE hEle);
XC_API int  WINAPI XEditor_GetBreakpoints(HELE hEle, out_ int* aPoints, int nCount);
XC_API BOOL WINAPI XEditor_RemoveBreakpoint(HELE hEle, int iRow);
XC_API void WINAPI XEditor_ClearBreakpoint(HELE hEle);
XC_API BOOL WINAPI XEditor_SetRunRow(HELE hEle, int iRow);
XC_API void WINAPI XEditor_GetColor(HELE hEle, out_ editor_color_* pInfo);
XC_API void WINAPI XEditor_SetColor(HELE hEle, editor_color_* pInfo);
XC_API void WINAPI XEditor_SetStyleConst(HELE hEle, int iStyle);
XC_API void WINAPI XEditor_SetStyleFunction(HELE hEle, int iStyle);
XC_API void WINAPI XEditor_SetStyleString(HELE hEle, int iStyle);
XC_API void WINAPI XEditor_SetStyleComment(HELE hEle, int iStyle);
XC_API void WINAPI XEditor_AddKeyword(HELE hEle, const wchar_t* pKey, int iStyle);
XC_API void WINAPI XEditor_AddConst(HELE hEle, const wchar_t* pKey);
XC_API void WINAPI XEditor_AddFunction(HELE hEle, const wchar_t* pKey);
XC_API HELE WINAPI XEdit_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API HELE WINAPI XEdit_CreateEx(int x, int y, int cx, int cy, edit_type_ type, HXCGUI hParent = NULL);
XC_API void WINAPI XEdit_EnableAutoWrap(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEdit_EnableReadOnly(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEdit_EnableMultiLine(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEdit_EnablePassword(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEdit_EnableAutoSelAll(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEdit_EnableAutoCancelSel(HELE hEle, BOOL bEnable);
XC_API BOOL WINAPI XEdit_IsReadOnly(HELE hEle);
XC_API BOOL WINAPI XEdit_IsMultiLine(HELE hEle);
XC_API BOOL WINAPI XEdit_IsPassword(HELE hEle);
XC_API BOOL WINAPI XEdit_IsAutoWrap(HELE hEle);
XC_API BOOL WINAPI XEdit_IsEmpty(HELE hEle);
XC_API wchar_t WINAPI XEdit_GetAt(HELE hEle, int iRow, int iCol);
XC_API edit_data_copy_* WINAPI XEdit_GetData(HELE hEle);
XC_API void WINAPI XEdit_AddData(HELE hEle, edit_data_copy_* pData, USHORT* styleTable, int nStyleCount);
XC_API void WINAPI XEdit_FreeData(edit_data_copy_* pData);
XC_API void WINAPI XEdit_SetDefaultText(HELE hEle, const wchar_t*  pString);
XC_API void WINAPI XEdit_SetDefaultTextColor(HELE hEle, COLORREF color, BYTE alpha);
XC_API void WINAPI XEdit_SetPasswordCharacter(HELE hEle, wchar_t  ch);
XC_API void WINAPI XEdit_SetTextAlign(HELE hEle, int  align);
XC_API void WINAPI XEdit_SetText(HELE hEle, const wchar_t* pString);
XC_API void WINAPI XEdit_SetTextInt(HELE hEle, int nValue);
XC_API int  WINAPI XEdit_GetText(HELE hEle, out_ wchar_t* pOut, int nOutlen);
XC_API int  WINAPI XEdit_GetTextRow(HELE hEle, int iRow, out_ wchar_t* pOut, int nOutlen);
XC_API int  WINAPI XEdit_GetLength(HELE hEle);
XC_API int  WINAPI XEdit_GetLengthRow(HELE hEle, int iRow);
XC_API void WINAPI XEdit_InsertText(HELE hEle, int iRow, int iCol, const wchar_t* pString);
XC_API void WINAPI XEdit_AddText(HELE hEle, const wchar_t* pString);
XC_API void WINAPI XEdit_AddTextEx(HELE hEle, const wchar_t* pString, int iStyle);
XC_API int  WINAPI XEdit_AddObject(HELE hEle, HXCGUI hObj);
XC_API void WINAPI XEdit_AddByStyle(HELE hEle, int iStyle);
XC_API int  WINAPI XEdit_AddStyle(HELE hEle, HXCGUI hFont_image_Obj, COLORREF color, BOOL bColor);
XC_API int  WINAPI XEdit_AddStyleEx(HELE hEle, const wchar_t* fontName, int fontSize, int fontStyle, COLORREF color, BOOL bColor);
XC_API BOOL WINAPI XEdit_GetStyleInfo(HELE hEle, int iStyle, out_ edit_style_info_* info);
XC_API void WINAPI XEdit_SetCurStyle(HELE hEle, int iStyle);
XC_API void WINAPI XEdit_SetCaretColor(HELE hEle, COLORREF  color);
XC_API void WINAPI XEdit_SetSelectBkColor(HELE hEle, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XEdit_SetRowHeight(HELE hEle, int nHeight);
XC_API void WINAPI XEdit_SetRowHeightEx(HELE hEle, int iRow, int nHeight);
XC_API void WINAPI XEdit_SetCurPos(HELE hEle, int iRow, int iCol);
XC_API int  WINAPI XEdit_GetCurPos(HELE hEle);
XC_API int  WINAPI XEdit_GetCurRow(HELE hEle);
XC_API int  WINAPI XEdit_GetCurCol(HELE hEle);
XC_API BOOL WINAPI XEdit_AutoScroll(HELE hEle);
XC_API BOOL WINAPI XEdit_AutoScrollEx(HELE hEle, int iRow, int iCol);
XC_API void WINAPI XEdit_PositionToInfo(HELE hEle, int iPos, Position_i *pInfo);
XC_API BOOL WINAPI XEdit_SelectAll(HELE hEle);
XC_API BOOL WINAPI XEdit_CancelSelect(HELE hEle);
XC_API BOOL WINAPI XEdit_DeleteSelect(HELE hEle);
XC_API BOOL WINAPI XEdit_SetSelect(HELE hEle, int iStartRow, int iStartCol, int iEndRow, int iEndCol);
XC_API int  WINAPI XEdit_GetSelectText(HELE hEle, out_ wchar_t* pOut, int nOutLen);
XC_API BOOL WINAPI XEdit_GetSelectRange(HELE hEle, out_ Position_i *pBegin, out_ Position_i *pEnd);
XC_API BOOL WINAPI XEdit_Delete(HELE hEle, int iStartRow, int iStartCol, int iEndRow, int iEndCol);
XC_API BOOL WINAPI XEdit_DeleteRow(HELE hEle, int iRow);
XC_API BOOL WINAPI XEdit_ClipboardCut(HELE hEle);
XC_API BOOL WINAPI XEdit_ClipboardCopy(HELE hEle);
XC_API BOOL WINAPI XEdit_ClipboardPaste(HELE hEle);
XC_API BOOL WINAPI XEdit_Undo(HELE hEle);
XC_API BOOL WINAPI XEdit_Redo(HELE hEle);
XC_API void WINAPI XEdit_AddChatBegin(HELE hEle, HIMAGE hImageAvatar, HIMAGE hImageBubble, int nFlag);
XC_API void WINAPI XEdit_AddChatEnd(HELE hEle);
XC_API void WINAPI XEdit_SetChatIndentation(HELE hEle, int nIndentation);
XC_API HELE WINAPI XEle_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API BOOL WINAPI _XEle_RegEvent(HELE hEle, UINT nEvent, xc_event* pEvent);
XC_API BOOL WINAPI _XEle_RemoveEvent(HELE hEle, UINT nEvent, xc_event* pEvent);
XC_API BOOL WINAPI XEle_RegEventC(HELE hEle, int nEvent, void *pFun); //注册事件C方式
XC_API BOOL WINAPI XEle_RegEventC1(HELE hEle, int nEvent, void *pFun);
XC_API BOOL WINAPI XEle_RegEventC2(HELE hEle, int nEvent, void *pFun);
XC_API BOOL WINAPI XEle_RemoveEventC(HELE hEle, int nEvent, void *pFun); //移除事件函数C方式
XC_API int  WINAPI XEle_SendEvent(HELE hEle, HELE hEventEle, int nEvent, WPARAM wParam, LPARAM lParam);
XC_API BOOL WINAPI XEle_PostEvent(HELE hEle, HELE hEventEle, int nEvent, WPARAM wParam, LPARAM lParam);
XC_API BOOL WINAPI XEle_IsShow(HELE hEle);
XC_API BOOL WINAPI XEle_IsEnable(HELE hEle);
XC_API BOOL WINAPI XEle_IsEnableFocus(HELE hEle);
XC_API BOOL WINAPI XEle_IsDrawFocus(HELE hEle);
XC_API BOOL WINAPI XEle_IsEnableEvent_XE_PAINT_END(HELE hEle);
XC_API BOOL WINAPI XEle_IsMouseThrough(HELE hEle);
XC_API BOOL WINAPI XEle_IsBkTransparent(HELE hEle);
XC_API BOOL WINAPI XEle_IsKeyTab(HELE hEle);
XC_API BOOL WINAPI XEle_IsSwitchFocus(HELE hEle);
XC_API BOOL WINAPI XEle_IsEnable_XE_MOUSEWHEEL(HELE hEle);
XC_API BOOL WINAPI XEle_IsChildEle(HELE hEle, HELE hChildEle);
XC_API BOOL WINAPI XEle_IsEnableCanvas(HELE hEle);
XC_API BOOL WINAPI XEle_IsFocus(HELE hEle);
XC_API BOOL WINAPI XEle_IsFocusEx(HELE hEle);
XC_API void WINAPI XEle_Enable(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableFocus(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableDrawFocus(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableDrawBorder(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableCanvas(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableEvent_XE_PAINT_END(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableBkTransparent(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableMouseThrough(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableKeyTab(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableSwitchFocus(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableEvent_XE_MOUSEWHEEL(HELE hEle, BOOL bEnable);
XC_API int  WINAPI XEle_SetRect(HELE hEle, RECT *pRect, BOOL bRedraw = FALSE, int nFlags = xc_adjustLayout_all);
XC_API int  WINAPI XEle_SetRectEx(HELE hEle, int x, int y, int cx, int cy, BOOL bRedraw = FALSE, int nFlags = xc_adjustLayout_all);
XC_API int  WINAPI XEle_SetRectLogic(HELE hEle, RECT *pRect, BOOL bRedraw = FALSE, int nFlags = xc_adjustLayout_all); //逻辑模式坐标
XC_API int  WINAPI XEle_Move(HELE hEle, int x, int y, BOOL bRedraw = FALSE, int nFlags = xc_adjustLayout_all); //逻辑模式坐标
XC_API int  WINAPI XEle_MoveLogic(HELE hEle, int x, int y, BOOL bRedraw = FALSE, int nFlags = xc_adjustLayout_all); //逻辑模式坐标
XC_API void WINAPI XEle_GetRect(HELE hEle, out_ RECT *pRect);   //相对与父坐标,人眼观察模式
XC_API void WINAPI XEle_GetRectLogic(HELE hEle, out_ RECT *pRect); //相对与父坐标,逻辑模式
XC_API void WINAPI XEle_GetClientRect(HELE hEle, out_ RECT *pRect);  //左上角为0，0坐标
XC_API void WINAPI XEle_GetWndClientRect(HELE hEle, out_ RECT *pRect);
XC_API void WINAPI XEle_SetWidth(HELE hEle, int nWidth);
XC_API void WINAPI XEle_SetHeight(HELE hEle, int nHeight);
XC_API int  WINAPI XEle_GetWidth(HELE hEle);
XC_API int  WINAPI XEle_GetHeight(HELE hEle);
XC_API void WINAPI XEle_RectWndClientToEleClient(HELE hEle, in_out_ RECT *pRect);
XC_API void WINAPI XEle_PointWndClientToEleClient(HELE hEle, in_out_ POINT *pPt);
XC_API void WINAPI XEle_RectClientToWndClient(HELE hEle, in_out_ RECT *pRect);
XC_API void WINAPI XEle_PointClientToWndClient(HELE hEle, in_out_ POINT *pPt);
XC_API BOOL WINAPI XEle_AddChild(HELE hEle, HXCGUI hChild);
XC_API BOOL WINAPI XEle_InsertChild(HELE hEle, HXCGUI hChild, int index);  //插入到指定位置
XC_API void WINAPI XEle_RemoveEle(HELE hEle);
XC_API BOOL WINAPI XEle_SetZOrder(HELE hEle, int index);
XC_API BOOL WINAPI XEle_SetZOrderEx(HELE hEle, HELE hDestEle, zorder_ nType);
XC_API int  WINAPI XEle_GetZOrder(HELE hEle);
XC_API BOOL WINAPI XEle_SetTopmost(HELE hEle, BOOL bTopmost);
XC_API void WINAPI XEle_EnableCSS(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_SetCssName(HELE hEle, const wchar_t *pName);
XC_API const wchar_t* WINAPI XEle_GetCssName(HELE hEle);
XC_API void WINAPI XEle_ShowEle(HELE hEle, BOOL bShow);
XC_API XC_OBJECT_TYPE WINAPI XEle_GetType(HELE hEle);
XC_API HWND WINAPI XEle_GetHWND(HELE hEle);
XC_API HWINDOW WINAPI XEle_GetHWINDOW(HELE hEle);
XC_API void WINAPI XEle_SetCursor(HELE hEle, HCURSOR hCursor);
XC_API HCURSOR WINAPI XEle_GetCursor(HELE hEle);
XC_API void WINAPI XEle_SetID(HELE hEle, int nID);
XC_API int  WINAPI XEle_GetID(HELE hEle);
XC_API void WINAPI XEle_SetUID(HELE hEle, int nUID);
XC_API int  WINAPI XEle_GetUID(HELE hEle);
XC_API void WINAPI XEle_SetName(HELE hEle, const wchar_t* pName);
XC_API const wchar_t* WINAPI XEle_GetName(HELE hEle);
XC_API HELE WINAPI XEle_GetParentEle(HELE hEle);
XC_API HXCGUI WINAPI XEle_GetParent(HELE hEle);
XC_API void WINAPI XEle_SetTextColor(HELE hEle, COLORREF color, BYTE alpha = 255);
XC_API COLORREF WINAPI XEle_GetTextColor(HELE hEle);
XC_API COLORREF WINAPI XEle_GetTextColorEx(HELE hEle);
XC_API void WINAPI XEle_SetFocusBorderColor(HELE hEle, COLORREF color, BYTE alpha = 255);
XC_API COLORREF WINAPI XEle_GetFocusBorderColor(HELE hEle);
XC_API void WINAPI XEle_SetFont(HELE hEle, HFONTX hFontx);
XC_API HFONTX WINAPI XEle_GetFont(HELE hEle);
XC_API HFONTX WINAPI XEle_GetFontEx(HELE hEle);
XC_API void WINAPI XEle_SetAlpha(HELE hEle, BYTE alpha);
XC_API int  WINAPI XEle_GetChildCount(HELE hEle);
XC_API HXCGUI WINAPI XEle_GetChildByIndex(HELE hEle, int index);
XC_API HXCGUI WINAPI XEle_GetChildByID(HELE hEle, int nID);
XC_API void WINAPI XEle_SetBorderSize(HELE hEle, int left, int top, int right, int bottom);
XC_API void WINAPI XEle_GetBorderSize(HELE hEle, out_ BorderSize_i* pBorder);
XC_API void WINAPI XEle_SetPadding(HELE hEle, int left, int top, int right, int bottom);
XC_API void WINAPI XEle_GetPadding(HELE hEle, out_ PaddingSize_i* pPadding);
XC_API void WINAPI XEle_SetDragBorder(HELE hEle, int nFlags);
XC_API void WINAPI XEle_SetDragBorderBindEle(HELE hEle, int nFlags, HELE hBindEle, int nSpace);
XC_API void WINAPI XEle_SetMinSize(HELE hEle, int nWidth, int nHeight);
XC_API void WINAPI XEle_SetMaxSize(HELE hEle, int nWidth, int nHeight);
XC_API void WINAPI XEle_SetLockScroll(HELE hEle, BOOL bHorizon, BOOL bVertical);
XC_API HELE WINAPI XEle_HitChildEle(HELE hEle, in_ POINT  *pPt);
XC_API void WINAPI XEle_SetUserData(HELE hEle, int nData);
XC_API int  WINAPI XEle_GetUserData(HELE hEle);
XC_API void WINAPI XEle_GetContentSize(HELE hEle, out_ SIZE* pSize);
XC_API void WINAPI XEle_SetCapture(HELE hEle, BOOL b);
XC_API void WINAPI XEle_SetLayoutWidth(HELE hEle, layout_size_type_ nType, int nWidth);
XC_API void WINAPI XEle_SetLayoutHeight(HELE hEle, layout_size_type_ nType, int nHeight);
XC_API void WINAPI XEle_GetLayoutWidth(HELE hEle, out_ layout_size_type_ *pType, out_ int *pWidth);
XC_API void WINAPI XEle_GetLayoutHeight(HELE hEle, out_ layout_size_type_ *pType, out_ int *pHeight);
XC_API void WINAPI XEle_SetLayoutFloat(HELE hEle, layout_float_type_ nFloat_);
XC_API void WINAPI XEle_SetLayoutWrap(HELE hEle, BOOL bWrap);
XC_API void WINAPI XEle_RedrawEle(HELE hEle, BOOL bImmediate = FALSE);
XC_API void WINAPI XEle_RedrawRect(HELE hEle, RECT *pRect, BOOL bImmediate = FALSE);
XC_API void WINAPI XEle_Destroy(HELE hEle);  //销毁
XC_API void WINAPI XEle_AddBkBorder(HELE hEle, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XEle_AddBkFill(HELE hEle, COLORREF color, BYTE alpha);
XC_API void WINAPI XEle_AddBkImage(HELE hEle, HIMAGE hImage);
XC_API int  WINAPI XEle_GetBkInfoCount(HELE hEle);
XC_API void WINAPI XEle_ClearBkInfo(HELE hEle);
XC_API HBKM WINAPI XEle_GetBkManager(HELE hEle);
XC_API HBKM WINAPI XEle_GetBkManagerEx(HELE hEle);
XC_API int  WINAPI XEle_GetStateFlags(HELE hEle); //获取组合状态
XC_API BOOL WINAPI XEle_DrawFocus(HELE hEle, HDRAW hDraw, RECT* pRect);
XC_API void WINAPI XEle_DrawEle(HELE hEle, HDRAW hDraw);
XC_API void WINAPI XEle_EnableTransparentChannel(HELE hEle, BOOL bEnable);
XC_API BOOL WINAPI XEle_SetXCTimer(HELE hEle, UINT nIDEvent, UINT uElapse);
XC_API BOOL WINAPI XEle_KillXCTimer(HELE hEle, UINT nIDEvent);
XC_API void WINAPI XEle_SetToolTip(HELE hEle, const wchar_t* pText);
XC_API const wchar_t* WINAPI XEle_GetToolTip(HELE hEle);
XC_API void WINAPI XEle_PopupToolTip(HELE hEle, int x, int y);
XC_API void WINAPI XEle_AdjustLayout(HELE hEle);
XC_API void WINAPI XEle_AdjustLayoutEx(HELE hEle, int nFlags = xc_adjustLayout_self);
XC_API HFONTX WINAPI XFont_Create(int size);//创建字体
XC_API HFONTX WINAPI XFont_Create2(const wchar_t *pName = L"宋体", int size = 12, int style = xc_fontStyle_regular);
XC_API HFONTX WINAPI XFont_Create3(xc_font_info_i*  pInfo);
XC_API HFONTX WINAPI XFont_CreateEx(LOGFONTW *pFontInfo);
XC_API HFONTX WINAPI XFont_CreateFromHFONT(HFONT hFont);
XC_API HFONTX WINAPI XFont_CreateFromFont(void*  pFont);
XC_API HFONTX WINAPI XFont_CreateFromFile(const wchar_t*  pFontFile, int size = 12, int style = xc_fontStyle_regular);
XC_API void   WINAPI XFont_EnableAutoDestroy(HFONTX hFontX, BOOL bEnable);
XC_API void* WINAPI XFont_GetFont(HFONTX hFontX);
XC_API void  WINAPI XFont_GetFontInfo(HFONTX hFontX, out_ xc_font_info_i*  pInfo);
XC_API BOOL  WINAPI XFont_GetLOGFONTW(HFONTX hFontX, HDC hdc, out_ LOGFONTW  *pOut);
XC_API void  WINAPI XFont_AddRef(HFONTX hFontX);   //增加引用计数
XC_API void  WINAPI XFont_Release(HFONTX hFontX);  //释放引用计数
XC_API int   WINAPI XFont_GetRefCount(HFONTX hFontX);
XC_API void  WINAPI XFont_Destroy(HFONTX hFontX);  //销毁字体
XC_API HWINDOW WINAPI XFrameWnd_Create(int x, int y, int cx, int cy, const wchar_t *pTitle, HWND hWndParent, int XCStyle);  //创建窗口
XC_API HWINDOW WINAPI XFrameWnd_CreateEx(DWORD dwExStyle, wchar_t* lpClassName, wchar_t* lpWindowName, DWORD dwStyle, int x, int y, int cx, int cy, HWND hWndParent, int XCStyle);  //创建窗口
XC_API void WINAPI XFrameWnd_GetLayoutAreaRect(HWINDOW hWindow, out_ RECT *pRect); //获取客户区布局区域坐标
XC_API void WINAPI XFrameWnd_SetView(HWINDOW hWindow, HELE hEle);
XC_API void WINAPI XFrameWnd_SetPaneSplitBarColor(HWINDOW hWindow, COLORREF color, BYTE alpha = 255);
XC_API BOOL WINAPI XFrameWnd_SaveLayoutToFile(HWINDOW hWindow, const wchar_t* pFileName);
XC_API BOOL WINAPI XFrameWnd_LoadLayoutFile(HWINDOW hWindow, HELE* aPaneList, int nEleCount, const wchar_t* pFileName);
XC_API BOOL WINAPI XFrameWnd_AddPane(HWINDOW hWindow, HELE hPaneDest, HELE hPaneNew, pane_align_ align);
XC_API BOOL WINAPI XFrameWnd_MergePane(HWINDOW hWindow, HELE hPaneDest, HELE hPaneNew);
XC_API HIMAGE WINAPI XImgSrc_LoadFile(const wchar_t *pImageName);//从文件中加载图片
XC_API HIMAGE WINAPI XImgSrc_LoadFileRect(const wchar_t *pImageName, int x, int y, int cx, int cy);  //加载图片,指定区域
XC_API HIMAGE WINAPI XImgSrc_LoadRes(int id, const wchar_t *pType);//从资源中加载图片
XC_API HIMAGE WINAPI XImgSrc_LoadZip(const wchar_t *pZipFileName, const wchar_t *pImageName, const wchar_t *pPassword = NULL);//从ZIP中加载图片
XC_API HIMAGE WINAPI XImgSrc_LoadZipRect(const wchar_t *pZipFileName, const wchar_t *pImageName, const wchar_t *pPassword, int x, int y, int cx, int cy);
XC_API HIMAGE WINAPI XImgSrc_LoadZipMem(void* data, int length, const wchar_t *pImageName, const wchar_t *pPassword = NULL);
XC_API HIMAGE WINAPI XImgSrc_LoadMemory(void* pBuffer, int nSize);
XC_API HIMAGE WINAPI XImgSrc_LoadMemoryRect(void* pBuffer, int nSize, int x, int y, int cx, int cy);
XC_API HIMAGE WINAPI XImgSrc_LoadFromImage(void *pImage);
XC_API HIMAGE WINAPI XImgSrc_LoadFromExtractIcon(const wchar_t *pImageName);
XC_API HIMAGE WINAPI XImgSrc_LoadFromHICON(HICON hIcon);
XC_API HIMAGE WINAPI XImgSrc_LoadFromHBITMAP(HBITMAP hBitmap);
XC_API void WINAPI XImgSrc_EnableAutoDestroy(HIMAGE hImage, BOOL bEnable); //启用或关闭自动销毁,当与UI元素关联时有效
XC_API int WINAPI XImgSrc_GetWidth(HIMAGE hImage);
XC_API int WINAPI XImgSrc_GetHeight(HIMAGE hImage);
XC_API const wchar_t* WINAPI XImgSrc_GetFile(HIMAGE hImage);
XC_API void WINAPI XImgSrc_AddRef(HIMAGE hImage);
XC_API void WINAPI XImgSrc_Release(HIMAGE hImage);
XC_API int  WINAPI XImgSrc_GetRefCount(HIMAGE hImage);
XC_API void WINAPI XImgSrc_Destroy(HIMAGE hImage);
XC_API HIMAGE WINAPI XImage_LoadSrc(HIMAGE hImageSrc);
XC_API HIMAGE WINAPI XImage_LoadFile(const wchar_t *pImageName, BOOL bStretch = FALSE);
XC_API HIMAGE WINAPI XImage_LoadFileAdaptive(const wchar_t *pImageName, int leftSize, int topSize, int rightSize, int bottomSize);
XC_API HIMAGE WINAPI XImage_LoadFileRect(const wchar_t *pImageName, int x, int y, int cx, int cy);
XC_API HIMAGE WINAPI XImage_LoadResAdaptive(int id, const wchar_t *pType, int leftSize, int topSize, int rightSize, int bottomSize);
XC_API HIMAGE WINAPI XImage_LoadRes(int id, const wchar_t *pType, BOOL bStretch = FALSE);
XC_API HIMAGE WINAPI XImage_LoadZip(const wchar_t *pZipFileName, const wchar_t *pImageName, const wchar_t *pPassword = NULL, BOOL bStretch = FALSE);
XC_API HIMAGE WINAPI XImage_LoadZipAdaptive(const wchar_t *pZipFileName, const wchar_t *pImageName, const wchar_t *pPassword, int x1, int x2, int y1, int y2);
XC_API HIMAGE WINAPI XImage_LoadZipRect(const wchar_t *pZipFileName, const wchar_t *pImageName, const wchar_t *pPassword, int x, int y, int cx, int cy);
XC_API HIMAGE WINAPI XImage_LoadZipMem(void* data, int length, const wchar_t *pImageName, const wchar_t *pPassword = NULL, BOOL bStretch = FALSE);
XC_API HIMAGE WINAPI XImage_LoadMemory(void* pBuffer, int nSize, BOOL bStretch);
XC_API HIMAGE WINAPI XImage_LoadMemoryRect(void* pBuffer, int nSize, int x, int y, int cx, int cy, BOOL bStretch);
XC_API HIMAGE WINAPI XImage_LoadMemoryAdaptive(void* pBuffer, int nSize, int leftSize, int topSize, int rightSize, int bottomSize);
XC_API HIMAGE WINAPI XImage_LoadFromImage(void *pImage);
XC_API HIMAGE WINAPI XImage_LoadFromExtractIcon(const wchar_t *pImageName);
XC_API HIMAGE WINAPI XImage_LoadFromHICON(HICON hIcon);
XC_API HIMAGE WINAPI XImage_LoadFromHBITMAP(HBITMAP hBitmap);
XC_API BOOL WINAPI XImage_IsStretch(HIMAGE hImage);   //是否拉伸图片
XC_API BOOL WINAPI XImage_IsAdaptive(HIMAGE hImage);  //是否为自适应图片
XC_API BOOL WINAPI XImage_IsTile(HIMAGE hImage);      //是否为平铺图片
XC_API BOOL WINAPI XImage_SetDrawType(HIMAGE hImage, image_draw_type_ nType);//设置图片绘制类型
XC_API BOOL WINAPI XImage_SetDrawTypeAdaptive(HIMAGE hImage, int leftSize, int topSize, int rightSize, int bottomSize);//设置图片自适应
XC_API void WINAPI XImage_SetTranColor(HIMAGE hImage, COLORREF color); //设置透明色
XC_API void WINAPI XImage_SetTranColorEx(HIMAGE hImage, COLORREF color, BYTE tranColor); //设置透明色
XC_API float WINAPI XImage_SetRotateAngle(HIMAGE hImage, float  fAngle);
XC_API void WINAPI XImage_SetSplitEqual(HIMAGE hImage, int nCount, int iIndex);
XC_API void WINAPI XImage_EnableTranColor(HIMAGE hImage, BOOL bEnable); //启用透明色
XC_API void WINAPI XImage_EnableAutoDestroy(HIMAGE hImage, BOOL bEnable); //启用或关闭自动销毁,当与UI元素关联时有效
XC_API void WINAPI XImage_EnableCenter(HIMAGE hImage, BOOL bCenter); //bCenter
XC_API BOOL WINAPI XImage_IsCenter(HIMAGE hImage);
XC_API image_draw_type_ WINAPI XImage_GetDrawType(HIMAGE hImage); //获取图片绘制类型
XC_API int WINAPI XImage_GetWidth(HIMAGE hImage);
XC_API int WINAPI XImage_GetHeight(HIMAGE hImage);
XC_API HIMAGE WINAPI XImage_GetImageSrc(HIMAGE hImage);
XC_API void WINAPI XImage_AddRef(HIMAGE hImage);
XC_API void WINAPI XImage_Release(HIMAGE hImage);
XC_API int  WINAPI XImage_GetRefCount(HIMAGE hImage);
XC_API void WINAPI XImage_Destroy(HIMAGE hImage);
XC_API HELE WINAPI XLayout_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API HELE WINAPI XLayout_CreateEx(HXCGUI hParent);
XC_API BOOL WINAPI XLayout_IsEnableLayout(HELE hEle);
XC_API void WINAPI XLayout_EnableLayout(HELE hEle, BOOL bEnable);
XC_API void WINAPI XLayout_ShowLayoutFrame(HELE hEle, BOOL bEnable);
XC_API int  WINAPI XLayout_GetWidthIn(HELE hEle);
XC_API int  WINAPI XLayout_GetHeightIn(HELE hEle);
XC_API void WINAPI XLayout_SetHorizon(HELE hEle, BOOL bHorizon);
XC_API void WINAPI XLayout_SetAlignH(HELE hEle, layout_align_ nAlign);
XC_API void WINAPI XLayout_SetAlignV(HELE hEle, layout_align_ nAlign);
XC_API void WINAPI XLayout_SetSpace(HELE hEle, int nSpace);
XC_API void WINAPI XLayout_SetPadding(HELE hEle, int left, int top, int right, int bottom);
XC_API void WINAPI XLayout_GetLayoutPadding(HELE hEle, out_ PaddingSize_i *pPadding);
XC_API HELE WINAPI XLayoutStack_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API void WINAPI XLayoutStack_ShowLayoutFrame(HELE hEle, BOOL bEnable);
XC_API void WINAPI XLayoutStack_SetWidth(HELE hEle, layoutStack_width_type_ nType, int nWidth);
XC_API void WINAPI XLayoutStack_SetAlign(HELE hEle, layoutStack_align_  nAlign);
XC_API HELE WINAPI XListBox_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XListBox_SetDrawItemBkFlags(HELE hEle, int nFlags);
XC_API BOOL WINAPI XListBox_SetItemData(HELE hEle, int iItem, int nUserData);
XC_API int  WINAPI XListBox_GetItemData(HELE hEle, int iItem);
XC_API BOOL WINAPI XListBox_SetItemInfo(HELE hEle, int iItem, in_ listBox_item_info_i *pItem);
XC_API BOOL WINAPI XListBox_GetItemInfo(HELE hEle, int iItem, out_ listBox_item_info_i *pItem);
XC_API void WINAPI XListBox_AddItemBkBorder(HELE hEle, list_item_state_ nState, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XListBox_AddItemBkFill(HELE hEle, list_item_state_ nState, COLORREF color, BYTE alpha);
XC_API void WINAPI XListBox_AddItemBkImage(HELE hEle, list_item_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XListBox_GetItemBkInfoCount(HELE hEle);
XC_API void WINAPI XListBox_ClearItemBkInfo(HELE hEle);
XC_API BOOL WINAPI XListBox_SetSelectItem(HELE hEle, int iItem);
XC_API int  WINAPI XListBox_GetSelectItem(HELE hEle);
XC_API BOOL WINAPI XListBox_CancelSelectItem(HELE hEle, int iItem);
XC_API BOOL WINAPI XListBox_CancelSelectAll(HELE hEle);
XC_API int  WINAPI XListBox_GetSelectAll(HELE hEle, out_ int *pArray, int nArraySize);
XC_API int  WINAPI XListBox_GetSelectCount(HELE hEle);
XC_API int  WINAPI XListBox_GetItemMouseStay(HELE hEle);
XC_API BOOL WINAPI XListBox_SelectAll(HELE hEle);
XC_API void WINAPI XListBox_VisibleItem(HELE hEle, int iItem);
XC_API void WINAPI XListBox_SetItemHeightDefault(HELE hEle, int nHeight, int nSelHeight);
XC_API void WINAPI XListBox_GetItemHeightDefault(HELE hEle, out_ int *pHeight, out_ int *pSelHeight);
XC_API int  WINAPI XListBox_GetItemIndexFromHXCGUI(HELE hEle, HXCGUI hXCGUI);
XC_API void WINAPI XListBox_SetRowSpace(HELE hEle, int nSpace);
XC_API int WINAPI  XListBox_GetRowSpace(HELE hEle);
XC_API int  WINAPI XListBox_HitTest(HELE hEle, POINT *pPt);
XC_API int  WINAPI XListBox_HitTestOffset(HELE hEle, POINT *pPt); //自动添加滚动视图偏移量
XC_API BOOL WINAPI XListBox_SetItemTemplateXML(HELE hEle, const wchar_t* pXmlFile);
XC_API BOOL WINAPI XListBox_SetItemTemplateXMLFromString(HELE hEle, const char* pStringXML);
XC_API BOOL WINAPI XListBox_SetItemTemplate(HELE hEle, HTEMP hTemp);
XC_API HXCGUI WINAPI XListBox_GetTemplateObject(HELE hEle, int iItem, int nTempItemID);
XC_API void WINAPI XListBox_EnableMultiSel(HELE hEle, BOOL bEnable);
XC_API HXCGUI WINAPI XListBox_CreateAdapter(HELE hEle);
XC_API void   WINAPI XListBox_BindAdapter(HELE hEle, HXCGUI hAdapter);
XC_API HXCGUI WINAPI XListBox_GetAdapter(HELE hEle);
XC_API void WINAPI XListBox_Sort(HELE hEle, int iColumnAdapter, BOOL bAscending);  //设置排序
XC_API void WINAPI XListBox_RefreshData(HELE hEle);
XC_API void WINAPI XListBox_RefreshItem(HELE hEle, int iItem);
XC_API int WINAPI XListBox_AddItemText(HELE hEle, const wchar_t* pText);
XC_API int WINAPI XListBox_AddItemTextEx(HELE hEle, const wchar_t* pName, const wchar_t* pText);
XC_API int WINAPI XListBox_AddItemImage(HELE hEle, HIMAGE hImage);
XC_API int WINAPI XListBox_AddItemImageEx(HELE hEle, const wchar_t* pName, HIMAGE hImage);
XC_API int WINAPI XListBox_InsertItemText(HELE hEle, int iItem, const wchar_t* pValue);
XC_API int WINAPI XListBox_InsertItemTextEx(HELE hEle, int iItem, const wchar_t* pName, const wchar_t* pValue);
XC_API int WINAPI XListBox_InsertItemImage(HELE hEle, int iItem, HIMAGE hImage);
XC_API int WINAPI XListBox_InsertItemImageEx(HELE hEle, int iItem, const wchar_t* pName, HIMAGE hImage);
XC_API BOOL WINAPI XListBox_SetItemText(HELE hEle, int iItem, int iColumn, const wchar_t* pText);
XC_API BOOL WINAPI XListBox_SetItemTextEx(HELE hEle, int iItem, const wchar_t* pName, const wchar_t* pText);
XC_API BOOL WINAPI XListBox_SetItemImage(HELE hEle, int iItem, int iColumn, HIMAGE hImage);
XC_API BOOL WINAPI XListBox_SetItemImageEx(HELE hEle, int iItem, const wchar_t* pName, HIMAGE hImage);
XC_API BOOL WINAPI XListBox_SetItemInt(HELE hEle, int iItem, int iColumn, int nValue);
XC_API BOOL WINAPI XListBox_SetItemIntEx(HELE hEle, int iItem, const wchar_t* pName, int nValue);
XC_API BOOL WINAPI XListBox_SetItemFloat(HELE hEle, int iItem, int iColumn, float fFloat);
XC_API BOOL WINAPI XListBox_SetItemFloatEx(HELE hEle, int iItem, const wchar_t* pName, float fFloat);
XC_API const wchar_t* WINAPI XListBox_GetItemText(HELE hEle, int iItem, int iColumn);
XC_API const wchar_t* WINAPI XListBox_GetItemTextEx(HELE hEle, int iItem, const wchar_t* pName);
XC_API HIMAGE WINAPI XListBox_GetItemImage(HELE hEle, int iItem, int iColumn);
XC_API HIMAGE WINAPI XListBox_GetItemImageEx(HELE hEle, int iItem, const wchar_t* pName);
XC_API BOOL WINAPI XListBox_GetItemInt(HELE hEle, int iItem, int iColumn, out_ int* pOutValue);
XC_API BOOL WINAPI XListBox_GetItemIntEx(HELE hEle, int iItem, const wchar_t* pName, out_ int* pOutValue);
XC_API BOOL WINAPI XListBox_GetItemFloat(HELE hEle, int iItem, int iColumn, out_ float* pOutValue);
XC_API BOOL WINAPI XListBox_GetItemFloatEx(HELE hEle, int iItem, const wchar_t* pName, out_ float* pOutValue);
XC_API BOOL WINAPI XListBox_DeleteItem(HELE hEle, int iItem);
XC_API BOOL WINAPI XListBox_DeleteItemEx(HELE hEle, int iItem, int nCount);
XC_API void WINAPI XListBox_DeleteItemAll(HELE hEle);
XC_API void WINAPI XListBox_DeleteColumnAll(HELE hEle);
XC_API int WINAPI XListBox_GetCount_AD(HELE hEle);
XC_API int WINAPI XListBox_GetCountColumn_AD(HELE hEle);
XC_API HTEMP WINAPI XTemp_Load(listItemTemp_type_ nType, const wchar_t* pFileName);  //加载模板 返回模板对象
XC_API HTEMP WINAPI XTemp_LoadZip(listItemTemp_type_ nType, const wchar_t* pZipFile, const wchar_t* pFileName, const wchar_t* pPassword = NULL);
XC_API HTEMP WINAPI XTemp_LoadZipMem(listItemTemp_type_ nType, void* data, int length, const wchar_t* pFileName, const wchar_t* pPassword = NULL);
XC_API BOOL  WINAPI XTemp_LoadEx(listItemTemp_type_ nType, const wchar_t* pFileName, out_ HTEMP *pOutTemp1, out_ HTEMP *pOutTemp2);
XC_API BOOL  WINAPI XTemp_LoadZipEx(listItemTemp_type_ nType, const wchar_t* pZipFile, const wchar_t* pFileName, const wchar_t* pPassword, out_ HTEMP *pOutTemp1, out_ HTEMP *pOutTemp2);
XC_API BOOL  WINAPI XTemp_LoadZipMemEx(listItemTemp_type_ nType, void* data, int length, const wchar_t* pFileName, const wchar_t* pPassword, out_ HTEMP *pOutTemp1, out_ HTEMP *pOutTemp2);
XC_API HTEMP WINAPI XTemp_LoadFromString(listItemTemp_type_ nType, const char* pStringXML);  //加载模板,从内存, 返回模板对象
XC_API BOOL  WINAPI XTemp_LoadFromStringEx(listItemTemp_type_ nType, const char* pStringXML, out_ HTEMP *pOutTemp1, out_ HTEMP *pOutTemp2);
XC_API listItemTemp_type_ WINAPI XTemp_GetType(HTEMP hTemp);
XC_API BOOL  WINAPI XTemp_Destroy(HTEMP hTemp);
XC_API HTEMP WINAPI XTemp_Create(listItemTemp_type_ nType);
XC_API BOOL  WINAPI XTemp_AddNodeRoot(HTEMP hTemp, void* pNode);
XC_API BOOL  WINAPI XTemp_AddNode(void* pParentNode, void* pNode);
XC_API void* WINAPI XTemp_CreateNode(XC_OBJECT_TYPE nType);
XC_API BOOL  WINAPI XTemp_SetNodeAttribute(void* pNode, const wchar_t* pName, const wchar_t* pAttr);
XC_API BOOL  WINAPI XTemp_SetNodeAttributeEx(void* pNode, int itemID, const wchar_t* pName, const wchar_t* pAttr);
XC_API void* WINAPI XTemp_List_GetNode(HTEMP hTemp, int index);
XC_API void* WINAPI XTemp_GetNode(void* pNode, int itemID);
XC_API void* WINAPI XTemp_CloneNode(void* pNode);
XC_API HELE WINAPI XList_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API int WINAPI XList_AddColumn(HELE hEle, int width); //增加列
XC_API int WINAPI XList_InsertColumn(HELE hEle, int width, int iItem);
XC_API void WINAPI XList_EnableMultiSel(HELE hEle, BOOL bEnable);
XC_API void WINAPI XList_EnableDragChangeColumnWidth(HELE hEle, BOOL bEnable);
XC_API void WINAPI XList_EnableVScrollBarTop(HELE hEle, BOOL bTop);
XC_API void WINAPI XList_EnableItemBkFullRow(HELE hEle, BOOL bFull);
XC_API void WINAPI XList_SetSort(HELE hEle, int iColumn, int iColumnAdapter, BOOL bEnable);//设置排序
XC_API void WINAPI XList_SetDrawItemBkFlags(HELE hEle, int style);
XC_API void WINAPI XList_SetColumnWidth(HELE hEle, int iItem, int width);
XC_API void WINAPI XList_SetColumnMinWidth(HELE hEle, int iItem, int width);
XC_API void WINAPI XList_SetColumnWidthFixed(HELE hEle, int iColumn, BOOL bFixed);
XC_API int  WINAPI XList_GetColumnWidth(HELE hEle, int iColumn);  //获取列宽
XC_API int  WINAPI XList_GetColumnCount(HELE hEle);  //获取列数量
XC_API BOOL WINAPI XList_DeleteColumn(HELE hEle, int iItem);
XC_API void WINAPI XList_DeleteColumnAll(HELE hEle);
XC_API BOOL WINAPI XList_SetItemData(HELE hEle, int iItem, int iSubItem, int data);
XC_API int  WINAPI XList_GetItemData(HELE hEle, int iItem, int iSubItem);
XC_API BOOL WINAPI XList_SetSelectItem(HELE hEle, int iItem);
XC_API int  WINAPI XList_GetSelectItem(HELE hEle);
XC_API int  WINAPI XList_GetSelectItemCount(HELE hEle);
XC_API void WINAPI XList_SetSelectAll(HELE hEle);
XC_API int  WINAPI XList_GetSelectAll(HELE hEle, out_ int *pArray, int nArraySize);
XC_API void WINAPI XList_VisibleItem(HELE hEle, int iItem);
XC_API BOOL WINAPI XList_CancelSelectItem(HELE hEle, int iItem);
XC_API void WINAPI XList_CancelSelectAll(HELE hEle);
XC_API HELE WINAPI XList_GetHeaderHELE(HELE hEle);
XC_API void WINAPI XList_BindAdapter(HELE hEle, HXCGUI hAdapter);
XC_API void WINAPI XList_BindAdapterHeader(HELE hEle, HXCGUI hAdapter);
XC_API HXCGUI WINAPI XList_CreateAdapter(HELE hEle);
XC_API HXCGUI WINAPI XList_CreateAdapterHeader(HELE hEle);
XC_API HXCGUI WINAPI XList_GetAdapter(HELE hEle);
XC_API HXCGUI WINAPI XList_GetAdapterHeader(HELE hEle);
XC_API BOOL WINAPI XList_SetItemTemplateXML(HELE hEle, const wchar_t* pXmlFile);
XC_API BOOL WINAPI XList_SetItemTemplateXMLFromString(HELE hEle, const char* pStringXML);
XC_API BOOL WINAPI XList_SetItemTemplate(HELE hEle, HTEMP hTemp);
XC_API HXCGUI WINAPI XList_GetTemplateObject(HELE hEle, int iItem, int iSubItem, int nTempItemID); //通过模板项ID,获取实例化模板项ID对应的对象.
XC_API int    WINAPI XList_GetItemIndexFromHXCGUI(HELE hEle, HXCGUI hXCGUI);
XC_API HXCGUI WINAPI XList_GetHeaderTemplateObject(HELE hEle, int iItem, int nTempItemID);
XC_API int    WINAPI XList_GetHeaderItemIndexFromHXCGUI(HELE hEle, HXCGUI hXCGUI);
XC_API void WINAPI XList_SetHeaderHeight(HELE hEle, int height);
XC_API int  WINAPI XList_GetHeaderHeight(HELE hEle);
XC_API void WINAPI XList_GetVisibleRowRange(HELE hEle, out_ int *piStart, out_ int* piEnd);
XC_API void WINAPI XList_AddItemBkBorder(HELE hEle, list_item_state_ nState, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XList_AddItemBkFill(HELE hEle, list_item_state_ nState, COLORREF color, BYTE alpha);
XC_API void WINAPI XList_AddItemBkImage(HELE hEle, list_item_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XList_GetItemBkInfoCount(HELE hEle);
XC_API void WINAPI XList_ClearItemBkInfo(HELE hEle);
XC_API void WINAPI XList_SetItemHeightDefault(HELE hEle, int nHeight, int nSelHeight);
XC_API void WINAPI XList_GetItemHeightDefault(HELE hEle, out_ int *pHeight, out_ int *pSelHeight);
XC_API void WINAPI XList_SetRowSpace(HELE hEle, int nSpace);
XC_API int  WINAPI XList_GetRowSpace(HELE hEle);
XC_API void WINAPI XList_SetLockColumnLeft(HELE hEle, int iColumn);
XC_API void WINAPI XList_SetLockColumnRight(HELE hEle, int iColumn);
XC_API void WINAPI XList_SetLockRowBottom(HELE hEle, BOOL bLock);
XC_API BOOL WINAPI XList_HitTest(HELE hEle, POINT *pPt, out_ int *piItem, out_ int *piSubItem);
XC_API BOOL WINAPI XList_HitTestOffset(HELE hEle, POINT *pPt, out_ int *piItem, out_ int *piSubItem);
XC_API void WINAPI XList_RefreshData(HELE hEle);
XC_API void WINAPI XList_RefreshItem(HELE hEle, int iItem);
XC_API int WINAPI XList_AddColumnText(HELE hEle, int nWidth, const wchar_t* pText);
XC_API int WINAPI XList_AddItemText(HELE hEle, const wchar_t* pText);
XC_API int WINAPI XList_AddItemTextEx(HELE hEle, const wchar_t* pName, const wchar_t* pText);
XC_API int WINAPI XList_AddItemImage(HELE hEle, HIMAGE hImage);
XC_API int WINAPI XList_AddItemImageEx(HELE hEle, const wchar_t* pName, HIMAGE hImage);
XC_API int WINAPI XList_InsertItemText(HELE hEle, int iItem, const wchar_t* pValue);
XC_API int WINAPI XList_InsertItemTextEx(HELE hEle, int iItem, const wchar_t* pName, const wchar_t* pValue);
XC_API int WINAPI XList_InsertItemImage(HELE hEle, int iItem, HIMAGE hImage);
XC_API int WINAPI XList_InsertItemImageEx(HELE hEle, int iItem, const wchar_t* pName, HIMAGE hImage);
XC_API BOOL WINAPI XList_SetItemText(HELE hEle, int iItem, int iColumn, const wchar_t* pText);
XC_API BOOL WINAPI XList_SetItemTextEx(HELE hEle, int iItem, const wchar_t* pName, const wchar_t* pText);
XC_API BOOL WINAPI XList_SetItemImage(HELE hEle, int iItem, int iColumn, HIMAGE hImage);
XC_API BOOL WINAPI XList_SetItemImageEx(HELE hEle, int iItem, const wchar_t* pName, HIMAGE hImage);
XC_API BOOL WINAPI XList_SetItemInt(HELE hEle, int iItem, int iColumn, int nValue);
XC_API BOOL WINAPI XList_SetItemIntEx(HELE hEle, int iItem, const wchar_t* pName, int nValue);
XC_API BOOL WINAPI XList_SetItemFloat(HELE hEle, int iItem, int iColumn, float fFloat);
XC_API BOOL WINAPI XList_SetItemFloatEx(HELE hEle, int iItem, const wchar_t* pName, float fFloat);
XC_API const wchar_t* WINAPI XList_GetItemText(HELE hEle, int iItem, int iColumn);
XC_API const wchar_t* WINAPI XList_GetItemTextEx(HELE hEle, int iItem, const wchar_t* pName);
XC_API HIMAGE WINAPI XList_GetItemImage(HELE hEle, int iItem, int iColumn);
XC_API HIMAGE WINAPI XList_GetItemImageEx(HELE hEle, int iItem, const wchar_t* pName);
XC_API BOOL WINAPI XList_GetItemInt(HELE hEle, int iItem, int iColumn, out_ int* pOutValue);
XC_API BOOL WINAPI XList_GetItemIntEx(HELE hEle, int iItem, const wchar_t* pName, out_ int* pOutValue);
XC_API BOOL WINAPI XList_GetItemFloat(HELE hEle, int iItem, int iColumn, out_ float* pOutValue);
XC_API BOOL WINAPI XList_GetItemFloatEx(HELE hEle, int iItem, const wchar_t* pName, out_ float* pOutValue);
XC_API BOOL WINAPI XList_DeleteItem(HELE hEle, int iItem);
XC_API BOOL WINAPI XList_DeleteItemEx(HELE hEle, int iItem, int nCount);
XC_API void WINAPI XList_DeleteItemAll(HELE hEle);
XC_API void WINAPI XList_DeleteColumnAll_AD(HELE hEle);
XC_API int  WINAPI XList_GetCount_AD(HELE hEle);
XC_API int  WINAPI XList_GetCountColumn_AD(HELE hEle);
XC_API HELE WINAPI XListView_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API HXCGUI WINAPI XListView_CreateAdapter(HELE hEle);
XC_API void   WINAPI XListView_BindAdapter(HELE hEle, HXCGUI hAdapter);
XC_API HXCGUI WINAPI XListView_GetAdapter(HELE hEle);
XC_API BOOL WINAPI XListView_SetItemTemplateXML(HELE hEle, const wchar_t* pXmlFile);
XC_API BOOL WINAPI XListView_SetItemTemplateXMLFromString(HELE hEle, const char* pStringXML);
XC_API BOOL WINAPI XListView_SetItemTemplate(HELE hEle, HTEMP hTemp);
XC_API HXCGUI WINAPI XListView_GetTemplateObject(HELE hEle, int iGroup, int iItem, int nTempItemID);
XC_API HXCGUI WINAPI XListView_GetTemplateObjectGroup(HELE hEle, int iGroup, int nTempItemID);
XC_API BOOL WINAPI XListView_GetItemIDFromHXCGUI(HELE hEle, HXCGUI hXCGUI, out_ int* piGroup, out_ int* piItem);
XC_API BOOL WINAPI XListView_HitTest(HELE hEle, in_ POINT* pPt, out_ int* pOutGroup, out_ int* pOutItem);
XC_API int  WINAPI XListView_HitTestOffset(HELE hEle, in_ POINT *pPt, out_ int* pOutGroup, out_ int* pOutItem); //自动添加滚动视图偏移量
XC_API void WINAPI XListView_EnableMultiSel(HELE hEle, BOOL bEnable);
XC_API void WINAPI XListView_SetDrawItemBkFlags(HELE hEle, int nFlags);
XC_API BOOL WINAPI XListView_SetSelectItem(HELE hEle, int iGroup, int iItem);
XC_API BOOL WINAPI XListView_GetSelectItem(HELE hEle, out_ int *piGroup, out_ int *piItem);
XC_API void WINAPI XListView_VisibleItem(HELE hEle, int iGroup, int iItem);
XC_API int  WINAPI XListView_GetSelectItemCount(HELE hEle);
XC_API int  WINAPI XListView_GetSelectItemAll(HELE hEle, out_ listView_item_id_i *pArray, int nArraySize);
XC_API void WINAPI XListView_SetSelectItemAll(HELE hEle);
XC_API void WINAPI XListView_CancelSelectItemAll(HELE hEle);
XC_API void WINAPI XListView_SetColumnSpace(HELE hEle, int space); //设置列间隔
XC_API void WINAPI XListView_SetRowSpace(HELE hEle, int space); //设置行间隔
XC_API void WINAPI XListView_SetAlignSizeLeft(HELE hEle, int size);
XC_API void WINAPI XListView_SetAlignSizeTop(HELE hEle, int size);
XC_API void WINAPI XListView_SetItemSize(HELE hEle, int width, int height);
XC_API void WINAPI XListView_GetItemSize(HELE hEle, SIZE* pSize);
XC_API void WINAPI XListView_SetGroupHeight(HELE hEle, int height);
XC_API int  WINAPI XListView_GetGroupHeight(HELE hEle);
XC_API void WINAPI XListView_SetGroupUserData(HELE hEle, int iGroup, int nData);
XC_API void WINAPI XListView_SetItemUserData(HELE hEle, int iGroup, int iItem, int nData);
XC_API int WINAPI XListView_GetGroupUserData(HELE hEle, int iGroup);
XC_API int WINAPI XListView_GetItemUserData(HELE hEle, int iGroup, int iItem);
XC_API void WINAPI XListView_AddItemBkBorder(HELE hEle, list_item_state_ nState, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XListView_AddItemBkFill(HELE hEle, list_item_state_ nState, COLORREF color, BYTE alpha);
XC_API void WINAPI XListView_AddItemBkImage(HELE hEle, list_item_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XListView_GetItemBkInfoCount(HELE hEle);
XC_API void WINAPI XListView_ClearItemBkInfo(HELE hEle);
XC_API void WINAPI XListView_RefreshData(HELE hEle);
XC_API void WINAPI XListView_RefreshItem(HELE hEle, int iGroup, int iItem);
XC_API BOOL WINAPI XListView_ExpandGroup(HELE hEle, int iGroup, BOOL bExpand);

XC_API int  WINAPI XListView_Group_AddColumn(HELE hEle, const wchar_t *pName);
XC_API int  WINAPI XListView_Group_AddItemText(HELE hEle, const wchar_t *pValue,int iPos);
XC_API int  WINAPI XListView_Group_AddItemTextEx(HELE hEle, const wchar_t* pName, const wchar_t *pValue,int iPos);
XC_API int  WINAPI XListView_Group_AddItemImage(HELE hEle, HIMAGE hImage,int iPos);
XC_API int  WINAPI XListView_Group_AddItemImageEx(HELE hEle, const wchar_t* pName, HIMAGE hImage,int iPos);
XC_API BOOL WINAPI XListView_Group_SetText(HELE hEle, int iGroup, int iColumn, const wchar_t *pValue);
XC_API BOOL WINAPI XListView_Group_SetTextEx(HELE hEle, int iGroup, const wchar_t *pName, const wchar_t *pValue);
XC_API BOOL WINAPI XListView_Group_SetImage(HELE hEle, int iGroup, int iColumn, HIMAGE hImage);
XC_API BOOL WINAPI XListView_Group_SetImageEx(HELE hEle, int iGroup, const wchar_t *pName, HIMAGE hImage);
XC_API int  WINAPI XListView_Group_GetCount(HELE hEle);
XC_API int  WINAPI XListView_Item_GetCount(HELE hEle, int iGroup);
XC_API int  WINAPI XListView_Item_AddColumn(HELE hEle, const wchar_t *pName);  //增加列

XC_API int  WINAPI XListView_Item_AddItemText(HELE hEle, int iGroup, const wchar_t *pValue,int iPos);
XC_API int  WINAPI XListView_Item_AddItemTextEx(HELE hEle, int iGroup, const wchar_t *pName, const wchar_t *pValue,int iPos);
XC_API int  WINAPI XListView_Item_AddItemImage(HELE hEle, int iGroup, HIMAGE hImage,int iPos);
XC_API int  WINAPI XListView_Item_AddItemImageEx(HELE hEle, int iGroup, const wchar_t *pName, HIMAGE hImage,int iPos);

XC_API BOOL WINAPI XListView_Item_SetText(HELE hEle, int iGroup, int iItem, int iColumn, const wchar_t* pValue);
XC_API BOOL WINAPI XListView_Item_SetTextEx(HELE hEle, int iGroup, int iItem, const wchar_t *pName, const wchar_t* pValue);
XC_API BOOL WINAPI XListView_Item_SetImage(HELE hEle, int iGroup, int iItem, int iColumn, HIMAGE hImage);
XC_API BOOL WINAPI XListView_Item_SetImageEx(HELE hEle, int iGroup, int iItem, const wchar_t *pName, HIMAGE hImage);
XC_API BOOL WINAPI XListView_Group_DeleteItem(HELE hEle, int iGroup);
XC_API void WINAPI XListView_Group_DeleteAllChildItem(HELE hEle, int iGroup);
XC_API BOOL WINAPI XListView_Item_DeleteItem(HELE hEle, int iGroup, int iItem);
XC_API void WINAPI XListView_DeleteAll(HELE hEle);
XC_API void WINAPI XListView_DeleteAllGroup(HELE hEle);
XC_API void WINAPI XListView_DeleteAllItem(HELE hEle);
XC_API void WINAPI XListView_DeleteColumnGroup(HELE hEle, int iColumn);
XC_API void WINAPI XListView_DeleteColumnItem(HELE hEle, int iColumn);
XC_API const wchar_t* WINAPI XListView_Item_GetTextEx(HELE hEle, int iGroup, int iItem, const wchar_t* pName);
XC_API HIMAGE WINAPI XListView_Item_GetImageEx(HELE hEle, int iGroup, int iItem, const wchar_t* pName);
XC_API HELE WINAPI XMenuBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API int  WINAPI XMenuBar_AddButton(HELE hEle, const wchar_t *pText);     //增加弹出菜单按钮
XC_API void WINAPI XMenuBar_SetButtonHeight(HELE hEle, int height);
XC_API HMENUX WINAPI XMenuBar_GetMenu(HELE hEle, int nIndex);
XC_API BOOL WINAPI XMenuBar_DeleteButton(HELE hEle, int nIndex); //删除菜单项并且销毁,同时该按钮下的弹出菜单也被销毁
XC_API HMENUX WINAPI XMenu_Create();
XC_API void WINAPI XMenu_AddItem(HMENUX hMenu, int nID, const wchar_t *pText, int parentId = XC_ID_ROOT, int nFlags = 0); //添加菜单项
XC_API void WINAPI XMenu_AddItemIcon(HMENUX hMenu, int nID, const wchar_t *pText, int nParentID, HIMAGE hImage, int nFlags = 0);
XC_API void WINAPI XMenu_InsertItem(HMENUX hMenu, int nID, const wchar_t *pText, int nFlags, int insertID);
XC_API void WINAPI XMenu_InsertItemIcon(HMENUX hMenu, int nID, const wchar_t *pText, HIMAGE hIcon, int nFlags, int insertID);
XC_API int  WINAPI XMenu_GetFirstChildItem(HMENUX hMenu, int nID);
XC_API int  WINAPI XMenu_GetEndChildItem(HMENUX hMenu, int nID);
XC_API int  WINAPI XMenu_GetPrevSiblingItem(HMENUX hMenu, int nID);
XC_API int  WINAPI XMenu_GetNextSiblingItem(HMENUX hMenu, int nID);
XC_API int  WINAPI XMenu_GetParentItem(HMENUX hMenu, int nID);
XC_API void WINAPI XMenu_SetAutoDestroy(HMENUX hMenu, BOOL bAuto); //是否自动销毁对象,默认弹出菜单关闭后自动销毁
XC_API void WINAPI XMenu_EnableDrawBackground(HMENUX hMenu, BOOL bEnable); //是否有用户绘制菜单背景
XC_API void WINAPI XMenu_EnableDrawItem(HMENUX hMenu, BOOL bEnable);
XC_API BOOL WINAPI XMenu_Popup(HMENUX hMenu, HWND hParentWnd, int x, int y, HELE hParentEle = NULL, menu_popup_position_ nPosition = menu_popup_position_left_top); //弹出菜单
XC_API void WINAPI XMenu_DestroyMenu(HMENUX hMenu);
XC_API void WINAPI XMenu_CloseMenu(HMENUX hMenu);
XC_API void WINAPI XMenu_SetBkImage(HMENUX hMenu, HIMAGE hImage);
XC_API BOOL WINAPI XMenu_SetItemText(HMENUX hMenu, int nID, const wchar_t *pText); //设置项文本
XC_API const wchar_t* WINAPI XMenu_GetItemText(HMENUX hMenu, int nID);
XC_API int  WINAPI XMenu_GetItemTextLength(HMENUX hMenu, int nID);
XC_API BOOL WINAPI XMenu_SetItemIcon(HMENUX hMenu, int nID, HIMAGE hIcon);
XC_API BOOL WINAPI XMenu_SetItemFlags(HMENUX hMenu, int nID, int uFlags);   //设置项属性
XC_API void WINAPI XMenu_SetItemHeight(HMENUX hMenu, int height); //设置菜单项高度
XC_API int  WINAPI XMenu_GetItemHeight(HMENUX hMenu);
XC_API void WINAPI XMenu_SetBorderColor(HMENUX hMenu, COLORREF crColor, BYTE alpha = 255);
XC_API void WINAPI XMenu_SetBorderSize(HMENUX hMenu, int nLeft, int nTop, int nRight, int nBottom);
XC_API int  WINAPI XMenu_GetLeftWidth(HMENUX hMenu); //获取左侧宽度
XC_API int  WINAPI XMenu_GetLeftSpaceText(HMENUX hMenu);  //获取菜单项文本左间隔
XC_API int  WINAPI XMenu_GetItemCount(HMENUX hMenu); //获取菜单项数量,包含子菜单项
XC_API BOOL WINAPI XMenu_SetItemCheck(HMENUX hMenu, int nID, BOOL bCheck);
XC_API BOOL WINAPI XMenu_IsItemCheck(HMENUX hMenu, int nID);
XC_API HWINDOW WINAPI XModalWnd_Create(int nWidth, int nHeight, const wchar_t *pTitle, HWND hWndParent, int XCStyle = xc_window_style_modal);
XC_API HWINDOW WINAPI XModalWnd_CreateEx(DWORD dwExStyle, const wchar_t* lpClassName, const wchar_t* lpWindowName, DWORD dwStyle, int x, int y, int cx, int cy, HWND hWndParent, int XCStyle = xc_window_style_modal);  //创建窗口
XC_API void WINAPI XModalWnd_EnableAutoClose(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XModalWnd_EnableEscClose(HWINDOW hWindow, BOOL bEnable);
XC_API int  WINAPI XModalWnd_DoModal(HWINDOW hWindow);     //启动模态窗口
XC_API void WINAPI XModalWnd_EndModal(HWINDOW hWindow, int nResult); //终止
XC_API HELE WINAPI XPane_Create(const wchar_t *pName, int nWidth, int nHeight, HWINDOW hFrameWnd = NULL);
XC_API void WINAPI XPane_SetView(HELE hEle, HELE hView);
XC_API BOOL WINAPI XPane_IsShowPane(HELE hEle); //判断窗格是否隐藏
XC_API void WINAPI XPane_SetSize(HELE hEle, int nWidth, int nHeight);
XC_API pane_state_ WINAPI XPane_GetState(HELE hEle);
XC_API void WINAPI XPane_GetViewRect(HELE hEle, out_ RECT* pRect);
XC_API void WINAPI XPane_SetTitle(HELE hEle, wchar_t* pTitle);
XC_API const wchar_t* WINAPI XPane_GetTitle(HELE hEle);
XC_API void WINAPI XPane_SetCaptionHeight(HELE hEle, int nHeight);
XC_API int  WINAPI XPane_GetCaptionHeight(HELE hEle);
XC_API void  WINAPI XPane_HidePane(HELE hEle);     //隐藏窗格
XC_API void  WINAPI XPane_ShowPane(HELE hEle);     //隐藏-显示窗格
XC_API void  WINAPI XPane_DockPane(HELE hEle);      //停靠窗格,自动隐藏
XC_API void  WINAPI XPane_LockPane(HELE hEle);      //锁定窗格
XC_API void  WINAPI XPane_FloatPane(HELE hEle);     //弹出窗格,当在码头上
XC_API void  WINAPI XPane_DrawPane(HELE hEle, HDRAW hDraw);
XC_API BOOL WINAPI XFloatWnd_EnableCaptionContent(HWINDOW hWindow, BOOL bEnable);
XC_API HXCGUI WINAPI XFloatWnd_GetCaptionLayout(HWINDOW hWindow);
XC_API HXCGUI WINAPI XFloatWnd_GetCaptionShapeText(HWINDOW hWindow);
XC_API HELE   WINAPI XFloatWnd_GetCaptionButtonClose(HWINDOW hWindow);
XC_API void  WINAPI XFloatWnd_SetTitle(HWINDOW hWindow, const wchar_t*  pTitle);
XC_API const wchar_t*  WINAPI XFloatWnd_GetTitle(HWINDOW hWindow);
XC_API HELE WINAPI XProgBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XProgBar_SetRange(HELE hEle, int range);
XC_API int  WINAPI XProgBar_GetRange(HELE hEle);
XC_API void WINAPI XProgBar_SetSpaceTwo(HELE hEle, int leftSize, int rightSize);
XC_API void WINAPI XProgBar_SetPos(HELE hEle, int pos);
XC_API int  WINAPI XProgBar_GetPos(HELE hEle);
XC_API void WINAPI XProgBar_SetHorizon(HELE hEle, BOOL bHorizon);
XC_API void WINAPI XProgBar_SetImageLoad(HELE hEle, HIMAGE hImage);
XC_API HELE WINAPI XPGrid_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API int  WINAPI XPGrid_AddItem(HELE hEle, const wchar_t *pName, propertyGrid_item_type_ nType, int nParentID = XC_ID_ROOT); //添加项
XC_API int  WINAPI XPGrid_AddItemString(HELE hEle, const wchar_t *pName, const wchar_t *pValue, int nParentID = XC_ID_ROOT);
XC_API int  WINAPI XPGrid_AddItemEle(HELE hEle, HELE hElePanel, int nParentID = XC_ID_ROOT);
XC_API void WINAPI XPGrid_DeleteAll(HELE hEle);
XC_API HELE WINAPI XPGrid_GetItemHELE(HELE hEle, int nItemID);
XC_API void WINAPI XPGrid_SetWidth(HELE hEle, int nWidth);
XC_API BOOL WINAPI XPGrid_SetItemValue(HELE hEle, int nItemID, const wchar_t* pValue);
XC_API BOOL WINAPI XPGrid_SetItemValueInt(HELE hEle, int nItemID, int nValue);
XC_API BOOL WINAPI XPGrid_SetItemData(HELE hEle, int nItemID, int nUserData);
XC_API int  WINAPI XPGrid_GetItemData(HELE hEle, int nItemID);
XC_API const wchar_t* WINAPI XPGrid_GetItemValue(HELE hEle, int nItemID);
XC_API int  WINAPI XPGrid_HitTest(HELE hEle, POINT *pPt, BOOL *pbExpandButton);
XC_API int  WINAPI XPGrid_HitTestOffset(HELE hEle, POINT *pPt, BOOL *pbExpandButton);
XC_API BOOL WINAPI XPGrid_ExpandItem(HELE hEle, int nItemID, BOOL bExpand);//展开项
XC_API int  WINAPI XPGrid_GetSelItem(HELE hEle);
XC_API BOOL WINAPI XPGrid_SetSelItem(HELE hEle, int nItemID);
XC_API void WINAPI XPGrid_SetDrawItemBkFlags(HELE hEle, int nFlags);
XC_API void   WINAPI XRes_EnableDelayLoad(BOOL bEnable);
XC_API void   WINAPI XRes_SetLoadFileCallback(funLoadFile pFun);
XC_API int    WINAPI XRes_GetIDValue(const wchar_t *pName);  //获取资源ID值
XC_API HIMAGE WINAPI XRes_GetImage(const wchar_t *pName);  //获取资源图片
XC_API HIMAGE WINAPI XRes_GetImageEx(const wchar_t *pFileName, const wchar_t *pName); //获取资源图片
XC_API COLORREF WINAPI XRes_GetColor(const wchar_t *pName);  //获取资源颜色
XC_API HFONTX   WINAPI XRes_GetFont(const wchar_t *pName);  //获取资源字体
XC_API HBKM     WINAPI XRes_GetBkM(const wchar_t *pName);  //获取资源背景信息
XC_API HELE WINAPI XEditColor_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API void WINAPI XEditColor_SetColor(HELE hEle, COLORREF color);//设置颜色
XC_API COLORREF WINAPI XEditColor_GetColor(HELE hEle); //获取颜色RGB值
XC_API HELE WINAPI XEditSet_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API HELE WINAPI XEditFile_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XEditFile_SetOpenFileType(HELE hEle, const wchar_t *pType); //设置打开文件类型
XC_API void WINAPI XEditFile_SetDefaultFile(HELE hEle, const wchar_t *pFile); //设置默认目录文件
XC_API void WINAPI XEditFile_SetRelativeDir(HELE hEle, const wchar_t *pDir); //TODO:设置相对路径
XC_API HELE WINAPI XEditFolder_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API void WINAPI XEditFolder_SetDefaultDir(HELE hEle, const wchar_t* pDir);  //设置默认目录
XC_API HELE WINAPI XRichEdit_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XRichEdit_InsertString(HELE hEle, const wchar_t *pString, HFONTX hFont = NULL);
XC_API BOOL WINAPI XRichEdit_InsertImage(HELE hEle, HIMAGE hImage, const wchar_t *pImagePath);
XC_API BOOL WINAPI XRichEdit_InsertGif(HELE hEle, HIMAGE hImage, const wchar_t *pImagePath);
XC_API void WINAPI XRichEdit_InsertStringEx(HELE hEle, int iRow, int iColumn, const wchar_t *pString, HFONTX hFont = NULL);
XC_API BOOL WINAPI XRichEdit_InsertImageEx(HELE hEle, int iRow, int iColumn, HIMAGE hImage, const wchar_t *pImagePath);
XC_API BOOL WINAPI XRichEdit_InsertGifEx(HELE hEle, int iRow, int iColumn, HIMAGE hImage, const wchar_t *pImagePath);
XC_API void WINAPI XRichEdit_EnableReadOnly(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableMultiLine(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnablePassword(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableEvent_XE_RICHEDIT_CHANGE(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableAutoWrap(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableAutoSelAll(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableVerticalCenter(HELE hEle, BOOL bEnable);
XC_API BOOL WINAPI XRichEdit_IsEmpty(HELE hEle);
XC_API BOOL WINAPI XRichEdit_IsReadOnly(HELE hEle);
XC_API BOOL WINAPI XRichEdit_IsMultiLine(HELE hEle);
XC_API BOOL WINAPI XRichEdit_IsPassword(HELE hEle);
XC_API BOOL WINAPI XRichEdit_IsAutoWrap(HELE hEle);
XC_API void WINAPI XRichEdit_SetLimitNum(HELE hEle, int nNumber);
XC_API void WINAPI XRichEdit_SetCaretColor(HELE hEle, COLORREF  color);
XC_API void WINAPI XRichEdit_SetText(HELE hEle, const wchar_t* pString);
XC_API void WINAPI XRichEdit_SetTextInt(HELE hEle, int nVaule);
XC_API int  WINAPI XRichEdit_GetText(HELE hEle, out_ wchar_t* pOut, int len);
XC_API void  WINAPI XRichEdit_GetHTMLFormat(HELE hEle, out_ wchar_t* pOut, int len);  //获取HTML格式内容
XC_API void* WINAPI XRichEdit_GetData(HELE hEle, out_ int *pDataSize = NULL);
XC_API BOOL  WINAPI XRichEdit_InsertData(HELE hEle, void *pData, int iRow, int iColumn);
XC_API int  WINAPI XRichEdit_GetTextLength(HELE hEle);
XC_API void WINAPI XRichEdit_SetRowHeight(HELE hEle, UINT nHeight); //设置默认行高
XC_API void WINAPI XRichEdit_SetDefaultText(HELE hEle, const wchar_t*  pString);
XC_API void WINAPI XRichEdit_SetDefaultTextColor(HELE hEle, COLORREF color, BYTE alpha);
XC_API void WINAPI XRichEdit_SetCurrentInputTextColor(HELE hEle, COLORREF color, BYTE alpha);
XC_API int  WINAPI XRichEdit_GetCurrentRow(HELE hEle);
XC_API int  WINAPI XRichEdit_GetCurrentColumn(HELE hEle);
XC_API void WINAPI XRichEdit_SetCurrentPos(HELE hEle, int iRow, int iColumn);
XC_API int WINAPI XRichEdit_GetRowCount(HELE hEle);
XC_API int WINAPI XRichEdit_GetRowLength(HELE hEle, int iRow);
XC_API int WINAPI XRichEdit_GetRowHeight(HELE hEle, int iRow);
XC_API int WINAPI XRichEdit_GetSelectText(HELE hEle, out_ wchar_t* pOut, int len);
XC_API BOOL WINAPI XRichEdit_GetSelectPosition(HELE hEle, out_ Position_i *pBegin, out_ Position_i *pEnd);
XC_API BOOL WINAPI XRichEdit_SetSelect(HELE hEle, int iStartRow, int iStartCol, int iEndRow, int iEndCol);
XC_API BOOL WINAPI XRichEdit_SetItemFontEx(HELE hEle, int beginRow, int beginColumn, int endRow, int endColumn, HFONTX hFont);
XC_API BOOL WINAPI XRichEdit_SetItemColorEx(HELE hEle, int beginRow, int beginColumn, int endRow, int endColumn, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XRichEdit_CancelSelect(HELE hEle);
XC_API void WINAPI XRichEdit_SetSelectBkColor(HELE hEle, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XRichEdit_SetPasswordCharacter(HELE hEle, wchar_t  ch);
XC_API BOOL WINAPI XRichEdit_SelectAll(HELE hEle);    //选择所有内容
XC_API BOOL WINAPI XRichEdit_DeleteSelect(HELE hEle); //删除选择内容
XC_API void WINAPI XRichEdit_DeleteAll(HELE hEle);    //删除所有
XC_API BOOL WINAPI XRichEdit_ClipboardCut(HELE hEle);      //剪切
XC_API BOOL WINAPI XRichEdit_ClipboardCopy(HELE hEle);     //复制 选择的内容
XC_API BOOL WINAPI XRichEdit_ClipboardPaste(HELE hEle);    //粘贴 粘贴剪贴板内容
XC_API HELE WINAPI XSBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XSBar_SetRange(HELE hEle, int range);
XC_API int  WINAPI XSBar_GetRange(HELE hEle);
XC_API void  WINAPI XSBar_ShowButton(HELE hEle, BOOL bShow);
XC_API void WINAPI XSBar_SetSliderLength(HELE hEle, int length); //设置滑块长度
XC_API void WINAPI XSBar_SetSliderMinLength(HELE hEle, int minLength); //设置滑块最小长度
XC_API void WINAPI XSBar_SetSliderPadding(HELE hEle, int nPadding);
XC_API BOOL WINAPI XSBar_SetHorizon(HELE hEle, BOOL bHorizon);  //水平显示或垂直
XC_API int  WINAPI XSBar_GetSliderMaxLength(HELE hEle);
XC_API BOOL WINAPI XSBar_ScrollUp(HELE hEle);       //向左滚动
XC_API BOOL WINAPI XSBar_ScrollDown(HELE hEle);     //向右滚动
XC_API BOOL WINAPI XSBar_ScrollTop(HELE hEle);      //滚动到顶部
XC_API BOOL WINAPI XSBar_ScrollBottom(HELE hEle);   //滚动到底部
XC_API BOOL WINAPI XSBar_ScrollPos(HELE hEle, int pos); //滚动到指定点
XC_API HELE WINAPI XSBar_GetButtonUp(HELE hEle);
XC_API HELE WINAPI XSBar_GetButtonDown(HELE hEle);
XC_API HELE WINAPI XSBar_GetButtonSlider(HELE hEle);
XC_API HELE WINAPI XSView_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API BOOL WINAPI XSView_SetTotalSize(HELE hEle, int cx, int cy); //设置视图内容总大小(不包含边框间隔)
XC_API void WINAPI XSView_GetTotalSize(HELE hEle, out_ SIZE *pSize);  //获取设置的内容大小
XC_API BOOL WINAPI XSView_SetLineSize(HELE hEle, int nWidth, int nHeight);
XC_API void WINAPI XSView_GetLineSize(HELE hEle, out_ SIZE *pSize);
XC_API void WINAPI XSView_SetScrollBarSize(HELE hEle, int size); //设置滚动条大小
XC_API int  WINAPI XSView_GetViewPosH(HELE hEle);   //获取视口原点X坐标
XC_API int  WINAPI XSView_GetViewPosV(HELE hEle);   //获取视口原点Y坐标
XC_API int  WINAPI XSView_GetViewWidth(HELE hEle);
XC_API int  WINAPI XSView_GetViewHeight(HELE hEle);
XC_API void WINAPI XSView_GetViewRect(HELE hEle, out_ RECT *pRect); //获取视口坐标(不含边框间隔),left为视口左间隔大小,top为视口上间隔大小,非(0,0).
XC_API HELE WINAPI XSView_GetScrollBarH(HELE hEle); //获取水平滚动条
XC_API HELE WINAPI XSView_GetScrollBarV(HELE hEle); //获取垂直滚动条
XC_API void WINAPI XSView_SetBorderSize(HELE hEle, int left, int top, int right, int bottom);
XC_API void WINAPI XSView_GetBorderSize(HELE hEle, out_ BorderSize_i* pBorder);
XC_API BOOL WINAPI XSView_ScrollPosH(HELE hEle, int pos); //滚动到指定点
XC_API BOOL WINAPI XSView_ScrollPosV(HELE hEle, int pos); //滚动到指定点
XC_API BOOL WINAPI XSView_ScrollPosXH(HELE hEle, int posX); //滚动到指定坐标
XC_API BOOL WINAPI XSView_ScrollPosYV(HELE hEle, int posY); //滚动到指定坐标
XC_API void WINAPI XSView_ShowSBarH(HELE hEle, BOOL bShow); //启用水平滚动条
XC_API void WINAPI XSView_ShowSBarV(HELE hEle, BOOL bShow); //启用垂直滚动条
XC_API void WINAPI XSView_EnableAutoShowScrollBar(HELE hEle, BOOL bEnable);
XC_API BOOL WINAPI XSView_ScrollLeftLine(HELE hEle);    //向左滚动
XC_API BOOL WINAPI XSView_ScrollRightLine(HELE hEle);   //向右滚动
XC_API BOOL WINAPI XSView_ScrollTopLine(HELE hEle);     //向上滚动
XC_API BOOL WINAPI XSView_ScrollBottomLine(HELE hEle);    //向下滚动
XC_API BOOL WINAPI XSView_ScrollLeft(HELE hEle);    //水平滚动到左侧
XC_API BOOL WINAPI XSView_ScrollRight(HELE hEle);   //水平滚动到右侧
XC_API BOOL WINAPI XSView_ScrollTop(HELE hEle);     //滚动到顶部
XC_API BOOL WINAPI XSView_ScrollBottom(HELE hEle);  //滚动到底部
XC_API HELE WINAPI XShape_GetParentEle(HXCGUI hShape);
XC_API HWINDOW WINAPI XShape_GetHWINDOW(HXCGUI hShape);
XC_API HXCGUI  WINAPI XShape_GetParent(HXCGUI hShape);
XC_API void  WINAPI XShape_RemoveShape(HXCGUI hShape);
XC_API void WINAPI XShape_SetID(HXCGUI hShape, int nID);
XC_API int  WINAPI XShape_GetID(HXCGUI hShape);
XC_API void WINAPI XShape_SetUID(HXCGUI hShape, int nUID);
XC_API int  WINAPI XShape_GetUID(HXCGUI hShape);
XC_API void WINAPI XShape_SetName(HXCGUI hShape, const wchar_t* pName);
XC_API const wchar_t* WINAPI XShape_GetName(HXCGUI hShape);
XC_API int  WINAPI XShape_GetZOrder(HXCGUI hShape);
XC_API void WINAPI XShape_Redraw(HXCGUI hShape);
XC_API int  WINAPI XShape_GetWidth(HXCGUI hShape);
XC_API int  WINAPI XShape_GetHeight(HXCGUI hShape);
XC_API void WINAPI XShape_Move(HXCGUI hShape, int x, int y);
XC_API void WINAPI XShape_GetRect(HXCGUI hShape, out_ RECT* pRect);
XC_API void WINAPI XShape_SetRect(HXCGUI hShape, in_  RECT* pRect);
XC_API void WINAPI XShape_GetWndClientRect(HXCGUI hShape, out_ RECT *pRect);
XC_API void WINAPI XShape_GetContentSize(HXCGUI hShape, out_ SIZE* pSize);//获取内容大小
XC_API void WINAPI XShape_ShowLayout(HXCGUI hShape, BOOL bShow);
XC_API void WINAPI XShape_AdjustLayout(HXCGUI hShape);
XC_API void WINAPI XShape_Destroy(HXCGUI hShape);
XC_API HXCGUI WINAPI XShapeText_Create(int x, int y, int cx, int cy, const wchar_t *pName, HXCGUI hParent = NULL);
XC_API void  WINAPI XShapeText_SetText(HXCGUI hTextBlock, const wchar_t *pName);
XC_API const wchar_t*  WINAPI XShapeText_GetText(HXCGUI hTextBlock);
XC_API int   WINAPI XShapeText_GetTextLength(HXCGUI hTextBlock);
XC_API void  WINAPI XShapeText_SetFont(HXCGUI hTextBlock, HFONTX hFontx);
XC_API HFONTX WINAPI XShapeText_GetFont(HXCGUI hTextBlock);
XC_API void WINAPI XShapeText_SetTextColor(HXCGUI hTextBlock, COLORREF color, BYTE alpha);
XC_API COLORREF WINAPI XShapeText_GetTextColor(HXCGUI hTextBlock);
XC_API void WINAPI XShapeText_SetTextAlign(HXCGUI hTextBlock, int align);
XC_API void WINAPI XShapeText_SetOffset(HXCGUI hTextBlock, int x, int y);
XC_API void WINAPI XShapeText_SetLayoutWidth(HXCGUI hTextBlock, layout_size_type_ nType, int width);
XC_API void WINAPI XShapeText_SetLayoutHeight(HXCGUI hTextBlock, layout_size_type_ nType, int height);
XC_API void WINAPI XShapeText_GetLayoutWidth(HXCGUI hTextBlock, out_ layout_size_type_ *pType, out_ int *pWidth);
XC_API void WINAPI XShapeText_GetLayoutHeight(HXCGUI hTextBlock, out_ layout_size_type_ *pType, out_ int *pHeight);
XC_API void WINAPI XShapeText_SetLayoutFloat(HXCGUI hTextBlock, layout_float_type_ nFloat_);
XC_API void WINAPI XShapeText_SetLayoutWrap(HXCGUI hTextBlock, BOOL bWrap);
XC_API void WINAPI XShapeText_EnableCSS(HXCGUI hTextBlock, BOOL bEnable);
XC_API void WINAPI XShapeText_SetCssName(HXCGUI hTextBlock, const wchar_t* pName);
XC_API const wchar_t* WINAPI XShapeText_GetCssName(HXCGUI hTextBlock);
XC_API HXCGUI WINAPI XShapePic_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void   WINAPI XShapePic_SetImage(HXCGUI hShape, HIMAGE hImage);
XC_API HIMAGE WINAPI XShapePic_GetImage(HXCGUI hShape);
XC_API void WINAPI XShapePic_SetLayoutWidth(HXCGUI hShape, layout_size_type_ nType, int width);
XC_API void WINAPI XShapePic_SetLayoutHeight(HXCGUI hShape, layout_size_type_ nType, int height);
XC_API void WINAPI XShapePic_GetLayoutWidth(HXCGUI hShape, out_ layout_size_type_ *pType, out_ int *pWidth);
XC_API void WINAPI XShapePic_GetLayoutHeight(HXCGUI hShape, out_ layout_size_type_ *pType, out_ int *pHeight);
XC_API HXCGUI WINAPI XShapeGif_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void   WINAPI XShapeGif_SetImage(HXCGUI hShape, HIMAGE hImage);
XC_API HIMAGE WINAPI XShapeGif_GetImage(HXCGUI hShape);
XC_API void WINAPI XShapeGif_SetLayoutWidth(HXCGUI hShape, layout_size_type_ nType, int width);
XC_API void WINAPI XShapeGif_SetLayoutHeight(HXCGUI hShape, layout_size_type_ nType, int height);
XC_API void WINAPI XShapeGif_GetLayoutWidth(HXCGUI hShape, out_ layout_size_type_ *pType, out_ int *pWidth);
XC_API void WINAPI XShapeGif_GetLayoutHeight(HXCGUI hShape, out_ layout_size_type_ *pType, out_ int *pHeight);
XC_API HXCGUI WINAPI XShapeRect_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XShapeRect_SetBorderColor(HXCGUI hShape, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XShapeRect_SetFillColor(HXCGUI hShape, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XShapeRect_SetRoundAngle(HXCGUI hShape, int nWidth, int nHeight);
XC_API void WINAPI XShapeRect_GetRoundAngle(HXCGUI hShape, out_ int *pWidth, out_ int *pHeight);
XC_API void WINAPI XShapeRect_EnableBorder(HXCGUI hShape, BOOL bEnable);
XC_API void WINAPI XShapeRect_EnableFill(HXCGUI hShape, BOOL bEnable);
XC_API void WINAPI XShapeRect_EnableRoundAngle(HXCGUI hShape, BOOL bEnable);
XC_API HXCGUI WINAPI XShapeEllipse_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XShapeEllipse_SetBorderColor(HXCGUI hShape, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XShapeEllipse_SetFillColor(HXCGUI hShape, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XShapeEllipse_EnableBorder(HXCGUI hShape, BOOL bEnable);
XC_API void WINAPI XShapeEllipse_EnableFill(HXCGUI hShape, BOOL bEnable);
XC_API HXCGUI WINAPI XShapeGroupBox_Create(int x, int y, int cx, int cy, const wchar_t* pName, HXCGUI hParent = NULL);
XC_API void WINAPI XShapeGroupBox_SetBorderColor(HXCGUI hShape, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XShapeGroupBox_SetTextColor(HXCGUI hShape, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XShapeGroupBox_SetFontX(HXCGUI hShape, HFONTX hFontX);
XC_API void WINAPI XShapeGroupBox_SetTextOffset(HXCGUI hShape, int offsetX, int offsetY);
XC_API void WINAPI XShapeGroupBox_SetRoundAngle(HXCGUI hShape, int nWidth, int nHeight);
XC_API void WINAPI XShapeGroupBox_SetText(HXCGUI hShape, const wchar_t* pText);
XC_API void WINAPI XShapeGroupBox_GetTextOffset(HXCGUI hShape, out_ int *pOffsetX, out_ int *pOffsetY);
XC_API void WINAPI XShapeGroupBox_GetRoundAngle(HXCGUI hShape, out_ int *pWidth, out_ int *pHeight);
XC_API void WINAPI XShapeGroupBox_EnableRoundAngle(HXCGUI hShape, BOOL bEnable);
XC_API HXCGUI WINAPI XShapeLine_Create(int x1, int y1, int x2, int y2, HXCGUI hParent = NULL);
XC_API void WINAPI XShapeLine_SetPosition(HXCGUI hShape, int x1, int y1, int x2, int y2);
XC_API void WINAPI XShapeLine_SetColor(HXCGUI hShape, COLORREF color, BYTE alpha);
XC_API HELE WINAPI XSliderBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XSliderBar_SetRange(HELE hEle, int range);
XC_API int  WINAPI XSliderBar_GetRange(HELE hEle);
XC_API void WINAPI XSliderBar_SetButtonWidth(HELE hEle, int width);
XC_API void WINAPI XSliderBar_SetButtonHeight(HELE hEle, int height);
XC_API void WINAPI XSliderBar_SetSpaceTwo(HELE hEle, int leftSize, int rightSize);
XC_API void WINAPI XSliderBar_SetPos(HELE hEle, int pos);
XC_API int  WINAPI XSliderBar_GetPos(HELE hEle);
XC_API HELE WINAPI XSliderBar_GetButton(HELE hEle);
XC_API void WINAPI XSliderBar_SetHorizon(HELE hEle, BOOL bHorizon);
XC_API void WINAPI XSliderBar_SetImageLoad(HELE hEle, HIMAGE hImage);
XC_API const char*    WINAPI XC_itoa(int nValue);
XC_API const wchar_t* WINAPI XC_itow(int nValue);
XC_API const char*    WINAPI XC_ftoa(float fValue);
XC_API const wchar_t* WINAPI XC_ftow(float fValue);
XC_API const wchar_t* WINAPI XC_atow(const char* pValue);
XC_API const char*    WINAPI XC_wtoa(const wchar_t* pValue);
XC_API const wchar_t* WINAPI XC_utf8tow(const char* pUtf8);
XC_API const wchar_t* WINAPI XC_utf8towEx(const char* pUtf8, int length);
XC_API const char*    WINAPI XC_utf8toa(const char* pUtf8);
XC_API const char*    WINAPI XC_atoutf8(const char* pValue);
XC_API const char*    WINAPI XC_wtoutf8(const wchar_t* pValue);
XC_API const char*    WINAPI XC_wtoutf8Ex(const wchar_t* pValue, int length);
XC_API HELE WINAPI XTabBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API int  WINAPI XTabBar_AddLabel(HELE hEle, const wchar_t *pName); //添加一个标签
XC_API int  WINAPI XTabBar_InsertLabel(HELE hEle, int index, const wchar_t *pName);
XC_API BOOL WINAPI XTabBar_DeleteLabel(HELE hEle, int index);  //删除
XC_API void WINAPI XTabBar_DeleteLabelAll(HELE hEle);  //删除所有TAB
XC_API HELE WINAPI XTabBar_GetLabel(HELE hEle, int index);//获取标签按钮Button
XC_API HELE WINAPI XTabBar_GetLabelClose(HELE hEle, int index);
XC_API HELE WINAPI XTabBar_GetButtonLeft(HELE hEle);
XC_API HELE WINAPI XTabBar_GetButtonRight(HELE hEle);
XC_API int  WINAPI XTabBar_GetSelect(HELE hEle);  //获取选择的标签
XC_API int  WINAPI XTabBar_GetLabelSpacing(HELE hEle); //获取标签间距, 0没有间距
XC_API int  WINAPI XTabBar_GetLabelCount(HELE hEle); //获取标签项数量
XC_API int  WINAPI XTabBar_GetindexByEle(HELE hEle, HELE hLabel);
XC_API void WINAPI XTabBar_SetLabelSpacing(HELE hEle, int spacing);//设置标签间距, 0没有间距
XC_API void WINAPI XTabBar_SetPadding(HELE hEle, int left, int top, int right, int bottom);
XC_API void WINAPI XTabBar_SetSelect(HELE hEle, int index);   //设置选择标签
XC_API void WINAPI XTabBar_SetUp(HELE hEle);    //左滚动
XC_API void WINAPI XTabBar_SetDown(HELE hEle);  //右滚动
XC_API void WINAPI XTabBar_EnableTile(HELE hEle, BOOL bTile);  //平铺标签,每个标签显示相同大小
XC_API void WINAPI XTabBar_EnableClose(HELE hEle, BOOL bEnable);
XC_API void WINAPI XTabBar_SetCloseSize(HELE hEle, SIZE *pSize);
XC_API void WINAPI XTabBar_SetTurnButtonSize(HELE hEle, SIZE *pSize);
XC_API void WINAPI XTabBar_SetLabelWidth(HELE hEle, int index, int nWidth);
XC_API BOOL WINAPI XTabBar_ShowLabel(HELE hEle, int index, BOOL bShow); //显示或隐藏指定项
XC_API HXCGUI WINAPI XTable_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XTable_Reset(HXCGUI hShape, int nRow, int nCol);
XC_API void WINAPI XTable_ComboRow(HXCGUI hShape, int iRow, int iCol, int count);
XC_API void WINAPI XTable_ComboCol(HXCGUI hShape, int iRow, int iCol, int count);
XC_API void WINAPI XTable_SetColWidth(HXCGUI hShape, int iCol, int width);
XC_API void WINAPI XTable_SetRowHeight(HXCGUI hShape, int iRow, int height);
XC_API void WINAPI XTable_SetBorderColor(HXCGUI hShape, COLORREF color);
XC_API void WINAPI XTable_SetTextColor(HXCGUI hShape, COLORREF color);
XC_API void WINAPI XTable_SetFont(HXCGUI hShape, HFONTX hFont);
XC_API void WINAPI XTable_SetItemPadding(HXCGUI hShape, int leftSize, int topSize, int rightSize, int bottomSize);
XC_API void WINAPI XTable_SetItemText(HXCGUI hShape, int iRow, int iCol, const wchar_t*  pText);
XC_API void WINAPI XTable_SetItemFont(HXCGUI hShape, int iRow, int iCol, HFONTX hFont);
XC_API void WINAPI XTable_SetItemTextAlign(HXCGUI hShape, int iRow, int iCol, int nAlign);
XC_API void WINAPI XTable_SetItemTextColor(HXCGUI hShape, int iRow, int iCol, COLORREF color, BOOL bColor);
XC_API void WINAPI XTable_SetItemBkColor(HXCGUI hShape, int iRow, int iCol, COLORREF color, BOOL bColor);
XC_API void WINAPI XTable_SetItemLine(HXCGUI hShape, int iRow1, int iCol1, int iRow2, int iCol2, int nFlag, COLORREF color);
XC_API void WINAPI XTable_SetItemFlag(HXCGUI hShape, int iRow, int iCol, int flag);
XC_API BOOL WINAPI XTable_GetItemRect(HXCGUI hShape, int iRow, int iCol, out_ RECT *pRect);
XC_API HELE WINAPI XTextLink_Create(int x, int y, int cx, int cy, const wchar_t* pName, HXCGUI hParent = NULL);
XC_API void WINAPI XTextLink_EnableUnderlineLeave(HELE hEle, BOOL bEnable);
XC_API void WINAPI XTextLink_EnableUnderlineStay(HELE hEle, BOOL bEnable);
XC_API void WINAPI XTextLink_SetTextColorStay(HELE hEle, COLORREF color, BYTE alpha);
XC_API void WINAPI XTextLink_SetUnderlineColorLeave(HELE hEle, COLORREF color, BYTE alpha);
XC_API void WINAPI XTextLink_SetUnderlineColorStay(HELE hEle, COLORREF color, BYTE alpha);
XC_API HELE WINAPI XToolBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API int WINAPI XToolBar_InsertEle(HELE hEle, HELE hNewEle, int index = -1); //添加元素到工具条, -1插入到末尾
XC_API int WINAPI XToolBar_InsertSeparator(HELE hEle, int index = -1, COLORREF color = RGB(128, 128, 128)); //添加分隔符, -1插入到末尾
XC_API void WINAPI XToolBar_EnableButtonMenu(HELE hEle, BOOL bEnable);  //显示隐藏项菜单按钮
XC_API HELE WINAPI XToolBar_GetEle(HELE hEle, int index);  //获取工具条上元素句柄
XC_API HELE WINAPI XToolBar_GetButtonLeft(HELE hEle);   //获取工具条左滚动按钮Button
XC_API HELE WINAPI XToolBar_GetButtonRight(HELE hEle);  //获取工具条右滚动按钮Button
XC_API HELE WINAPI XToolBar_GetButtonMenu(HELE hEle);   //获取弹出菜单按钮
XC_API void WINAPI XToolBar_SetSpace(HELE hEle, int nSize);
XC_API void WINAPI XToolBar_DeleteEle(HELE hEle, int index); //移除工具条上元素并销毁
XC_API void WINAPI XToolBar_DeleteAllEle(HELE hEle);
XC_API HELE WINAPI XTree_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XTree_EnableDragItem(HELE hEle, BOOL bEnable);
XC_API void WINAPI XTree_EnableConnectLine(HELE hEle, BOOL bEnable, BOOL bSolid);
XC_API void WINAPI XTree_EnableExpand(HELE hEle, BOOL bEnable);
XC_API void WINAPI XTree_SetConnectLineColor(HELE hEle, COLORREF color, BYTE alpha);
XC_API void WINAPI XTree_SetExpandButtonSize(HELE hEle, int nWidth, int nHeight);
XC_API void WINAPI XTree_SetConnectLineLength(HELE hEle, int nLength);
XC_API void WINAPI XTree_SetDragInsertPositionColor(HELE hEle, COLORREF color, BYTE alpha);
XC_API BOOL WINAPI XTree_SetItemTemplateXML(HELE hEle, const wchar_t* pXmlFile);
XC_API BOOL WINAPI XTree_SetItemTemplateXMLSel(HELE hEle, const wchar_t* pXmlFile);
XC_API BOOL WINAPI XTree_SetItemTemplate(HELE hEle, HTEMP hTemp);
XC_API BOOL WINAPI XTree_SetItemTemplateSel(HELE hEle, HTEMP hTemp);
XC_API BOOL WINAPI XTree_SetItemTemplateXMLFromString(HELE hEle, const char* pStringXML);
XC_API BOOL WINAPI XTree_SetItemTemplateXMLSelFromString(HELE hEle, const char* pStringXML);
XC_API void WINAPI XTree_SetDrawItemBkFlags(HELE hEle, int nFlags);
XC_API BOOL WINAPI XTree_SetItemData(HELE hEle, int nID, int nUserData);
XC_API int  WINAPI XTree_GetItemData(HELE hEle, int nID);
XC_API BOOL WINAPI XTree_SetSelectItem(HELE hEle, int nID);
XC_API int  WINAPI XTree_GetSelectItem(HELE hEle);
XC_API void WINAPI XTree_VisibleItem(HELE hEle, int nID);
XC_API BOOL WINAPI XTree_IsExpand(HELE hEle, int nID);
XC_API BOOL WINAPI XTree_ExpandItem(HELE hEle, int nID, BOOL bExpand);
XC_API BOOL WINAPI XTree_ExpandAllChildItem(HELE hEle, int nID, BOOL bExpand);
XC_API int  WINAPI XTree_HitTest(HELE hEle, POINT *pPt);
XC_API int  WINAPI XTree_HitTestOffset(HELE hEle, POINT *pPt);
XC_API int  WINAPI XTree_GetFirstChildItem(HELE hEle, int nID);
XC_API int  WINAPI XTree_GetEndChildItem(HELE hEle, int nID);
XC_API int  WINAPI XTree_GetPrevSiblingItem(HELE hEle, int nID);
XC_API int  WINAPI XTree_GetNextSiblingItem(HELE hEle, int nID);
XC_API int  WINAPI XTree_GetParentItem(HELE hEle, int nID);
XC_API void WINAPI XTree_SetIndentation(HELE hEle, int nWidth);
XC_API int  WINAPI XTree_GetIndentation(HELE hEle);
XC_API void WINAPI XTree_SetItemHeight(HELE hEle, int nID, int nHeight, int nSelHeight);
XC_API void WINAPI XTree_GetItemHeight(HELE hEle, int nID, out_ int *pHeight, out_ int *pSelHeight);
XC_API void WINAPI XTree_SetRowSpace(HELE hEle, int nSpace);
XC_API int  WINAPI XTree_GetRowSpace(HELE hEle);
XC_API BOOL WINAPI XTree_MoveItem(HELE hEle, int nMoveItem, int nDestItem, int nType);
XC_API void WINAPI XTree_AddItemBkBorder(HELE hEle, tree_item_state_ nState, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XTree_AddItemBkFill(HELE hEle, tree_item_state_ nState, COLORREF color, BYTE alpha);
XC_API void WINAPI XTree_AddItemBkImage(HELE hEle, tree_item_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XTree_GetItemBkInfoCount(HELE hEle);
XC_API void WINAPI XTree_ClearItemBkInfo(HELE hEle);
XC_API void WINAPI XTree_SetItemHeightDefault(HELE hEle, int nHeight, int nSelHeight);
XC_API void WINAPI XTree_GetItemHeightDefault(HELE hEle, out_ int *pHeight, out_ int *pSelHeight);
XC_API HXCGUI WINAPI XTree_GetTemplateObject(HELE hEle, int nID, int nTempItemID); //通过模板项ID,获取实例化模板项ID对应的对象.
XC_API int    WINAPI XTree_GetItemIDFromHXCGUI(HELE hEle, HXCGUI hXCGUI);
XC_API HXCGUI WINAPI XTree_CreateAdapter(HELE hEle);
XC_API void WINAPI XTree_BindAdapter(HELE hEle, HXCGUI hAdapter);
XC_API HXCGUI WINAPI XTree_GetAdapter(HELE hEle);
XC_API void WINAPI XTree_RefreshData(HELE hEle);
XC_API void WINAPI XTree_RefreshItem(HELE hEle, int nID);
XC_API int WINAPI XTree_InsertItemText(HELE hEle, const wchar_t* pValue, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST);
XC_API int WINAPI XTree_InsertItemTextEx(HELE hEle, const wchar_t* pName, const wchar_t* pValue, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST);
XC_API int WINAPI XTree_InsertItemImage(HELE hEle, HIMAGE hImage, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST);
XC_API int WINAPI XTree_InsertItemImageEx(HELE hEle, const wchar_t* pName, HIMAGE hImage, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST);
XC_API int WINAPI XTree_GetCount(HELE hEle);
XC_API int WINAPI XTree_GetCountColumn(HELE hEle);
XC_API BOOL WINAPI XTree_SetItemText(HELE hEle, int nID, int iColumn, const wchar_t* pValue);
XC_API BOOL WINAPI XTree_SetItemTextEx(HELE hEle, int nID, const wchar_t* pName, const wchar_t* pValue);
XC_API BOOL WINAPI XTree_SetItemImage(HELE hEle, int nID, int iColumn, HIMAGE hImage);
XC_API BOOL WINAPI XTree_SetItemImageEx(HELE hEle, int nID, const wchar_t* pName, HIMAGE hImage);
XC_API const wchar_t* WINAPI XTree_GetItemText(HELE hEle, int nID, int iColumn);
XC_API const wchar_t* WINAPI XTree_GetItemTextEx(HELE hEle, int nID, const wchar_t* pName);
XC_API HIMAGE WINAPI XTree_GetItemImage(HELE hEle, int nID, int iColumn);
XC_API HIMAGE WINAPI XTree_GetItemImageEx(HELE hEle, int nID, const wchar_t* pName);
XC_API BOOL WINAPI XTree_DeleteItem(HELE hEle, int nID);
XC_API void WINAPI XTree_DeleteItemAll(HELE hEle);
XC_API void WINAPI XTree_DeleteColumnAll(HELE hEle);
XC_API BOOL WINAPI _XWnd_RegEvent(HWINDOW hWindow, UINT nEvent, xc_event* pEvent);
XC_API BOOL WINAPI _XWnd_RemoveEvent(HWINDOW hWindow, UINT nEvent, xc_event* pEvent);
XC_API BOOL WINAPI XWnd_RegEventC(HWINDOW hWindow, int nEvent, void *pFun);
XC_API BOOL WINAPI XWnd_RegEventC1(HWINDOW hWindow, int nEvent, void *pFun);
XC_API BOOL WINAPI XWnd_RemoveEventC(HWINDOW hWindow, int nEvent, void *pFun);
XC_API HWINDOW WINAPI XWnd_Create(int x, int y, int cx, int cy, const wchar_t *pTitle, HWND hWndParent = NULL, int XCStyle = xc_window_style_default);
XC_API HWINDOW WINAPI XWnd_CreateEx(DWORD dwExStyle, const wchar_t* lpClassName, const wchar_t* lpWindowName, DWORD dwStyle, int x, int y, int cx, int cy, HWND hWndParent = NULL, int XCStyle = xc_window_style_default);
XC_API BOOL WINAPI XWnd_AddChild(HWINDOW hWindow, HXCGUI hChild);
XC_API BOOL WINAPI XWnd_InsertChild(HWINDOW hWindow, HXCGUI hChild, int index);
XC_API HWND WINAPI XWnd_GetHWND(HWINDOW hWindow);
XC_API void WINAPI XWnd_EnableDragBorder(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_EnableDragWindow(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_EnableDragCaption(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_EnableDrawBk(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_EnableAutoFocus(HWINDOW hWindow, BOOL bEnable); //当鼠标左键按下是否获得焦点
XC_API void WINAPI XWnd_EnableMaxWindow(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_EnableLayout(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_ShowLayoutFrame(HWINDOW hWindow, BOOL bEnable);
XC_API BOOL WINAPI XWnd_IsEnableLayout(HWINDOW hWindow);
XC_API void WINAPI XWnd_RedrawWnd(HWINDOW hWindow, BOOL bImmediate = FALSE);
XC_API void WINAPI XWnd_RedrawWndRect(HWINDOW hWindow, RECT *pRect, BOOL bImmediate = FALSE); //重绘窗口指定区域
XC_API void WINAPI XWnd_SetFocusEle(HWINDOW hWindow, HELE hFocusEle);
XC_API HELE WINAPI XWnd_GetFocusEle(HWINDOW hWindow);
XC_API HELE WINAPI XWnd_GetStayHELE(HWINDOW hWindow);  //获取当前鼠标所停留元素
XC_API void WINAPI XWnd_DrawWindow(HWINDOW hWindow, HDRAW hDraw);
XC_API void WINAPI XWnd_Center(HWINDOW hWindow);
XC_API void WINAPI XWnd_CenterEx(HWINDOW hWindow, int width, int height);
XC_API void WINAPI XWnd_SetCursor(HWINDOW hWindow, HCURSOR hCursor);
XC_API HCURSOR WINAPI XWnd_GetCursor(HWINDOW hWindow);
XC_API HCURSOR WINAPI XWnd_SetCursorSys(HWINDOW hWindow, HCURSOR hCursor);
XC_API void WINAPI XWnd_SetFont(HWINDOW hWindow, HFONTX hFontx);
XC_API void WINAPI XWnd_SetTextColor(HWINDOW hWindow, COLORREF color, BYTE alpha);
XC_API COLORREF WINAPI XWnd_GetTextColor(HWINDOW hWindow);
XC_API COLORREF WINAPI XWnd_GetTextColorEx(HWINDOW hWindow);
XC_API void WINAPI XWnd_SetID(HWINDOW hWindow, int nID);
XC_API int  WINAPI XWnd_GetID(HWINDOW hWindow);
XC_API void  WINAPI XWnd_SetName(HWINDOW hWindow, const wchar_t* pName);
XC_API const wchar_t*  WINAPI XWnd_GetName(HWINDOW hWindow);
XC_API void WINAPI XWnd_SetCaptureEle(HWINDOW hWindow, HELE hEle);
XC_API HELE WINAPI XWnd_GetCaptureEle(HWINDOW hWindow);
XC_API BOOL WINAPI XWnd_BindLayoutEle(HWINDOW hWindow, window_position_ nPosition, HELE hEle);
XC_API HELE WINAPI XWnd_GetLayoutEle(HWINDOW hWindow, window_position_ nPosition);
XC_API void WINAPI XWnd_SetLayoutSize(HWINDOW hWindow, int left, int top, int right, int bottom);
XC_API void WINAPI XWnd_GetLayoutSize(HWINDOW hWindow, out_ BorderSize_i  *pBorderSize);
XC_API void WINAPI XWnd_SetLayoutHorizon(HWINDOW hWindow, BOOL bHorizon);
XC_API void WINAPI XWnd_SetLayoutAlignH(HWINDOW hWindow, layout_align_ nAlign);
XC_API void WINAPI XWnd_SetLayoutAlignV(HWINDOW hWindow, layout_align_ nAlign);
XC_API void WINAPI XWnd_SetLayoutSpace(HWINDOW hWindow, int nSpace);
XC_API void WINAPI XWnd_SetLayoutPadding(HWINDOW hWindow, int left, int top, int right, int bottom);
XC_API void WINAPI XWnd_SetDragBorderSize(HWINDOW hWindow, int left, int top, int right, int bottom); //设置拖动边框大小
XC_API void WINAPI XWnd_GetDragBorderSize(HWINDOW hWindow, out_ BorderSize_i* pSize);
XC_API void WINAPI XWnd_SetMinimumSize(HWINDOW hWindow, int width, int height);
XC_API HELE WINAPI XWnd_HitChildEle(HWINDOW hWindow, POINT *pPt);
XC_API int  WINAPI XWnd_GetChildCount(HWINDOW hWindow);
XC_API HXCGUI WINAPI XWnd_GetChildByIndex(HWINDOW hWindow, int index);
XC_API HXCGUI WINAPI XWnd_GetChildByID(HWINDOW hWindow, int nID);
XC_API HXCGUI WINAPI XWnd_GetChild(HWINDOW hWindow, int nID);
XC_API void WINAPI XWnd_GetDrawRect(HWINDOW hWindow, RECT *pRcPaint);
XC_API BOOL WINAPI XWnd_ShowWindow(HWINDOW hWindow, int nCmdShow);
XC_API void WINAPI XWnd_AdjustLayout(HWINDOW hWindow);
XC_API void WINAPI XWnd_AdjustLayoutEx(HWINDOW hWindow, int nFlags = xc_adjustLayout_self);
XC_API void WINAPI XWnd_CloseWindow(HWINDOW hWindow);
XC_API void WINAPI XWnd_CreateCaret(HWINDOW hWindow, HELE hEle, int x, int y, int width, int height);//创建插入符
XC_API void WINAPI XWnd_SetCaretSize(HWINDOW hWindow, int width, int height); //设置插入符大小
XC_API void WINAPI XWnd_SetCaretPos(HWINDOW hWindow, int x, int y); //设置插入符位置
XC_API void WINAPI XWnd_SetCaretPosEx(HWINDOW hWindow, int x, int y, int width, int height); //设置插入符位置
XC_API void WINAPI XWnd_SetCaretColor(HWINDOW hWindow, COLORREF color); //设置插入符颜色
XC_API void WINAPI XWnd_ShowCaret(HWINDOW hWindow, BOOL bShow);  //显示插入符
XC_API void WINAPI XWnd_DestroyCaret(HWINDOW hWindow);    //销毁插入符
XC_API HELE WINAPI XWnd_GetCaretHELE(HWINDOW hWindow);
XC_API BOOL WINAPI XWnd_GetClientRect(HWINDOW hWindow, out_ RECT *pRect); //获取客户区坐标
XC_API void WINAPI XWnd_GetBodyRect(HWINDOW hWindow, out_ RECT *pRect);  //获取窗口body坐标
XC_API void WINAPI XWnd_Move(HWINDOW hWindow, int x, int y);
XC_API UINT WINAPI XWnd_SetTimer(HWINDOW hWindow, UINT nIDEvent, UINT uElapse); //设置定时器
XC_API BOOL WINAPI XWnd_KillTimer(HWINDOW hWindow, UINT nIDEvent);
XC_API BOOL WINAPI XWnd_SetXCTimer(HWINDOW hWindow, UINT nIDEvent, UINT uElapse); //设置定时器
XC_API BOOL WINAPI XWnd_KillXCTimer(HWINDOW hWindow, UINT nIDEvent);
XC_API HBKM WINAPI XWnd_GetBkManager(HWINDOW hWindow);
XC_API HBKM WINAPI XWnd_GetBkManagerEx(HWINDOW hWindow);
XC_API void WINAPI XWnd_SetTransparentType(HWINDOW hWindow, window_transparent_ nType);  //设置透明窗口
XC_API void WINAPI XWnd_SetTransparentAlpha(HWINDOW hWindow, BYTE alpha); //设置窗口透明度
XC_API void WINAPI XWnd_SetTransparentColor(HWINDOW hWindow, COLORREF color); //设置窗口透明色
XC_API void WINAPI XWnd_SetShadowInfo(HWINDOW hWindow, int nSize, int nDepth, int nAngeleSize, BOOL bRightAngle, COLORREF color);
XC_API window_transparent_ WINAPI XWnd_GetTransparentType(HWINDOW hWindow);
XC_API void WINAPI XWnd_GetShadowInfo(HWINDOW hWindow, out_ int *pnSize, out_ int *pnDepth, out_ int *pnAngeleSize, out_ BOOL *pbRightAngle, out_ COLORREF *pColor);
XC_API void WINAPI   XWnd_EnableCSS(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI   XWnd_SetCssName(HWINDOW hWindow, const wchar_t *pName);
XC_API const wchar_t* WINAPI XWnd_GetCssName(HWINDOW hWindow);

XC_API void WINAPI XEdit_InsertTextUser(HELE hEle, const wchar_t* pString);
XC_API void WINAPI XEdit_SetTabSpace(HELE hEle, int  nSpace);

XC_API void WINAPI XEle_SetBkMagager(HELE hEle, HBKM hBkInfoM);
XC_API void WINAPI XWnd_SetBkMagager(HWINDOW hWindow, HBKM hBkInfoM);

XC_API void WINAPI XBkM_EnableAutoDestroy(HBKM hBkInfoM, BOOL bEnable);
XC_API void WINAPI XBkM_AddRef(HBKM hBkInfoM);
XC_API void WINAPI XBkM_Release(HBKM hBkInfoM);
XC_API int   WINAPI XBkM_GetRefCount(HBKM hBkInfoM);

typedef void (CALLBACK *user_clallback)(void *args);
XC_API BOOL WINAPI XJS_InitJS();
XC_API void WINAPI XJS_ExitJS();
XC_API BOOL WINAPI XJS_RunJS(const wchar_t* pJsFile);
XC_API BOOL WINAPI XJS_RunJsString(const wchar_t* pString);
XC_API BOOL WINAPI XJS_RunJsStringUtf8(const char* pString);
XC_API void WINAPI XJS_EnableDebugInfo(BOOL bEnable);

XC_API void WINAPI XJS_Callback_Reg(const wchar_t *pFunName, user_clallback fun);
XC_API int  WINAPI XJS_Callback_GetArgsCount(void *args); //获取回调参数数量
XC_API BOOL WINAPI XJS_Callback_IsNumber(void *args, int index);//获取参数类型
XC_API BOOL WINAPI XJS_Callback_IsString(void *args, int index);
XC_API BOOL WINAPI XJS_Callback_IsBool(void *args, int index);
XC_API BOOL WINAPI XJS_Callback_IsFunction(void *args, int index);
XC_API BOOL WINAPI XJS_Callback_IsObject(void *args, int index);
XC_API void WINAPI XJS_Callback_SetReturnValueNumber(void *args, int nValue);
XC_API void WINAPI XJS_Callback_SetReturnValueString(void *args, const wchar_t* nValue);

XC_API int  WINAPI XJS_Callback_GetNumber(void *args, int index);
XC_API BOOL WINAPI XJS_Callback_GetBool(void *args, int index);
XC_API const wchar_t*  WINAPI XJS_Callback_GetString(void *args, int index);

XC_API void WINAPI XJS_FreeString(const wchar_t* pString);
