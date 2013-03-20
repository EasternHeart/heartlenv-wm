/* automatically generated from xfwm4-workspace-dialog.glade */
#ifdef __SUNPRO_C
#pragma align 4 (workspace_dialog_ui)
#endif
#ifdef __GNUC__
static const char workspace_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char workspace_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\"?><interface><object class=\"GtkAdjustment\" id=\""
  "adjustment1\"><property name=\"lower\">1</property><property name=\"upp"
  "er\">100</property><property name=\"step_increment\">1</property><prope"
  "rty name=\"page_increment\">10</property></object><object class=\"GtkAd"
  "justment\" id=\"adjustment2\"><property name=\"lower\">0</property><pro"
  "perty name=\"upper\">100</property><property name=\"step_increment\">1<"
  "/property><property name=\"page_increment\">10</property></object><obje"
  "ct class=\"GtkAdjustment\" id=\"adjustment3\"><property name=\"lower\">"
  "0</property><property name=\"upper\">100</property><property name=\"ste"
  "p_increment\">1</property><property name=\"page_increment\">10</propert"
  "y></object><object class=\"GtkAdjustment\" id=\"adjustment4\"><property"
  " name=\"lower\">0</property><property name=\"upper\">100</property><pro"
  "perty name=\"step_increment\">1</property><property name=\"page_increme"
  "nt\">10</property></object><object class=\"GtkAdjustment\" id=\"adjustm"
  "ent5\"><property name=\"lower\">0</property><property name=\"upper\">10"
  "0</property><property name=\"step_increment\">1</property><property nam"
  "e=\"page_increment\">10</property></object><object class=\"XfceTitledDi"
  "alog\" id=\"main-dialog\"><property name=\"title\" translatable=\"yes\""
  ">Workspaces</property><property name=\"window_position\">center-on-pare"
  "nt</property><property name=\"default_width\">400</property><property n"
  "ame=\"default_height\">400</property><property name=\"icon_name\">xfce4"
  "-workspaces</property><property name=\"type_hint\">dialog</property><pr"
  "operty name=\"has_separator\">False</property><property name=\"subtitle"
  "\" translatable=\"yes\">Set number and names of workspaces</property><c"
  "hild internal-child=\"vbox\"><object class=\"GtkVBox\" id=\"main-vbox\""
  "><property name=\"visible\">True</property><property name=\"orientation"
  "\">vertical</property><property name=\"spacing\">2</property><child><ob"
  "ject class=\"GtkHBox\" id=\"plug-child\"><property name=\"visible\">Tru"
  "e</property><property name=\"homogeneous\">True</property><child><objec"
  "t class=\"GtkFrame\" id=\"frame1\"><property name=\"visible\">True</pro"
  "perty><property name=\"label_xalign\">0</property><property name=\"shad"
  "ow_type\">none</property><child><object class=\"GtkAlignment\" id=\"ali"
  "gnment1\"><property name=\"visible\">True</property><property name=\"le"
  "ft_padding\">12</property><child><object class=\"GtkVBox\" id=\"workspa"
  "ces\"><property name=\"visible\">True</property><property name=\"border"
  "_width\">6</property><property name=\"orientation\">vertical</property>"
  "<property name=\"spacing\">6</property><child><object class=\"GtkHBox\""
  " id=\"hbox3\"><property name=\"visible\">True</property><property name="
  "\"spacing\">12</property><child><object class=\"GtkLabel\" id=\"label3\""
  "><property name=\"visible\">True</property><property name=\"label\" tra"
  "nslatable=\"yes\">_Number of workspaces:</property><property name=\"use"
  "_underline\">True</property><property name=\"mnemonic_widget\">workspac"
  "e_count_spinbutton</property></object><packing><property name=\"expand\""
  ">False</property><property name=\"fill\">False</property><property name"
  "=\"position\">0</property></packing></child><child><object class=\"GtkS"
  "pinButton\" id=\"workspace_count_spinbutton\"><property name=\"visible\""
  ">True</property><property name=\"can_focus\">True</property><property n"
  "ame=\"editable\">False</property><property name=\"adjustment\">adjustme"
  "nt1</property></object><packing><property name=\"expand\">False</proper"
  "ty><property name=\"fill\">False</property><property name=\"position\">"
  "1</property></packing></child></object><packing><property name=\"expand"
  "\">False</property><property name=\"fill\">False</property><property na"
  "me=\"position\">0</property></packing></child><child><object class=\"Gt"
  "kScrolledWindow\" id=\"scrolledwindow1\"><property name=\"visible\">Tru"
  "e</property><property name=\"can_focus\">True</property><property name="
  "\"hscrollbar_policy\">never</property><property name=\"vscrollbar_polic"
  "y\">automatic</property><property name=\"shadow_type\">etched-in</prope"
  "rty><child><object class=\"GtkTreeView\" id=\"treeview_ws_names\"><prop"
  "erty name=\"visible\">True</property><property name=\"can_focus\">True<"
  "/property><property name=\"rules_hint\">True</property></object></child"
  "></object><packing><property name=\"position\">1</property></packing></"
  "child></object></child></object></child><child type=\"label\"><object c"
  "lass=\"GtkLabel\" id=\"label1\"><property name=\"visible\">True</proper"
  "ty><property name=\"label\" translatable=\"yes\">&lt;b&gt;Workspaces&lt"
  ";/b&gt;</property><property name=\"use_markup\">True</property></object"
  "></child></object><packing><property name=\"position\">0</property></pa"
  "cking></child><child><object class=\"GtkFrame\" id=\"frame2\"><property"
  " name=\"visible\">True</property><property name=\"label_xalign\">0</pro"
  "perty><property name=\"shadow_type\">none</property><child><object clas"
  "s=\"GtkAlignment\" id=\"alignment2\"><property name=\"visible\">True</p"
  "roperty><property name=\"left_padding\">12</property><child><object cla"
  "ss=\"GtkVBox\" id=\"margins\"><property name=\"visible\">True</property"
  "><property name=\"border_width\">6</property><property name=\"orientati"
  "on\">vertical</property><property name=\"spacing\">6</property><child><"
  "object class=\"GtkLabel\" id=\"label5\"><property name=\"visible\">True"
  "</property><property name=\"label\" translatable=\"yes\">Margins are ar"
  "eas on the edges of the screen where no window will be placed</property"
  "><property name=\"wrap\">True</property></object><packing><property nam"
  "e=\"expand\">False</property><property name=\"fill\">False</property><p"
  "roperty name=\"position\">0</property></packing></child><child><object "
  "class=\"GtkFrame\" id=\"frame3\"><property name=\"visible\">True</prope"
  "rty><property name=\"label_xalign\">0</property><property name=\"label_"
  "yalign\">0</property><child><object class=\"GtkAlignment\" id=\"alignme"
  "nt3\"><property name=\"visible\">True</property><property name=\"xscale"
  "\">0</property><property name=\"yscale\">0</property><property name=\"t"
  "op_padding\">6</property><property name=\"bottom_padding\">6</property>"
  "<property name=\"left_padding\">6</property><property name=\"right_padd"
  "ing\">6</property><child><object class=\"GtkTable\" id=\"table1\"><prop"
  "erty name=\"visible\">True</property><property name=\"n_rows\">3</prope"
  "rty><property name=\"n_columns\">3</property><child><object class=\"Gtk"
  "SpinButton\" id=\"margin_left_spinbutton\"><property name=\"visible\">T"
  "rue</property><property name=\"can_focus\">True</property><property nam"
  "e=\"adjustment\">adjustment2</property></object><packing><property name"
  "=\"top_attach\">1</property><property name=\"bottom_attach\">2</propert"
  "y><property name=\"x_options\"></property><property name=\"y_options\">"
  "</property></packing></child><child><object class=\"GtkSpinButton\" id="
  "\"margin_bottom_spinbutton\"><property name=\"visible\">True</property>"
  "<property name=\"can_focus\">True</property><property name=\"adjustment"
  "\">adjustment3</property></object><packing><property name=\"left_attach"
  "\">1</property><property name=\"right_attach\">2</property><property na"
  "me=\"top_attach\">2</property><property name=\"bottom_attach\">3</prope"
  "rty><property name=\"x_options\"></property><property name=\"y_options\""
  "></property></packing></child><child><object class=\"GtkSpinButton\" id"
  "=\"margin_right_spinbutton\"><property name=\"visible\">True</property>"
  "<property name=\"can_focus\">True</property><property name=\"adjustment"
  "\">adjustment4</property></object><packing><property name=\"left_attach"
  "\">2</property><property name=\"right_attach\">3</property><property na"
  "me=\"top_attach\">1</property><property name=\"bottom_attach\">2</prope"
  "rty><property name=\"x_options\"></property><property name=\"y_options\""
  "></property></packing></child><child><object class=\"GtkImage\" id=\"mo"
  "nitor_icon\"><property name=\"visible\">True</property><property name=\""
  "xpad\">6</property><property name=\"ypad\">6</property><property name=\""
  "stock\">gtk-missing-image</property></object><packing><property name=\""
  "left_attach\">1</property><property name=\"right_attach\">2</property><"
  "property name=\"top_attach\">1</property><property name=\"bottom_attach"
  "\">2</property></packing></child><child><object class=\"GtkSpinButton\""
  " id=\"margin_top_spinbutton\"><property name=\"visible\">True</property"
  "><property name=\"can_focus\">True</property><property name=\"adjustmen"
  "t\">adjustment5</property></object><packing><property name=\"left_attac"
  "h\">1</property><property name=\"right_attach\">2</property><property n"
  "ame=\"x_options\"></property><property name=\"y_options\"></property></"
  "packing></child><child><placeholder/></child><child><placeholder/></chi"
  "ld><child><placeholder/></child><child><placeholder/></child></object><"
  "/child></object></child><child type=\"label_item\"><placeholder/></chil"
  "d></object><packing><property name=\"position\">1</property></packing><"
  "/child></object></child></object></child><child type=\"label\"><object "
  "class=\"GtkLabel\" id=\"label4\"><property name=\"visible\">True</prope"
  "rty><property name=\"label\" translatable=\"yes\">&lt;b&gt;Margins&lt;/"
  "b&gt;</property><property name=\"use_markup\">True</property></object><"
  "/child></object><packing><property name=\"position\">1</property></pack"
  "ing></child></object><packing><property name=\"padding\">6</property><p"
  "roperty name=\"position\">1</property></packing></child><child internal"
  "-child=\"action_area\"><object class=\"GtkHButtonBox\" id=\"dialog-acti"
  "on_area1\"><property name=\"visible\">True</property><child><object cla"
  "ss=\"GtkButton\" id=\"button2\"><property name=\"label\">gtk-help</prop"
  "erty><property name=\"visible\">True</property><property name=\"sensiti"
  "ve\">False</property><property name=\"can_focus\">True</property><prope"
  "rty name=\"receives_default\">True</property><property name=\"use_stock"
  "\">True</property></object><packing><property name=\"expand\">False</pr"
  "operty><property name=\"fill\">False</property><property name=\"positio"
  "n\">0</property></packing></child><child><object class=\"GtkButton\" id"
  "=\"button1\"><property name=\"label\">gtk-close</property><property nam"
  "e=\"visible\">True</property><property name=\"can_focus\">True</propert"
  "y><property name=\"receives_default\">True</property><property name=\"u"
  "se_stock\">True</property></object><packing><property name=\"expand\">F"
  "alse</property><property name=\"fill\">False</property><property name=\""
  "pack_type\">end</property><property name=\"position\">1</property></pac"
  "king></child></object><packing><property name=\"expand\">False</propert"
  "y><property name=\"pack_type\">end</property><property name=\"position\""
  ">0</property></packing></child></object></child><action-widgets><action"
  "-widget response=\"0\">button2</action-widget><action-widget response=\""
  "0\">button1</action-widget></action-widgets></object><object class=\"Xf"
  "ceTitledDialog\" id=\"change_name_dialog\"><property name=\"title\" tra"
  "nslatable=\"yes\">Change workspace name</property><property name=\"resi"
  "zable\">False</property><property name=\"window_position\">center-on-pa"
  "rent</property><property name=\"destroy_with_parent\">True</property><p"
  "roperty name=\"icon_name\">xfce4-workspaces</property><property name=\""
  "type_hint\">dialog</property><property name=\"skip_taskbar_hint\">True<"
  "/property><property name=\"transient_for\">main-dialog</property><prope"
  "rty name=\"has_separator\">False</property><child internal-child=\"vbox"
  "\"><object class=\"GtkVBox\" id=\"dialog-vbox2\"><property name=\"visib"
  "le\">True</property><property name=\"spacing\">2</property><child><obje"
  "ct class=\"GtkHBox\" id=\"hbox1\"><property name=\"visible\">True</prop"
  "erty><property name=\"border_width\">6</property><property name=\"spaci"
  "ng\">12</property><child><object class=\"GtkLabel\" id=\"label2\"><prop"
  "erty name=\"visible\">True</property><property name=\"label\" translata"
  "ble=\"yes\">_Name:</property><property name=\"use_underline\">True</pro"
  "perty><property name=\"mnemonic_widget\">entry_name</property></object>"
  "<packing><property name=\"expand\">False</property><property name=\"fil"
  "l\">False</property><property name=\"position\">0</property></packing><"
  "/child><child><object class=\"GtkEntry\" id=\"entry_name\"><property na"
  "me=\"visible\">True</property><property name=\"can_focus\">True</proper"
  "ty><property name=\"activates_default\">True</property><property name=\""
  "width_chars\">16</property></object><packing><property name=\"position\""
  ">1</property></packing></child></object><packing><property name=\"expan"
  "d\">False</property><property name=\"fill\">False</property><property n"
  "ame=\"position\">1</property></packing></child><child internal-child=\""
  "action_area\"><object class=\"GtkHButtonBox\" id=\"dialog-action_area2\""
  "><property name=\"visible\">True</property><property name=\"layout_styl"
  "e\">end</property><child><object class=\"GtkButton\" id=\"button3\"><pr"
  "operty name=\"label\">gtk-cancel</property><property name=\"visible\">T"
  "rue</property><property name=\"can_focus\">True</property><property nam"
  "e=\"receives_default\">True</property><property name=\"use_stock\">True"
  "</property></object><packing><property name=\"expand\">False</property>"
  "<property name=\"fill\">False</property><property name=\"position\">0</"
  "property></packing></child><child><object class=\"GtkButton\" id=\"butt"
  "on4\"><property name=\"label\">gtk-save</property><property name=\"visi"
  "ble\">True</property><property name=\"can_focus\">True</property><prope"
  "rty name=\"can_default\">True</property><property name=\"has_default\">"
  "True</property><property name=\"receives_default\">True</property><prop"
  "erty name=\"use_stock\">True</property></object><packing><property name"
  "=\"expand\">False</property><property name=\"fill\">False</property><pr"
  "operty name=\"position\">1</property></packing></child></object><packin"
  "g><property name=\"expand\">False</property><property name=\"pack_type\""
  ">end</property><property name=\"position\">0</property></packing></chil"
  "d></object></child><action-widgets><action-widget response=\"0\">button"
  "3</action-widget><action-widget response=\"0\">button4</action-widget><"
  "/action-widgets></object></interface>"
};

static const unsigned workspace_dialog_ui_length = 13388u;

