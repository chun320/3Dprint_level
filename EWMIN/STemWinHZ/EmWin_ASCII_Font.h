#ifndef _EMWIN_ASCII_FONT_H
#define _EMWIN_ASCII_FONT_H
 	

const unsigned char emwin_asc2_1206[95][12]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x20,0x00,0x00},/*"!",1*/
{0x00,0x28,0x50,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/
{0x00,0x00,0x28,0x28,0xFC,0x28,0x50,0xFC,0x50,0x50,0x00,0x00},/*"#",3*/
{0x00,0x20,0x78,0xA8,0xA0,0x60,0x30,0x28,0xA8,0xF0,0x20,0x00},/*"$",4*/
{0x00,0x00,0x48,0xA8,0xB0,0x50,0x28,0x34,0x54,0x48,0x00,0x00},/*"%",5*/
{0x00,0x00,0x20,0x50,0x50,0x78,0xA8,0xA8,0x90,0x6C,0x00,0x00},/*"&",6*/
{0x00,0x40,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x04,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x04,0x00},/*"(",8*/
{0x00,0x40,0x20,0x10,0x10,0x10,0x10,0x10,0x10,0x20,0x40,0x00},/*")",9*/
{0x00,0x00,0x00,0x20,0xA8,0x70,0x70,0xA8,0x20,0x00,0x00,0x00},/*"*",10*/
{0x00,0x00,0x20,0x20,0x20,0xF8,0x20,0x20,0x20,0x00,0x00,0x00},/*"+",11*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x80},/*",",12*/
{0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00},/*"-",13*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00},/*".",14*/
{0x00,0x08,0x10,0x10,0x10,0x20,0x20,0x40,0x40,0x40,0x80,0x00},/*"/",15*/
{0x00,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x00,0x00},/*"0",16*/
{0x00,0x00,0x20,0x60,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00},/*"1",17*/
{0x00,0x00,0x70,0x88,0x88,0x10,0x20,0x40,0x80,0xF8,0x00,0x00},/*"2",18*/
{0x00,0x00,0x70,0x88,0x08,0x30,0x08,0x08,0x88,0x70,0x00,0x00},/*"3",19*/
{0x00,0x00,0x10,0x30,0x50,0x50,0x90,0x78,0x10,0x18,0x00,0x00},/*"4",20*/
{0x00,0x00,0xF8,0x80,0x80,0xF0,0x08,0x08,0x88,0x70,0x00,0x00},/*"5",21*/
{0x00,0x00,0x70,0x90,0x80,0xF0,0x88,0x88,0x88,0x70,0x00,0x00},/*"6",22*/
{0x00,0x00,0xF8,0x90,0x10,0x20,0x20,0x20,0x20,0x20,0x00,0x00},/*"7",23*/
{0x00,0x00,0x70,0x88,0x88,0x70,0x88,0x88,0x88,0x70,0x00,0x00},/*"8",24*/
{0x00,0x00,0x70,0x88,0x88,0x88,0x78,0x08,0x48,0x70,0x00,0x00},/*"9",25*/
{0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x20,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x20,0x20,0x00},/*";",27*/
{0x00,0x04,0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x04,0x00,0x00},/*"<",28*/
{0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0xF8,0x00,0x00,0x00,0x00},/*"=",29*/
{0x00,0x40,0x20,0x10,0x08,0x04,0x08,0x10,0x20,0x40,0x00,0x00},/*">",30*/
{0x00,0x00,0x70,0x88,0x88,0x10,0x20,0x20,0x00,0x20,0x00,0x00},/*"?",31*/
{0x00,0x00,0x70,0x88,0x98,0xA8,0xA8,0xB8,0x80,0x78,0x00,0x00},/*"@",32*/
{0x00,0x00,0x20,0x20,0x30,0x50,0x50,0x78,0x48,0xCC,0x00,0x00},/*"A",33*/
{0x00,0x00,0xF0,0x48,0x48,0x70,0x48,0x48,0x48,0xF0,0x00,0x00},/*"B",34*/
{0x00,0x00,0x78,0x88,0x80,0x80,0x80,0x80,0x88,0x70,0x00,0x00},/*"C",35*/
{0x00,0x00,0xF0,0x48,0x48,0x48,0x48,0x48,0x48,0xF0,0x00,0x00},/*"D",36*/
{0x00,0x00,0xF8,0x48,0x50,0x70,0x50,0x40,0x48,0xF8,0x00,0x00},/*"E",37*/
{0x00,0x00,0xF8,0x48,0x50,0x70,0x50,0x40,0x40,0xE0,0x00,0x00},/*"F",38*/
{0x00,0x00,0x38,0x48,0x80,0x80,0x9C,0x88,0x48,0x30,0x00,0x00},/*"G",39*/
{0x00,0x00,0xCC,0x48,0x48,0x78,0x48,0x48,0x48,0xCC,0x00,0x00},/*"H",40*/
{0x00,0x00,0xF8,0x20,0x20,0x20,0x20,0x20,0x20,0xF8,0x00,0x00},/*"I",41*/
{0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x90,0xE0,0x00},/*"J",42*/
{0x00,0x00,0xEC,0x48,0x50,0x60,0x50,0x50,0x48,0xEC,0x00,0x00},/*"K",43*/
{0x00,0x00,0xE0,0x40,0x40,0x40,0x40,0x40,0x44,0xFC,0x00,0x00},/*"L",44*/
{0x00,0x00,0xD8,0xD8,0xD8,0xD8,0xA8,0xA8,0xA8,0xA8,0x00,0x00},/*"M",45*/
{0x00,0x00,0xDC,0x48,0x68,0x68,0x58,0x58,0x48,0xE8,0x00,0x00},/*"N",46*/
{0x00,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x00,0x00},/*"O",47*/
{0x00,0x00,0xF0,0x48,0x48,0x70,0x40,0x40,0x40,0xE0,0x00,0x00},/*"P",48*/
{0x00,0x00,0x70,0x88,0x88,0x88,0x88,0xE8,0x98,0x70,0x18,0x00},/*"Q",49*/
{0x00,0x00,0xF0,0x48,0x48,0x70,0x50,0x48,0x48,0xEC,0x00,0x00},/*"R",50*/
{0x00,0x00,0x78,0x88,0x80,0x60,0x10,0x08,0x88,0xF0,0x00,0x00},/*"S",51*/
{0x00,0x00,0xF8,0xA8,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00},/*"T",52*/
{0x00,0x00,0xCC,0x48,0x48,0x48,0x48,0x48,0x48,0x30,0x00,0x00},/*"U",53*/
{0x00,0x00,0xCC,0x48,0x48,0x50,0x50,0x30,0x20,0x20,0x00,0x00},/*"V",54*/
{0x00,0x00,0xA8,0xA8,0xA8,0x70,0x50,0x50,0x50,0x50,0x00,0x00},/*"W",55*/
{0x00,0x00,0xD8,0x50,0x50,0x20,0x20,0x50,0x50,0xD8,0x00,0x00},/*"X",56*/
{0x00,0x00,0xD8,0x50,0x50,0x20,0x20,0x20,0x20,0x70,0x00,0x00},/*"Y",57*/
{0x00,0x00,0xF8,0x90,0x10,0x20,0x20,0x40,0x48,0xF8,0x00,0x00},/*"Z",58*/
{0x00,0x38,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x38,0x00},/*"[",59*/
{0x00,0x40,0x40,0x40,0x20,0x20,0x10,0x10,0x10,0x08,0x00,0x00},/*"\",60*/
{0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x70,0x00},/*"]",61*/
{0x00,0x20,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC},/*"_",63*/
{0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
{0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x38,0x48,0x3C,0x00,0x00},/*"a",65*/
{0x00,0x00,0xC0,0x40,0x40,0x70,0x48,0x48,0x48,0x70,0x00,0x00},/*"b",66*/
{0x00,0x00,0x00,0x00,0x00,0x38,0x48,0x40,0x40,0x38,0x00,0x00},/*"c",67*/
{0x00,0x00,0x18,0x08,0x08,0x38,0x48,0x48,0x48,0x3C,0x00,0x00},/*"d",68*/
{0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x78,0x40,0x38,0x00,0x00},/*"e",69*/
{0x00,0x00,0x1C,0x20,0x20,0x78,0x20,0x20,0x20,0x78,0x00,0x00},/*"f",70*/
{0x00,0x00,0x00,0x00,0x00,0x3C,0x48,0x30,0x40,0x78,0x44,0x38},/*"g",71*/
{0x00,0x00,0xC0,0x40,0x40,0x70,0x48,0x48,0x48,0xEC,0x00,0x00},/*"h",72*/
{0x00,0x00,0x20,0x00,0x00,0x60,0x20,0x20,0x20,0x70,0x00,0x00},/*"i",73*/
{0x00,0x00,0x10,0x00,0x00,0x30,0x10,0x10,0x10,0x10,0x10,0xE0},/*"j",74*/
{0x00,0x00,0xC0,0x40,0x40,0x5C,0x50,0x70,0x48,0xEC,0x00,0x00},/*"k",75*/
{0x00,0x00,0xE0,0x20,0x20,0x20,0x20,0x20,0x20,0xF8,0x00,0x00},/*"l",76*/
{0x00,0x00,0x00,0x00,0x00,0xF0,0xA8,0xA8,0xA8,0xA8,0x00,0x00},/*"m",77*/
{0x00,0x00,0x00,0x00,0x00,0xF0,0x48,0x48,0x48,0xEC,0x00,0x00},/*"n",78*/
{0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x48,0x48,0x30,0x00,0x00},/*"o",79*/
{0x00,0x00,0x00,0x00,0x00,0xF0,0x48,0x48,0x48,0x70,0x40,0xE0},/*"p",80*/
{0x00,0x00,0x00,0x00,0x00,0x38,0x48,0x48,0x48,0x38,0x08,0x1C},/*"q",81*/
{0x00,0x00,0x00,0x00,0x00,0xD8,0x60,0x40,0x40,0xE0,0x00,0x00},/*"r",82*/
{0x00,0x00,0x00,0x00,0x00,0x78,0x40,0x30,0x08,0x78,0x00,0x00},/*"s",83*/
{0x00,0x00,0x00,0x20,0x20,0x70,0x20,0x20,0x20,0x18,0x00,0x00},/*"t",84*/
{0x00,0x00,0x00,0x00,0x00,0xD8,0x48,0x48,0x48,0x3C,0x00,0x00},/*"u",85*/
{0x00,0x00,0x00,0x00,0x00,0xEC,0x48,0x50,0x30,0x20,0x00,0x00},/*"v",86*/
{0x00,0x00,0x00,0x00,0x00,0xA8,0xA8,0x70,0x50,0x50,0x00,0x00},/*"w",87*/
{0x00,0x00,0x00,0x00,0x00,0xD8,0x50,0x20,0x50,0xD8,0x00,0x00},/*"x",88*/
{0x00,0x00,0x00,0x00,0x00,0xEC,0x48,0x50,0x30,0x20,0x20,0xC0},/*"y",89*/
{0x00,0x00,0x00,0x00,0x00,0x78,0x10,0x20,0x20,0x78,0x00,0x00},/*"z",90*/
{0x00,0x18,0x10,0x10,0x10,0x20,0x10,0x10,0x10,0x10,0x18,0x00},/*"{",91*/
{0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10},/*"|",92*/
{0x00,0x60,0x20,0x20,0x20,0x10,0x20,0x20,0x20,0x20,0x60,0x00},/*"}",93*/
{0x40,0xA4,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"~",94*/
};

const unsigned char emwin_asc2_1608[95][16]={	  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x18,0x18,0x00,0x00},/*"!",1*/
{0x00,0x12,0x36,0x24,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/
{0x00,0x00,0x00,0x24,0x24,0x24,0xFE,0x48,0x48,0x48,0xFE,0x48,0x48,0x48,0x00,0x00},/*"#",3*/
{0x00,0x00,0x10,0x38,0x54,0x54,0x50,0x30,0x18,0x14,0x14,0x54,0x54,0x38,0x10,0x10},/*"$",4*/
{0x00,0x00,0x00,0x44,0xA4,0xA8,0xA8,0xA8,0x54,0x1A,0x2A,0x2A,0x2A,0x44,0x00,0x00},/*"%",5*/
{0x00,0x00,0x00,0x30,0x48,0x48,0x48,0x50,0x6E,0xA4,0x94,0x88,0x89,0x76,0x00,0x00},/*"&",6*/
{0x00,0x60,0x60,0x20,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x02,0x04,0x08,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x08,0x04,0x02,0x00},/*"(",8*/
{0x00,0x40,0x20,0x10,0x10,0x08,0x08,0x08,0x08,0x08,0x08,0x10,0x10,0x20,0x40,0x00},/*")",9*/
{0x00,0x00,0x00,0x00,0x10,0x10,0xD6,0x38,0x38,0xD6,0x10,0x10,0x00,0x00,0x00,0x00},/*"*",10*/
{0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x10,0xFE,0x10,0x10,0x10,0x10,0x00,0x00,0x00},/*"+",11*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x20,0xC0},/*",",12*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"-",13*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x00},/*".",14*/
{0x00,0x00,0x01,0x02,0x02,0x04,0x04,0x08,0x08,0x10,0x10,0x20,0x20,0x40,0x40,0x00},/*"/",15*/
{0x00,0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x24,0x18,0x00,0x00},/*"0",16*/
{0x00,0x00,0x00,0x10,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00},/*"1",17*/
{0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x04,0x04,0x08,0x10,0x20,0x42,0x7E,0x00,0x00},/*"2",18*/
{0x00,0x00,0x00,0x3C,0x42,0x42,0x04,0x18,0x04,0x02,0x02,0x42,0x44,0x38,0x00,0x00},/*"3",19*/
{0x00,0x00,0x00,0x04,0x0C,0x14,0x24,0x24,0x44,0x44,0x7E,0x04,0x04,0x1E,0x00,0x00},/*"4",20*/
{0x00,0x00,0x00,0x7E,0x40,0x40,0x40,0x58,0x64,0x02,0x02,0x42,0x44,0x38,0x00,0x00},/*"5",21*/
{0x00,0x00,0x00,0x1C,0x24,0x40,0x40,0x58,0x64,0x42,0x42,0x42,0x24,0x18,0x00,0x00},/*"6",22*/
{0x00,0x00,0x00,0x7E,0x44,0x44,0x08,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00},/*"7",23*/
{0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x24,0x18,0x24,0x42,0x42,0x42,0x3C,0x00,0x00},/*"8",24*/
{0x00,0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x26,0x1A,0x02,0x02,0x24,0x38,0x00,0x00},/*"9",25*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x20},/*";",27*/
{0x00,0x00,0x00,0x02,0x04,0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x04,0x02,0x00,0x00},/*"<",28*/
{0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00},/*"=",29*/
{0x00,0x00,0x00,0x40,0x20,0x10,0x08,0x04,0x02,0x04,0x08,0x10,0x20,0x40,0x00,0x00},/*">",30*/
{0x00,0x00,0x00,0x3C,0x42,0x42,0x62,0x02,0x04,0x08,0x08,0x00,0x18,0x18,0x00,0x00},/*"?",31*/
{0x00,0x00,0x00,0x38,0x44,0x5A,0xAA,0xAA,0xAA,0xAA,0xB4,0x42,0x44,0x38,0x00,0x00},/*"@",32*/
{0x00,0x00,0x00,0x10,0x10,0x18,0x28,0x28,0x24,0x3C,0x44,0x42,0x42,0xE7,0x00,0x00},/*"A",33*/
{0x00,0x00,0x00,0xF8,0x44,0x44,0x44,0x78,0x44,0x42,0x42,0x42,0x44,0xF8,0x00,0x00},/*"B",34*/
{0x00,0x00,0x00,0x3E,0x42,0x42,0x80,0x80,0x80,0x80,0x80,0x42,0x44,0x38,0x00,0x00},/*"C",35*/
{0x00,0x00,0x00,0xF8,0x44,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x44,0xF8,0x00,0x00},/*"D",36*/
{0x00,0x00,0x00,0xFC,0x42,0x48,0x48,0x78,0x48,0x48,0x40,0x42,0x42,0xFC,0x00,0x00},/*"E",37*/
{0x00,0x00,0x00,0xFC,0x42,0x48,0x48,0x78,0x48,0x48,0x40,0x40,0x40,0xE0,0x00,0x00},/*"F",38*/
{0x00,0x00,0x00,0x3C,0x44,0x44,0x80,0x80,0x80,0x8E,0x84,0x44,0x44,0x38,0x00,0x00},/*"G",39*/
{0x00,0x00,0x00,0xE7,0x42,0x42,0x42,0x42,0x7E,0x42,0x42,0x42,0x42,0xE7,0x00,0x00},/*"H",40*/
{0x00,0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00},/*"I",41*/
{0x00,0x00,0x00,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x88,0xF0},/*"J",42*/
{0x00,0x00,0x00,0xEE,0x44,0x48,0x50,0x70,0x50,0x48,0x48,0x44,0x44,0xEE,0x00,0x00},/*"K",43*/
{0x00,0x00,0x00,0xE0,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x42,0xFE,0x00,0x00},/*"L",44*/
{0x00,0x00,0x00,0xEE,0x6C,0x6C,0x6C,0x6C,0x54,0x54,0x54,0x54,0x54,0xD6,0x00,0x00},/*"M",45*/
{0x00,0x00,0x00,0xC7,0x62,0x62,0x52,0x52,0x4A,0x4A,0x4A,0x46,0x46,0xE2,0x00,0x00},/*"N",46*/
{0x00,0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00},/*"O",47*/
{0x00,0x00,0x00,0xFC,0x42,0x42,0x42,0x42,0x7C,0x40,0x40,0x40,0x40,0xE0,0x00,0x00},/*"P",48*/
{0x00,0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0xB2,0xCA,0x4C,0x38,0x06,0x00},/*"Q",49*/
{0x00,0x00,0x00,0xFC,0x42,0x42,0x42,0x7C,0x48,0x48,0x44,0x44,0x42,0xE3,0x00,0x00},/*"R",50*/
{0x00,0x00,0x00,0x3E,0x42,0x42,0x40,0x20,0x18,0x04,0x02,0x42,0x42,0x7C,0x00,0x00},/*"S",51*/
{0x00,0x00,0x00,0xFE,0x92,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00},/*"T",52*/
{0x00,0x00,0x00,0xE7,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00},/*"U",53*/
{0x00,0x00,0x00,0xE7,0x42,0x42,0x44,0x24,0x24,0x28,0x28,0x18,0x10,0x10,0x00,0x00},/*"V",54*/
{0x00,0x00,0x00,0xD6,0x92,0x92,0x92,0x92,0xAA,0xAA,0x6C,0x44,0x44,0x44,0x00,0x00},/*"W",55*/
{0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x18,0x18,0x18,0x24,0x24,0x42,0xE7,0x00,0x00},/*"X",56*/
{0x00,0x00,0x00,0xEE,0x44,0x44,0x28,0x28,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00},/*"Y",57*/
{0x00,0x00,0x00,0x7E,0x84,0x04,0x08,0x08,0x10,0x20,0x20,0x42,0x42,0xFC,0x00,0x00},/*"Z",58*/
{0x00,0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1E,0x00},/*"[",59*/
{0x00,0x00,0x40,0x40,0x20,0x20,0x10,0x10,0x10,0x08,0x08,0x04,0x04,0x04,0x02,0x02},/*"\",60*/
{0x00,0x78,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x78,0x00},/*"]",61*/
{0x00,0x1C,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF},/*"_",63*/
{0x00,0x60,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x1E,0x22,0x42,0x42,0x3F,0x00,0x00},/*"a",65*/
{0x00,0x00,0x00,0xC0,0x40,0x40,0x40,0x58,0x64,0x42,0x42,0x42,0x64,0x58,0x00,0x00},/*"b",66*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x22,0x40,0x40,0x40,0x22,0x1C,0x00,0x00},/*"c",67*/
{0x00,0x00,0x00,0x06,0x02,0x02,0x02,0x1E,0x22,0x42,0x42,0x42,0x26,0x1B,0x00,0x00},/*"d",68*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x7E,0x40,0x40,0x42,0x3C,0x00,0x00},/*"e",69*/
{0x00,0x00,0x00,0x0F,0x11,0x10,0x10,0x7E,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00},/*"f",70*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x44,0x44,0x38,0x40,0x3C,0x42,0x42,0x3C},/*"g",71*/
{0x00,0x00,0x00,0xC0,0x40,0x40,0x40,0x5C,0x62,0x42,0x42,0x42,0x42,0xE7,0x00,0x00},/*"h",72*/
{0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00},/*"i",73*/
{0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x1C,0x04,0x04,0x04,0x04,0x04,0x04,0x44,0x78},/*"j",74*/
{0x00,0x00,0x00,0xC0,0x40,0x40,0x40,0x4E,0x48,0x50,0x68,0x48,0x44,0xEE,0x00,0x00},/*"k",75*/
{0x00,0x00,0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00},/*"l",76*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x49,0x49,0x49,0x49,0x49,0xED,0x00,0x00},/*"m",77*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDC,0x62,0x42,0x42,0x42,0x42,0xE7,0x00,0x00},/*"n",78*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00},/*"o",79*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD8,0x64,0x42,0x42,0x42,0x44,0x78,0x40,0xE0},/*"p",0*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x22,0x42,0x42,0x42,0x22,0x1E,0x02,0x07},/*"q",81*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEE,0x32,0x20,0x20,0x20,0x20,0xF8,0x00,0x00},/*"r",82*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x42,0x40,0x3C,0x02,0x42,0x7C,0x00,0x00},/*"s",83*/
{0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x7C,0x10,0x10,0x10,0x10,0x10,0x0C,0x00,0x00},/*"t",84*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC6,0x42,0x42,0x42,0x42,0x46,0x3B,0x00,0x00},/*"u",85*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x28,0x10,0x10,0x00,0x00},/*"v",86*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD7,0x92,0x92,0xAA,0xAA,0x44,0x44,0x00,0x00},/*"w",87*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6E,0x24,0x18,0x18,0x18,0x24,0x76,0x00,0x00},/*"x",88*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x28,0x18,0x10,0x10,0xE0},/*"y",89*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x44,0x08,0x10,0x10,0x22,0x7E,0x00,0x00},/*"z",90*/
{0x00,0x03,0x04,0x04,0x04,0x04,0x04,0x08,0x04,0x04,0x04,0x04,0x04,0x04,0x03,0x00},/*"{",91*/
{0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08},/*"|",92*/
{0x00,0x60,0x10,0x10,0x10,0x10,0x10,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x60,0x00},/*"}",93*/
{0x30,0x4C,0x43,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"~",94*/
}; 

const unsigned char emwin_asc2_2412[95][48]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"!",1*/
{0x00,0x00,0x00,0x00,0x06,0x60,0x06,0x60,0x0C,0xC0,0x19,0x80,0x11,0x00,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x7F,0xE0,0x7F,0xE0,0x10,0x40,0x10,0x40,0x20,0x80,0x20,0x80,0x7F,0xE0,0x7F,0xE0,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"#",3*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x0F,0x80,0x1A,0xC0,0x32,0xC0,0x32,0xC0,0x32,0x00,0x1A,0x00,0x0E,0x00,0x07,0x00,0x03,0x80,0x03,0x80,0x02,0xC0,0x32,0xC0,0x32,0xC0,0x32,0xC0,0x12,0x80,0x0F,0x00,0x02,0x00,0x02,0x00,0x00,0x00},/*"$",4*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0xC0,0x50,0x80,0x88,0x80,0x89,0x00,0x89,0x00,0x8B,0x00,0x8A,0x00,0x5F,0xC0,0x75,0x40,0x06,0x20,0x0A,0x20,0x0A,0x20,0x1A,0x20,0x12,0x20,0x11,0x40,0x21,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"%",5*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0x26,0x00,0x26,0x00,0x26,0x00,0x26,0x00,0x25,0xC0,0x38,0x80,0x30,0x80,0x58,0x80,0x49,0x00,0xCD,0x00,0xC7,0x00,0xC6,0x00,0xC3,0x00,0x65,0x20,0x38,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"&",6*/
{0x00,0x00,0x00,0x00,0x30,0x00,0x38,0x00,0x08,0x00,0x08,0x00,0x10,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x40,0x00,0x80,0x01,0x80,0x01,0x00,0x03,0x00,0x03,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x03,0x00,0x03,0x00,0x01,0x00,0x01,0x80,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x00},/*"(",8*/
{0x00,0x00,0x00,0x00,0x40,0x00,0x20,0x00,0x10,0x00,0x18,0x00,0x08,0x00,0x0C,0x00,0x0C,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x0C,0x00,0x0C,0x00,0x08,0x00,0x18,0x00,0x10,0x00,0x20,0x00,0x40,0x00,0x00,0x00},/*")",9*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x72,0x70,0x3A,0xE0,0x0F,0x80,0x0F,0x80,0x3A,0xE0,0x72,0x70,0x02,0x00,0x02,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"*",10*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x7F,0xF0,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"+",11*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x38,0x00,0x08,0x00,0x08,0x00,0x10,0x00,0x60,0x00},/*",",12*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"-",13*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*".",14*/
{0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x60,0x00,0x40,0x00,0xC0,0x00,0x80,0x00,0x80,0x01,0x00,0x01,0x00,0x02,0x00,0x02,0x00,0x06,0x00,0x04,0x00,0x04,0x00,0x08,0x00,0x08,0x00,0x10,0x00,0x10,0x00,0x30,0x00,0x20,0x00,0x60,0x00,0x40,0x00,0x00,0x00},/*"/",15*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x19,0x80,0x30,0xC0,0x30,0xC0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x30,0xC0,0x30,0xC0,0x19,0x80,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"0",16*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x06,0x00,0x3E,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"1",17*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x21,0x80,0x40,0xC0,0x60,0xC0,0x60,0xC0,0x00,0xC0,0x01,0x80,0x01,0x80,0x03,0x00,0x04,0x00,0x08,0x00,0x10,0x40,0x20,0x40,0x40,0x40,0x7F,0xC0,0x7F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"2",18*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x23,0x00,0x61,0x80,0x61,0x80,0x61,0x80,0x01,0x80,0x03,0x00,0x0E,0x00,0x01,0x80,0x00,0x80,0x00,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x21,0x80,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"3",19*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x01,0x80,0x03,0x80,0x03,0x80,0x05,0x80,0x09,0x80,0x09,0x80,0x11,0x80,0x21,0x80,0x21,0x80,0x41,0x80,0x7F,0xE0,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00},/*"4",20*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xC0,0x3F,0xC0,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x2F,0x00,0x31,0x80,0x20,0xC0,0x00,0xC0,0x00,0xC0,0x60,0xC0,0x60,0xC0,0x41,0x80,0x21,0x80,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"5",21*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x18,0xC0,0x30,0xC0,0x30,0x00,0x20,0x00,0x60,0x00,0x67,0x80,0x68,0xC0,0x70,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x20,0x60,0x30,0x40,0x18,0xC0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"6",22*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x3F,0xE0,0x30,0x40,0x20,0x80,0x20,0x80,0x00,0x80,0x01,0x00,0x01,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"7",23*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x30,0xC0,0x60,0x60,0x60,0x60,0x60,0x60,0x70,0x40,0x3C,0xC0,0x0F,0x00,0x33,0x80,0x20,0xC0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x30,0xC0,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"8",24*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x30,0x80,0x30,0xC0,0x60,0x40,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0xE0,0x31,0x60,0x1E,0x60,0x00,0x60,0x00,0xC0,0x00,0xC0,0x30,0x80,0x31,0x80,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"9",25*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x06,0x00,0x02,0x00,0x04,0x00,0x00,0x00},/*";",27*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x40,0x00,0x80,0x01,0x00,0x02,0x00,0x04,0x00,0x08,0x00,0x10,0x00,0x20,0x00,0x10,0x00,0x08,0x00,0x04,0x00,0x02,0x00,0x01,0x00,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00},/*"<",28*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"=",29*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x10,0x00,0x08,0x00,0x04,0x00,0x02,0x00,0x01,0x00,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x40,0x00,0x80,0x01,0x00,0x02,0x00,0x04,0x00,0x08,0x00,0x10,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*">",30*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x80,0x30,0xC0,0x40,0x60,0x40,0x60,0x60,0x60,0x60,0x60,0x00,0xC0,0x01,0x80,0x06,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"?",31*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x1C,0x60,0x10,0x20,0x33,0x50,0x26,0xD0,0x64,0x90,0x64,0x90,0x68,0x90,0x68,0x90,0x69,0x90,0x69,0xA0,0x66,0xC0,0x30,0x10,0x30,0x20,0x18,0x40,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"@",32*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x06,0x00,0x0E,0x00,0x0B,0x00,0x0B,0x00,0x13,0x00,0x11,0x80,0x11,0x80,0x11,0x80,0x1F,0x80,0x20,0xC0,0x20,0xC0,0x20,0xC0,0x20,0x60,0x60,0x60,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00},/*"A",33*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x61,0x80,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x61,0x80,0x7F,0x00,0x60,0xC0,0x60,0x40,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0xC0,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"B",34*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0x18,0x60,0x30,0x20,0x30,0x20,0x20,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x20,0x30,0x20,0x30,0x40,0x18,0x80,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"C",35*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x61,0x80,0x60,0xC0,0x60,0xC0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0xC0,0x60,0xC0,0x63,0x80,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"D",36*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xC0,0x60,0x40,0x60,0x20,0x60,0x00,0x60,0x00,0x61,0x00,0x61,0x00,0x7F,0x00,0x61,0x00,0x61,0x00,0x60,0x00,0x60,0x00,0x60,0x20,0x60,0x20,0x60,0x40,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"E",37*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xC0,0x60,0xC0,0x60,0x20,0x60,0x20,0x60,0x00,0x61,0x00,0x61,0x00,0x7F,0x00,0x61,0x00,0x61,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"F",38*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x40,0x18,0xC0,0x30,0x40,0x30,0x40,0x20,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x63,0xF0,0x60,0xC0,0x60,0xC0,0x30,0xC0,0x30,0xC0,0x18,0xC0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"G",39*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x7F,0xE0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00},/*"H",40*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xC0,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"I",41*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xF0,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x61,0x80,0x63,0x00,0x3E,0x00},/*"J",42*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF3,0xE0,0x60,0x80,0x61,0x00,0x62,0x00,0x62,0x00,0x64,0x00,0x6C,0x00,0x7C,0x00,0x76,0x00,0x67,0x00,0x63,0x00,0x63,0x80,0x61,0x80,0x60,0xC0,0x60,0xE0,0xF1,0xF0,0x00,0x00,0x00,0x00,0x00,0x00},/*"K",43*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x20,0x60,0x20,0x60,0x40,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"L",44*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x70,0xE0,0x70,0xE0,0x70,0xE0,0x59,0x60,0x59,0x60,0x59,0x60,0x59,0x60,0x5A,0x60,0x4E,0x60,0x4E,0x60,0x4E,0x60,0x4E,0x60,0x44,0x60,0x44,0x60,0xE4,0xF0,0x00,0x00,0x00,0x00,0x00,0x00},/*"M",45*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x70,0x70,0x20,0x70,0x20,0x58,0x20,0x58,0x20,0x4C,0x20,0x46,0x20,0x46,0x20,0x43,0x20,0x43,0x20,0x41,0xA0,0x40,0xE0,0x40,0xE0,0x40,0x60,0x40,0x60,0xE0,0x20,0x00,0x00,0x00,0x00,0x00,0x00},/*"N",46*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x19,0x80,0x30,0xC0,0x30,0x40,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x30,0x40,0x30,0xC0,0x19,0x80,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"O",47*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x80,0x60,0xC0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0xC0,0x7F,0x80,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"P",48*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x19,0x80,0x30,0xC0,0x30,0x40,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x6E,0x60,0x32,0x40,0x31,0xC0,0x11,0x80,0x0F,0x80,0x01,0xE0,0x00,0xC0,0x00,0x00},/*"Q",49*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x80,0x60,0xC0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0xC0,0x7F,0x00,0x66,0x00,0x63,0x00,0x63,0x00,0x61,0x80,0x61,0x80,0x60,0xC0,0x60,0xC0,0xF0,0x70,0x00,0x00,0x00,0x00,0x00,0x00},/*"R",50*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x20,0x30,0xE0,0x60,0x20,0x60,0x20,0x60,0x00,0x70,0x00,0x3C,0x00,0x0F,0x00,0x03,0xC0,0x00,0xC0,0x00,0x60,0x40,0x60,0x40,0x60,0x60,0x60,0x70,0xC0,0x4F,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"S",51*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,0x46,0x20,0x86,0x10,0x86,0x10,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"T",52*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x70,0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,0x30,0x40,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"U",53*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xF0,0x70,0x60,0x30,0x40,0x30,0x40,0x30,0x40,0x30,0x80,0x18,0x80,0x18,0x80,0x18,0x80,0x18,0x80,0x0D,0x00,0x0D,0x00,0x0D,0x00,0x0F,0x00,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"V",54*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF7,0x70,0x66,0x20,0x66,0x20,0x66,0x40,0x66,0x40,0x67,0x40,0x37,0x40,0x37,0x40,0x3B,0x80,0x3B,0x80,0x3B,0x80,0x3B,0x80,0x39,0x80,0x11,0x00,0x11,0x00,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"W",55*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x79,0xE0,0x30,0xC0,0x18,0x80,0x18,0x80,0x19,0x00,0x0D,0x00,0x0E,0x00,0x06,0x00,0x06,0x00,0x07,0x00,0x0B,0x00,0x0B,0x80,0x19,0x80,0x11,0x80,0x30,0xC0,0x79,0xE0,0x00,0x00,0x00,0x00,0x00,0x00},/*"X",56*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xF0,0x70,0x60,0x30,0x40,0x30,0x80,0x18,0x80,0x18,0x80,0x0D,0x00,0x0D,0x00,0x0E,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"Y",57*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xE0,0x20,0xC0,0x41,0xC0,0x01,0x80,0x03,0x80,0x03,0x00,0x03,0x00,0x06,0x00,0x06,0x00,0x0C,0x00,0x0C,0x00,0x18,0x00,0x18,0x20,0x38,0x20,0x30,0x40,0x7F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"Z",58*/
{0x00,0x00,0x00,0x00,0x07,0xE0,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x07,0xE0,0x00,0x00},/*"[",59*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x08,0x00,0x08,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x02,0x00,0x02,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x80,0x00,0x80,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x20},/*"\",60*/
{0x00,0x00,0x00,0x00,0x3F,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x3F,0x00,0x00,0x00},/*"]",61*/
{0x00,0x00,0x00,0x00,0x07,0x00,0x0D,0x80,0x10,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xF0},/*"_",63*/
{0x00,0x00,0x00,0x00,0x18,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x80,0x30,0xC0,0x30,0xC0,0x07,0xC0,0x1C,0xC0,0x30,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x71,0xD0,0x3E,0xF0,0x00,0x00,0x00,0x00,0x00,0x00},/*"a",65*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x70,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x33,0x80,0x3C,0xC0,0x38,0x60,0x30,0x60,0x30,0x60,0x30,0x60,0x30,0x60,0x30,0x60,0x30,0x40,0x38,0xC0,0x2F,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"b",66*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x31,0x80,0x31,0x80,0x61,0x80,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x40,0x30,0x40,0x30,0x80,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"c",67*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x01,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x1E,0xC0,0x31,0xC0,0x30,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x20,0xC0,0x31,0xE0,0x1E,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"d",68*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x18,0xC0,0x10,0x60,0x30,0x60,0x3F,0xE0,0x30,0x00,0x30,0x00,0x30,0x00,0x18,0x20,0x1C,0x40,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"e",69*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x06,0x60,0x0C,0x60,0x0C,0x00,0x0C,0x00,0x7F,0xC0,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x3F,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"f",70*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x70,0x19,0x90,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x19,0x80,0x1F,0x00,0x30,0x00,0x3E,0x00,0x1F,0xC0,0x60,0x60,0x60,0x60,0x70,0xE0,0x1F,0x80},/*"g",71*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x70,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x37,0x80,0x38,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x79,0xE0,0x00,0x00,0x00,0x00,0x00,0x00},/*"h",72*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"i",73*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x33,0x00,0x3E,0x00},/*"j",74*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x70,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x33,0xC0,0x31,0x00,0x33,0x00,0x32,0x00,0x36,0x00,0x3E,0x00,0x3B,0x00,0x33,0x00,0x31,0x80,0x31,0x80,0x79,0xE0,0x00,0x00,0x00,0x00,0x00,0x00},/*"k",75*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x3E,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"l",76*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEE,0xE0,0x77,0x60,0x66,0x60,0x66,0x60,0x66,0x60,0x66,0x60,0x66,0x60,0x66,0x60,0x66,0x60,0x66,0x60,0xF7,0x70,0x00,0x00,0x00,0x00,0x00,0x00},/*"m",77*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x73,0x80,0x3C,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x79,0xE0,0x00,0x00,0x00,0x00,0x00,0x00},/*"n",78*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x19,0x80,0x30,0xC0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x30,0xC0,0x30,0xC0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"o",79*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x77,0x80,0x38,0xC0,0x30,0x60,0x30,0x60,0x30,0x60,0x30,0x60,0x30,0x60,0x30,0x60,0x30,0xC0,0x38,0xC0,0x37,0x80,0x30,0x00,0x30,0x00,0x7C,0x00},/*"p",80*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x40,0x31,0xC0,0x30,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x20,0xC0,0x31,0xC0,0x1E,0xC0,0x00,0xC0,0x00,0xC0,0x03,0xE0},/*"q",81*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF9,0xE0,0x1A,0x60,0x1C,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"r",82*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xE0,0x18,0x60,0x30,0x20,0x30,0x00,0x1C,0x00,0x0F,0x80,0x01,0xC0,0x20,0x60,0x20,0x60,0x30,0xC0,0x3F,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"s",83*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x04,0x00,0x0C,0x00,0x0C,0x00,0x7F,0x80,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x40,0x0C,0x40,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"t",84*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x40,0x71,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x39,0xE0,0x1E,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"u",85*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xF0,0x38,0x60,0x18,0x40,0x18,0x40,0x0C,0x80,0x0C,0x80,0x0C,0x80,0x07,0x00,0x07,0x00,0x07,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"v",86*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF7,0xB0,0x63,0x20,0x63,0x20,0x67,0x20,0x37,0x20,0x35,0xC0,0x39,0xC0,0x39,0xC0,0x39,0xC0,0x10,0x80,0x10,0x80,0x00,0x00,0x00,0x00,0x00,0x00},/*"w",87*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7D,0xE0,0x18,0x80,0x19,0x80,0x0D,0x00,0x0E,0x00,0x06,0x00,0x07,0x00,0x0B,0x00,0x19,0x80,0x11,0xC0,0x7B,0xE0,0x00,0x00,0x00,0x00,0x00,0x00},/*"x",88*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7D,0xE0,0x38,0x80,0x18,0x80,0x18,0x80,0x0D,0x00,0x0D,0x00,0x0D,0x00,0x06,0x00,0x06,0x00,0x02,0x00,0x04,0x00,0x04,0x00,0x28,0x00,0x38,0x00},/*"y",89*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xC0,0x21,0x80,0x23,0x80,0x03,0x00,0x07,0x00,0x06,0x00,0x0E,0x00,0x0C,0x20,0x1C,0x20,0x18,0x60,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"z",90*/
{0x00,0x00,0x00,0x00,0x00,0xC0,0x01,0x80,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x03,0x00,0x04,0x00,0x03,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x80,0x00,0xC0,0x00,0x00},/*"{",91*/
{0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00},/*"|",92*/
{0x00,0x00,0x00,0x00,0x30,0x00,0x18,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x0C,0x00,0x02,0x00,0x0C,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x18,0x00,0x30,0x00,0x00,0x00},/*"}",93*/
{0x00,0x00,0x38,0x00,0x24,0x00,0x42,0x10,0x41,0x20,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"~",94*/
};
#endif
