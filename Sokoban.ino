#include <Arduboy2.h>
Arduboy2 arduboy;
/*=========================================================
                         位图
  =========================================================*/
//启动画面
const uint8_t BOOT[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x24, 0x0f, 0xb0, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x82, 0x20, 0x0a, 0x78, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x36, 0x47, 0xff, 0x12, 0x48, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x62, 0x64, 0x04, 0xfc, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x22, 0x7f, 0x04, 0x84, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x23, 0xa4, 0x0c, 0xfc, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x26, 0x24, 0x0e, 0x84, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x62, 0x3f, 0x0d, 0xfc, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x36, 0xc2, 0x24, 0x1c, 0x84, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x82, 0x3f, 0x14, 0xfc, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x04, 0x84, 0x0e, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x81, 0x8c, 0xcf, 0x04, 0xa2, 0xf8, 0x22, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x82, 0x52, 0x49, 0x04, 0xa2, 0x20, 0x22, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x40, 0x92, 0x4f, 0x07, 0xa2, 0x23, 0x23, 0xd1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x41, 0x12, 0x49, 0x04, 0xaa, 0x23, 0x22, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x82, 0x12, 0x49, 0x04, 0x94, 0x20, 0x22, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x83, 0xcc, 0xef, 0x04, 0x94, 0x20, 0x3a, 0x4a, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x80, 0x00, 0x04, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x10, 0x40, 0x00, 0x0f, 0xfc, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x08, 0x20, 0x00, 0x08, 0x04, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x84, 0x10, 0x00, 0x09, 0x25, 0x40, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xfb, 0xff, 0xf8, 0x05, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x04, 0x04, 0x44, 0x08, 0x10, 0x08, 0x05, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x02, 0x06, 0x42, 0x08, 0x08, 0x0a, 0x05, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x80, 0x01, 0x04, 0x59, 0x48, 0x04, 0x09, 0xe4, 0x80, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x40, 0x00, 0x84, 0x58, 0x88, 0x02, 0x08, 0x05, 0x80, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x45, 0x43, 0xe8, 0x01, 0x08, 0x06, 0x80, 0x04, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x43, 0xef, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x18, 0x00, 0x14, 0x40, 0x08, 0x00, 0x41, 0x08, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x14, 0x00, 0x0a, 0x47, 0xe8, 0x00, 0x23, 0x08, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x12, 0x00, 0x05, 0x5f, 0x0c, 0x00, 0x10, 0x18, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x11, 0x00, 0x02, 0xc0, 0x0a, 0x00, 0x08, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x10, 0x80, 0x01, 0x7f, 0xf9, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x10, 0x60, 0x00, 0x40, 0x00, 0x40, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x10, 0x50, 0x00, 0x20, 0x00, 0x20, 0x00, 0x80, 0x01, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x10, 0x48, 0x00, 0x10, 0x00, 0x10, 0x00, 0x3f, 0xf0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x44, 0x00, 0x08, 0x00, 0x08, 0x00, 0x5f, 0xf8, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x42, 0x00, 0x04, 0x00, 0x04, 0x00, 0x6f, 0xfc, 0x20, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x41, 0x80, 0x01, 0x00, 0x03, 0x00, 0x77, 0xfe, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x41, 0x40, 0x00, 0x9e, 0x0c, 0x80, 0x77, 0xfe, 0x04, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x41, 0x20, 0x00, 0x41, 0xf8, 0x40, 0x77, 0xfe, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x41, 0x10, 0x00, 0x20, 0xc7, 0x20, 0x77, 0xfe, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x41, 0x08, 0x00, 0x13, 0x00, 0x10, 0x77, 0xfe, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x41, 0x06, 0x00, 0x04, 0x00, 0x04, 0x77, 0xfe, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0x05, 0x00, 0x02, 0x00, 0x02, 0x37, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x80, 0x01, 0x00, 0x01, 0x17, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x04, 0x40, 0x00, 0x80, 0x00, 0x87, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x04, 0x20, 0x00, 0x40, 0x00, 0x40, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x04, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x04, 0x10, 0x00, 0x30, 0x00, 0x20, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x10, 0x00, 0x30, 0x00, 0x20, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x04, 0x10, 0x00, 0x30, 0x00, 0x20, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x00, 0x30, 0x00, 0x20, 0x00, 0x80
};
//墙的贴图
const uint8_t WALL[] PROGMEM = {
  0xff, 0xff, 0x00, 0x80, 0x01, 0x80, 0x80, 0x01, 0x40, 0x80, 0x01, 0x20, 0x80, 0x01, 0x10, 0x80, 0x01, 0x08, 0x80, 0x01, 0x04, 0x80, 0x01, 0x04, 0x80, 0x01, 0x04, 0x80, 0x01, 0x04, 0x80, 0x01, 0x04, 0x80, 0x01, 0x04, 0x80, 0x01, 0x04, 0x80, 0x01, 0x04, 0x80, 0x01, 0x04, 0xff, 0xff, 0x04, 0x40, 0x00, 0x84, 0x20, 0x00, 0x44, 0x10, 0x00, 0x24, 0x08, 0x00, 0x14, 0x04, 0x00, 0x0c, 0x03, 0xff, 0xfc
};
//箱子的贴图
const uint8_t BOX[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x0c, 0x20, 0x80, 0x0a, 0x10, 0x40, 0x09, 0x08, 0x20, 0x08, 0xff, 0xf0, 0x08, 0x80, 0x10, 0x0c, 0x80, 0x10, 0x08, 0xb2, 0x90, 0x08, 0xb0, 0x10, 0x0a, 0x87, 0x50, 0x08, 0xa0, 0x10, 0x08, 0xa0, 0x10, 0x04, 0x8f, 0xd0, 0x02, 0xbe, 0x10, 0x01, 0x80, 0x10, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
//打开的箱子贴图
const uint8_t OBOX[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x05, 0xff, 0x80, 0x06, 0xff, 0xc0, 0x07, 0x00, 0x00, 0x07, 0x7f, 0xe0, 0x07, 0x7f, 0xe0, 0x07, 0x7f, 0xe0, 0x07, 0x7f, 0xe0, 0x07, 0x7f, 0xe0, 0x07, 0x7f, 0xe0, 0x07, 0x7f, 0xe0, 0x03, 0x7f, 0xe0, 0x01, 0x7f, 0xe0, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
//小人朝上的贴图
const uint8_t ManUp[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x01, 0x80, 0x40, 0x01, 0x40, 0x20, 0x01, 0x20, 0x10, 0x01, 0x1f, 0xf8, 0x01, 0x10, 0x08, 0x01, 0x50, 0x08, 0x01, 0x50, 0x08, 0x01, 0x50, 0x08, 0x01, 0x50, 0x08, 0x00, 0x90, 0x08, 0x00, 0xd0, 0x08, 0x00, 0xb0, 0x08, 0x00, 0x9f, 0xf8, 0x00, 0x08, 0x40, 0x00, 0x08, 0xc0, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00
};
//小人朝下的贴图
const uint8_t ManDown[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x20, 0x18, 0x00, 0x40, 0x28, 0x00, 0x80, 0x48, 0x01, 0xff, 0x88, 0x01, 0x00, 0x88, 0x01, 0x24, 0xa8, 0x01, 0x00, 0xa8, 0x01, 0x00, 0xa8, 0x01, 0x40, 0xa8, 0x01, 0x3c, 0x90, 0x01, 0x00, 0xb0, 0x01, 0x00, 0xd0, 0x01, 0xff, 0x90, 0x00, 0x21, 0x00, 0x00, 0x61, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00
};
//小人朝左的贴图
const uint8_t ManLeft[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x01, 0x80, 0x40, 0x01, 0x40, 0x20, 0x01, 0x20, 0x10, 0x01, 0x1f, 0xf8, 0x01, 0x90, 0x08, 0x01, 0x30, 0x08, 0x01, 0x11, 0x08, 0x01, 0xb1, 0x08, 0x01, 0x51, 0x08, 0x00, 0x91, 0x08, 0x00, 0x52, 0x08, 0x00, 0x30, 0x08, 0x00, 0x1f, 0xf8, 0x00, 0x31, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
//小人朝右的贴图
const uint8_t ManRight[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x20, 0x18, 0x00, 0x40, 0x28, 0x00, 0x80, 0x48, 0x01, 0xff, 0x88, 0x01, 0x00, 0x98, 0x01, 0x00, 0xc8, 0x01, 0x08, 0x88, 0x01, 0x08, 0xd8, 0x01, 0x08, 0xa8, 0x01, 0x08, 0x90, 0x01, 0x04, 0xa0, 0x01, 0x00, 0xc0, 0x01, 0xff, 0x80, 0x00, 0x08, 0xc0, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
//“关卡”中文字
const uint8_t TCP[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x40, 0x06, 0xc0, 0x0f, 0xe0, 0x01, 0x00, 0x01, 0x00, 0x1f, 0xf0, 0x01, 0x00, 0x02, 0x80, 0x04, 0x60, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0xf0, 0x01, 0x00, 0x3f, 0xf8, 0x01, 0x00, 0x01, 0xc0, 0x01, 0x20, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
/*=========================================================
                         地图
  =========================================================*/
const PROGMEM byte MAP[] = {
  //第1关
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 1, 4, 1, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 4, 0, 3, 3, 1, 1, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 1, 1, 2, 0, 3, 4, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 1, 3, 1, 1, 1, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 1, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  //第2关
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 1, 0, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 1, 0, 3, 0, 0, 1, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 4, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 4, 3, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 4, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  //第3关
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0 ,
  0, 0, 0, 1, 1, 3, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0 ,
  0, 0, 0, 1, 0, 0, 2, 3, 0, 0, 3, 0, 1, 0, 0, 0 ,
  0, 0, 0, 1, 0, 4, 4, 1, 0, 3, 0, 1, 1, 0, 0, 0 ,
  0, 0, 0, 1, 1, 4, 4, 1, 0, 0, 0, 1, 0, 0, 0, 0 ,
  0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  //第4关
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 0, 0, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 1, 3, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 4, 3, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 4, 4, 5, 4, 1, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  //第5关
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 ,
  0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0 ,
  0, 0, 0, 1, 0, 0, 0, 4, 1, 1, 1, 0, 1, 0, 0, 0 ,
  0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0 ,
  0, 0, 0, 1, 0, 1, 0, 3, 0, 3, 1, 4, 0, 1, 0, 0 ,
  0, 0, 0, 1, 0, 1, 0, 0, 5, 0, 0, 1, 0, 1, 0, 0 ,
  0, 0, 0, 1, 0, 4, 1, 3, 0, 3, 0, 1, 0, 1, 0, 0 ,
  0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1 ,
  0, 0, 0, 0, 1, 0, 1, 1, 1, 4, 0, 0, 0, 0, 2, 1 ,
  0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1 ,
  0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  //第6关
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 1, 0, 0, 1, 0, 2, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 0, 0, 0, 1, 3, 0, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 3, 0, 0, 3, 0, 0, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 0, 3, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0 ,
  0, 1, 1, 1, 0, 3, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0 ,
  0, 1, 4, 4, 4, 4, 4, 0, 0, 1, 0, 0, 0, 0, 0, 0 ,
  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  //第7关
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 ,
  0, 0, 1, 1, 4, 0, 3, 1, 1, 0, 1, 1, 0, 0, 0, 0 ,
  0, 0, 1, 4, 4, 3, 0, 3, 0, 0, 2, 1, 0, 0, 0, 0 ,
  0, 0, 1, 4, 4, 0, 3, 0, 3, 0, 1, 1, 0, 0, 0, 0 ,
  0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  //第8关
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 ,
  0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0 ,
  0, 0, 0, 1, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0 ,
  0, 0, 0, 1, 3, 0, 1, 1, 1, 0, 3, 1, 0, 0, 0, 0 ,
  0, 0, 0, 1, 0, 1, 4, 4, 4, 1, 0, 1, 0, 0, 0, 0 ,
  0, 0, 1, 1, 0, 1, 4, 4, 4, 1, 0, 1, 1, 0, 0, 0 ,
  0, 0, 1, 0, 3, 0, 0, 3, 0, 0, 3, 0, 1, 0, 0, 0 ,
  0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 2, 1, 0, 0, 0 ,
  0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  //第9关
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 1, 1, 3, 3, 3, 0, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 2, 0, 3, 4, 4, 0, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 0, 3, 4, 4, 4, 1, 1, 0, 0, 0, 0, 0 ,
  0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  //第10关
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0 ,
  0, 0, 0, 0, 1, 1, 3, 0, 1, 1, 0, 0, 1, 0, 0, 0 ,
  0, 0, 0, 0, 1, 0, 3, 0, 0, 3, 0, 0, 1, 0, 0, 0 ,
  0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 2, 0, 1, 0, 0, 0 ,
  0, 0, 0, 0, 1, 1, 1, 4, 1, 1, 3, 1, 1, 1, 0, 0 ,
  0, 0, 0, 0, 0, 1, 4, 5, 4, 3, 0, 0, 0, 1, 0, 0 ,
  0, 0, 0, 0, 0, 1, 1, 4, 4, 0, 0, 0, 0, 1, 0, 0 ,
  0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,
  //第11关 同桌李天赐提供
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 4, 1, 0, 4, 0, 1, 1, 0, 0, 1, 4, 4, 1,
  1, 1, 0, 0, 0, 0, 0, 0, 4, 0, 0, 3, 1, 0, 0, 1,
  1, 1, 0, 0, 0, 1, 0, 0, 4, 0, 0, 0, 3, 0, 0, 1,
  1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1,
  1, 0, 3, 0, 0, 1, 0, 3, 0, 1, 0, 0, 0, 0, 1, 1,
  1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1,
  1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 1,
  1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1,
  1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1,
  1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1,
  1, 0, 1, 0, 3, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1,
  1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1,
  1, 2, 3, 0, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 1,
  1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 1, 1, 0, 0, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  //0->空白
  //1->墙
  //2->人
  //3->箱子
  //4->位置
  //5->放到正确位置的箱子
  //6->在标签上的人
  //每个地图大小16*16 可以自行添加
};
/*=========================================================
                         变量
  =========================================================*/
byte CP = 1; //关卡
byte ACP = (sizeof(MAP) / sizeof(MAP[0])) / 256; //总关卡
int RMAP[256]; //运行地图
int LMAP[28]; //视野地图
int Atmp; //缓存
int Btmp; //缓存
int Ctmp; //缓存
byte DX;
byte DY;
byte P = 0; //玩家在地图中的位置
char PlayerD = -16; //最后方向 默认2 也就是下
boolean LA = false; //行动是否合法
boolean WIN = false; //检测是否通关
int X = 1;
int Y = 1;
/*=========================================================
                     只循环一次
  =========================================================*/
void setup() {
  arduboy.boot();
  arduboy.drawSlowXYBitmap(0, 0, BOOT, 128, 64, 1);
  arduboy.display();
  delay(1500);
  //加载地图
  load_cp();   //把地图载入内存
  load_LMAP();//载入视野地图
  draw(); //渲染画面
}
/*=========================================================
                     不停循环
  =========================================================*/
void loop() {
  LA = false;                           //是否刷新移动  否
  if (arduboy.pressed(A_BUTTON)) {      //如果A键按下
    if (arduboy.pressed(UP_BUTTON)) {   //上键与A键同时按下
      if (CP < ACP) CP++;               //如果不是最后一关 让关卡数+1
      Load();//载入关卡函数
    }
    if (arduboy.pressed(DOWN_BUTTON)) { //下键与A键同时按下
      if (CP > 1) CP--;                 //如果不是第一关 让关卡数-1
      Load();                           //载入关卡函数
    }
  }
  if (arduboy.pressed(B_BUTTON)) {      //如果B键按下 （B键作用是重置当前关卡）
    load_cp();                          //把当前关卡地图载入内存
    load_LMAP();                        //计算视野地图
    draw();                             //渲染画面
    loop();                             //回到游戏循环 开始新一轮游戏
  }

  //键盘控制玩家部分


  if (arduboy.pressed(UP_BUTTON)) {//上键激活
    PlayerD = -16;//设置玩家方向 至于为什么是这个下面有讲 不用着急
    if (RMAP[P - 16] == 0 || RMAP[P - 16] == 3 || RMAP[P - 16] == 4 || RMAP[P - 16] == 5 || RMAP[P - 16] == 6) {//检查对应位置是否可以走
      LA = true;//移动合法 计算移动 是
    } else {
      draw();
    }
  } else {
    if (arduboy.pressed(DOWN_BUTTON)) {//下键激活
      PlayerD = 16;//设置玩家方向 至于为什么是这个下面有讲 不用着急
      if (RMAP[P + 16] == 0 || RMAP[P + 16] == 3 || RMAP[P + 16] == 4 || RMAP[P + 16] == 5 || RMAP[P + 16] == 6)  { //检查对应位置是否可以走
        LA = true;//移动合法 计算移动 是
      } else {
        draw();
      }
    } else {
      if (arduboy.pressed(LEFT_BUTTON)) {//左键激活
        PlayerD = -1; //设置玩家方向 至于为什么是这个下面有讲 不用着急
        if (RMAP[P - 1] == 0 || RMAP[P - 1] == 3 || RMAP[P - 1] == 4 || RMAP[P - 1] == 5 || RMAP[P - 1] == 6)  {//检查对应位置是否可以走
          LA = true;//移动合法 计算移动 是
        } else {
          draw();
        }
      } else {
        if (arduboy.pressed(RIGHT_BUTTON)) { //右键激活
          PlayerD = 1;//设置玩家方向 至于为什么是这个下面有讲 不用着急
          if (RMAP[P + 1] == 0 || RMAP[P + 1] == 3 || RMAP[P + 1] == 4 || RMAP[P + 1] == 5 || RMAP[P + 1] == 6)  { //检查对应位置是否可以走
            LA = true; //移动合法 计算移动 是
          } else {
            draw();
          }
        }
      }
    }
  }


  /*=========================================================
                   移动逻辑判断
    =========================================================*/
  if (LA == true) {
    //行动合法
    //如果脚下是空的
    if (RMAP[P] == 2) {
      if (RMAP[P + PlayerD] == 0) {
        //如果前方是空气
        RMAP[P + PlayerD] = 2;
        RMAP[P] = 0;
      } else {
        //如果前方是标记
        if (RMAP[P + PlayerD] == 4) {
          RMAP[P + PlayerD] = 6;
          RMAP[P] = 0;
        } else {
          //如果前面不是标记而是标记上有箱子
          if (RMAP[P + PlayerD] == 5) {
            //如果前方标签上的箱子前面是空气
            if (RMAP[P + 2 * PlayerD] == 0) {
              RMAP[P + 2 * PlayerD] = 3;
              RMAP[P + PlayerD] = 6;
              RMAP[P] = 0;
            } else {
              //如果前方标签上的箱子前面是标签
              if (RMAP[P + 2 * PlayerD] == 4) {
                RMAP[P + 2 * PlayerD] = 5;
                RMAP[P + PlayerD] = 6;
                RMAP[P] = 0;
              }
            }
          } else {   //前方是箱子
            if (RMAP[P + PlayerD] == 3) {
              //箱子前面是空气
              if (RMAP[P + 2 * PlayerD] == 0) {
                RMAP[P + 2 * PlayerD] = 3;
                RMAP[P + PlayerD] = 2;
                RMAP[P] = 0;
              } else {
                if (RMAP[P + 2 * PlayerD] == 4) {
                  //箱子前面是标记
                  RMAP[P + 2 * PlayerD] = 5;
                  RMAP[P + PlayerD] = 2;
                  RMAP[P] = 0;
                }
              }
            }
          }
        }
      }
    } else {
      //如果前面不是空气并且脚下有标记
      if (RMAP[P] == 6) {
        if (RMAP[P + PlayerD] == 0) {
          //如果前方是空气
          RMAP[P + PlayerD] = 2;
          RMAP[P] = 4;
        } else {
          //如果前方依然是是标记
          if (RMAP[P + PlayerD] == 4) {
            RMAP[P + PlayerD] = 6;
            RMAP[P] = 4;
          } else {
            //如果前方标签上的箱子前面是空气
            if (RMAP[P + 2 * PlayerD] == 0) {
              RMAP[P + 2 * PlayerD] = 3;
              RMAP[P + PlayerD] = 2;
              RMAP[P] = 4;
            } else {
              //如果前方标签上的箱子前面是标签
              if (RMAP[P + 2 * PlayerD] == 4) {
                RMAP[P + 2 * PlayerD] = 5;
                RMAP[P + PlayerD] = 6;
                RMAP[P] = 4;
              } else {
                //如果前方只有箱子，箱子前面但是脚下有标签
                if (RMAP[P + PlayerD] == 3) {
                  //箱子前面是空气
                  if (RMAP[P + 2 * PlayerD] == 0) {
                    RMAP[P + 2 * PlayerD] = 3;
                    RMAP[P + PlayerD] = 2;
                    RMAP[P] = 4;
                  } else {
                    //箱子前面是标签
                    if (RMAP[P + 2 * PlayerD] == 4) {
                      RMAP[P + 2 * PlayerD] = 5;
                      RMAP[P + PlayerD] = 2;
                      RMAP[P] = 4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    load_LMAP(); //刷新视野地图
    draw();//渲染画面
    delay(50); //防止游戏过快
  }
  if (WIN == true) win(); //检测到通关 调用通关函数
}
/*=========================================================
                  显示
  =========================================================*/
void draw() {
  arduboy.clear();                                        //清除显存
  arduboy.drawSlowXYBitmap(112, 0, TCP, 16, 32, 1);       //关卡中文字体
  arduboy.setCursor(114, 34);                             //设置光标
  arduboy.print(CP);                                      //显示当前关卡
  arduboy.setCursor(117, 45);                             //设置光标
  arduboy.print("~");                                     //显示分隔符
  arduboy.setCursor(114, 54);                             //设置光标
  arduboy.print(ACP);                                     //显示一共有多少关
  DrawMap();                                              //渲染游戏地图
  arduboy.display();                                      //把画面显示到OLED上
}
/*=========================================================
                  载入当前关卡
  =========================================================*/
void load_cp() {
  Atmp = 0;                                               //初始化写入地图内存的位置
  Ctmp = (CP - 1) * 256;                                  //设置读取地图结束位置
  for (Btmp = Ctmp; Btmp <= Ctmp + 255; Btmp++) {         //循环读取
    RMAP[Atmp] = pgm_read_byte_near(MAP + Btmp);          //读取相对应位置的地图，写入当前关卡地图内存
    Atmp++;                                               //地图内存地址位置+1
  }
}
/*=========================================================
                  载入当前区块
  =========================================================*/
void load_LMAP() {
  /*=========================================================
           遍历内存检查玩家位置和通关情况
    =========================================================*/
  WIN = true;//假设玩家通关
  for (int i = 0; i <= 255; i++) {              //遍历关卡地图内存;0到255有256个数字,因为规定一关地图大小为16x16所以为256
    if (RMAP[i] == 2) {                         //当前是玩家所在的位置 重设玩家所在地图位置
      P = i;
    } else {
      if (RMAP[i] == 6) P = i;                  //当前是玩家所在的位置 重设玩家所在地图位置
    }
    if (RMAP[i] == 3) WIN = false;              //检测到没有放在指定位置的箱子 表明玩家没有通关
  }
  Atmp = P - 19;                                //视野地图最开始的位置 是关卡地图(16x16大地图)中 玩家位置-19的地方，可以参考下图颜色加深位置（119-110=19）说白了，这个是用来放视野地图最开始的方块在大地图中的位置
  int i = 0;                                    //i为视野地图LMAP的位置 初始化为0
  for (Btmp = P - 19; Btmp <= P + 35; Btmp++) {
    if (Btmp >= Atmp + 7) {
      Btmp += 9;
      Atmp += 16;
    }
    LMAP[i] = RMAP[Btmp];                       //把大地图蓝色标记的载入视野地图
    i++;                                        //视野地图位置+1
  }
}
/*=========================================================
                  渲染地图
  =========================================================*/
void DrawMap() {
  DX = 0;
  DY = 0;
  for (byte i = 0; i <= 27; i++) {                                                  //遍历视野地图

    //0->空白
    //1->墙
    //2->人
    //3->箱子
    //4->位置
    //5->放到正确位置的箱子
    //6->在标签上的人

    if (LMAP[i] == 1) {                                                             //当前位置是墙
      //画墙
      arduboy.fillRect(DX - 6,  DY - 6, 16, 16, 0);                                 //清空重绘区
      arduboy.drawLine(DX, DY + 10, DX, DY + 14, BLACK);                            //处理渲染错误的线条
      arduboy.drawLine(DX + 10, DY, DX + 14, DY, BLACK);                            //处理渲染错误的线条
      arduboy.drawSlowXYBitmap(DX - 6, DY - 6,  WALL, 22, 22, 1);                   //显示墙的图片
    }
    if (LMAP[i] == 2 || LMAP[i] == 6) {                                             //当前是玩家的位置
      DrawPlayer();                                                                 //显示玩家
    }
    if (LMAP[i] == 3) {                                                             //如果当前位置是箱子
      DrawBox();                                                                    //显示箱子
    }
    if (LMAP[i] == 5) {                                                             //当前位置是放到标记上的箱子
      arduboy.drawSlowXYBitmap(DX - 6, DY - 6, OBOX, 22, 22, 1);                    //显示打开的箱子图片
    }
    if (LMAP[i] == 4) {                                                             //当前位置是标记(“X”)
      DrawTag();                                                                    //在对应的位置画一个"X"
    }
    //计算坐标
    DX += 15;
    if (DX > 90) {
      DX = 0;
      DY += 15;
    }
  }
}
/*=========================================================
                  绘图函数
  =========================================================*/
void DrawPlayer() {
  //画玩家
  arduboy.fillRect(DX - 1,  DY - 2, 16, 17, 0);                                   //清空重绘区

  //-16为上 16为下 -1为左 +1为右 这样设定是因为地图是一个16x16的一维数组 为了获得相对应位置的地图方块信息要进行地图位置地址移位

  if (PlayerD == -16) {                                                           //如果玩家方向为上
    arduboy.drawSlowXYBitmap(DX - 6, DY - 6,  ManUp, 22, 22, 1);                  //玩家向上图片
  } else {
    if (PlayerD == 16) {//如果玩家方向为下
      arduboy.drawSlowXYBitmap(DX - 6, DY - 6, ManDown, 22, 22, 1);               //玩家向下图片
    } else {
      if (PlayerD == -1) {//如果玩家方向为左
        arduboy.drawSlowXYBitmap(DX - 6, DY - 6, ManLeft, 22, 22, 1);             //玩家向左图片
      } else {                                                                    //如果玩家方向不是上 也不是下 更不是左 （右）
        arduboy.drawSlowXYBitmap(DX - 6, DY - 6,  ManRight, 22, 22, 1);           //玩家向右图片
      }
    }
  }
}
void DrawBox() {
  //画箱子
  arduboy.drawSlowXYBitmap(DX - 6, DY - 6,  BOX, 22, 22, 1);
}
void DrawTag() {
  //画标记
  arduboy.drawLine(DX + 5, DY + 5, DX + 16, DY + 16, WHITE);
  arduboy.drawLine(DX + 16, DY + 5, DX + 5, DY + 16, WHITE);
}
/*=========================================================
                  下一关
  =========================================================*/
void win() {
  arduboy.clear();                          //清空显存
  DrawMap();                                //先渲染地图
  arduboy.fillRect(3, 12, 86, 30, 0);       //画一个黑色的长方形 用于覆盖画面
  arduboy.setCursor(11, 24);                //设置光标
  arduboy.print("You Win");                 //打印 你赢了
  arduboy.display();                        //把画面显示在OLED上
  delay (1000);                             //等待一秒
  if (CP < ACP) {                           //如果当前关卡少于总关卡
    CP++;                                   //那么关卡数+1
  } else {                                  //否则如果是最后一关
    CP = 1;                                 //切换回去第一关
  }
  Load();                                   //载入地图函数
}
void Load() {                               //载入函数
  load_cp();                               //把地图载入内存
  load_LMAP();                             //计算视野地图
  draw();                                  //渲染画面
  loop();                                 //回到最开始的循环 开始游戏
}
