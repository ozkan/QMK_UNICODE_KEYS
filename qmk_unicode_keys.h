#include "process_unicode.h"

enum unicode_names {
  _U_UK_EXLM,
  _U_UK_DQT,
  _U_UK_HASH,
  _U_UK_DLR,
  _U_UK_PERC,
  _U_UK_AMPR,
  _U_UK_QUOT,
  _U_UK_LPRN,
  _U_UK_RPRN,
  _U_UK_ASTR,
  _U_UK_PLUS,
  _U_UK_COMMA,
  _U_UK_MINUS,
  _U_UK_DOT,
  _U_UK_SLSH,
  _U_UK_0,
  _U_UK_1,
  _U_UK_2,
  _U_UK_3,
  _U_UK_4,
  _U_UK_5,
  _U_UK_6,
  _U_UK_7,
  _U_UK_8,
  _U_UK_9,
  _U_UK_COLN,
  _U_UK_SCLN,
  _U_UK_LT,
  _U_UK_EQL,
  _U_UK_GT,
  _U_UK_QUES,
  _U_UK_AT,
  _U_UK_U_A,
  _U_UK_U_B,
  _U_UK_U_C,
  _U_UK_U_D,
  _U_UK_U_E,
  _U_UK_U_F,
  _U_UK_U_G,
  _U_UK_U_H,
  _U_UK_U_I,
  _U_UK_U_J,
  _U_UK_U_K,
  _U_UK_U_L,
  _U_UK_U_M,
  _U_UK_U_N,
  _U_UK_U_O,
  _U_UK_U_P,
  _U_UK_U_Q,
  _U_UK_U_R,
  _U_UK_U_S,
  _U_UK_U_T,
  _U_UK_U_U,
  _U_UK_U_V,
  _U_UK_U_W,
  _U_UK_U_X,
  _U_UK_U_Y,
  _U_UK_U_Z,
  _U_UK_LBRC,
  _U_UK_BSLS,
  _U_UK_RBRC,
  _U_UK_CIRC,
  _U_UK_UNDS,
  _U_UK_GRV,
  _U_UK_L_A,
  _U_UK_L_B,
  _U_UK_L_C,
  _U_UK_L_D,
  _U_UK_L_E,
  _U_UK_L_F,
  _U_UK_L_G,
  _U_UK_L_H,
  _U_UK_L_I,
  _U_UK_L_J,
  _U_UK_L_K,
  _U_UK_L_L,
  _U_UK_L_M,
  _U_UK_L_N,
  _U_UK_L_O,
  _U_UK_L_P,
  _U_UK_L_Q,
  _U_UK_L_R,
  _U_UK_L_S,
  _U_UK_L_T,
  _U_UK_L_U,
  _U_UK_L_V,
  _U_UK_L_W,
  _U_UK_L_X,
  _U_UK_L_Y,
  _U_UK_L_Z,
  _U_UK_LCBR,
  _U_UK_PIPE,
  _U_UK_RCBR,
  _U_UK_TILD,
  _U_UK_L_TRI,
  _U_UK_L_TRO,
  _U_UK_L_TRS,
  _U_UK_L_TRU,
  _U_UK_L_TRC,
  _U_UK_L_TRG,
  _U_UK_L_TRAA,
  _U_UK_U_TRI,
  _U_UK_U_TRO,
  _U_UK_U_TRS,
  _U_UK_U_TRU,
  _U_UK_U_TRC,
  _U_UK_U_TRG,
  _U_UK_U_TRAA
}; 


const uint32_t PROGMEM unicode_map[] = {
  [_U_UK_EXLM]    = 0X0021, // !
  [_U_UK_DQT]     = 0X0022, // "
  [_U_UK_HASH]    = 0X0023, // #
  [_U_UK_DLR]     = 0X0024, // $
  [_U_UK_PERC]    = 0X0025, // %
  [_U_UK_AMPR]    = 0X0026, // &
  [_U_UK_QUOT]    = 0X0027, // '
  [_U_UK_LPRN]    = 0X0028, // (
  [_U_UK_RPRN]    = 0X0029, // )
  [_U_UK_ASTR]    = 0X002A, // *
  [_U_UK_PLUS]    = 0X002B, // +
  [_U_UK_COMMA]   = 0X002C, // ,
  [_U_UK_MINUS]   = 0X002D, // -
  [_U_UK_DOT]     = 0X002E, // .
  [_U_UK_SLSH]    = 0X002F, // /
  [_U_UK_0]       = 0X0030, // 0
  [_U_UK_1]       = 0X0031, // 1
  [_U_UK_2]       = 0X0032, // 2
  [_U_UK_3]       = 0X0033, // 3
  [_U_UK_4]       = 0X0034, // 4
  [_U_UK_5]       = 0X0035, // 5
  [_U_UK_6]       = 0X0036, // 6
  [_U_UK_7]       = 0X0037, // 7
  [_U_UK_8]       = 0X0038, // 8
  [_U_UK_9]       = 0X0039, // 9
  [_U_UK_COLN]    = 0X003A, // :
  [_U_UK_SCLN]    = 0X003B, // ;
  [_U_UK_LT]      = 0X003C, // <
  [_U_UK_EQL]     = 0X003D, // =
  [_U_UK_GT]      = 0X003E, // >
  [_U_UK_QUES]    = 0X003F, // ?
  [_U_UK_AT]      = 0X0040, // @
  [_U_UK_U_A]     = 0X0041, // A
  [_U_UK_U_B]     = 0X0042, // B
  [_U_UK_U_C]     = 0X0043, // C
  [_U_UK_U_D]     = 0X0044, // D
  [_U_UK_U_E]     = 0X0045, // E
  [_U_UK_U_F]     = 0X0046, // F
  [_U_UK_U_G]     = 0X0047, // G
  [_U_UK_U_H]     = 0X0048, // H
  [_U_UK_U_I]     = 0X0049, // I
  [_U_UK_U_J]     = 0X004A, // J
  [_U_UK_U_K]     = 0X004B, // K
  [_U_UK_U_L]     = 0X004C, // L
  [_U_UK_U_M]     = 0X004D, // M
  [_U_UK_U_N]     = 0X004E, // N
  [_U_UK_U_O]     = 0X004F, // O
  [_U_UK_U_P]     = 0X0050, // P
  [_U_UK_U_Q]     = 0X0051, // Q
  [_U_UK_U_R]     = 0X0052, // R
  [_U_UK_U_S]     = 0X0053, // S
  [_U_UK_U_T]     = 0X0054, // T
  [_U_UK_U_U]     = 0X0055, // U
  [_U_UK_U_V]     = 0X0056, // V
  [_U_UK_U_W]     = 0X0057, // W
  [_U_UK_U_X]     = 0X0058, // X
  [_U_UK_U_Y]     = 0X0059, // Y
  [_U_UK_U_Z]     = 0X005A, // Z
  [_U_UK_LBRC]    = 0X005B, // [
  [_U_UK_BSLS]    = 0X005C, // (backslash)
  [_U_UK_RBRC]    = 0X005D, // ]
  [_U_UK_CIRC]    = 0X005E, // ^
  [_U_UK_UNDS]    = 0X005F, // _
  [_U_UK_GRV]     = 0X0060, // `
  [_U_UK_L_A]     = 0X0061, // a
  [_U_UK_L_B]     = 0X0062, // b
  [_U_UK_L_C]     = 0X0063, // c
  [_U_UK_L_D]     = 0X0064, // d
  [_U_UK_L_E]     = 0X0065, // e
  [_U_UK_L_F]     = 0X0066, // f
  [_U_UK_L_G]     = 0X0067, // g
  [_U_UK_L_H]     = 0X0068, // h
  [_U_UK_L_I]     = 0X0069, // i
  [_U_UK_L_J]     = 0X006A, // j
  [_U_UK_L_K]     = 0X006B, // k
  [_U_UK_L_L]     = 0X006C, // l
  [_U_UK_L_M]     = 0X006D, // m
  [_U_UK_L_N]     = 0X006E, // n
  [_U_UK_L_O]     = 0X006F, // o
  [_U_UK_L_P]     = 0X0070, // p
  [_U_UK_L_Q]     = 0X0071, // q
  [_U_UK_L_R]     = 0X0072, // r
  [_U_UK_L_S]     = 0X0073, // s
  [_U_UK_L_T]     = 0X0074, // t
  [_U_UK_L_U]     = 0X0075, // u
  [_U_UK_L_V]     = 0X0076, // v
  [_U_UK_L_W]     = 0X0077, // w
  [_U_UK_L_X]     = 0X0078, // x
  [_U_UK_L_Y]     = 0X0079, // y
  [_U_UK_L_Z]     = 0X007A, // z
  [_U_UK_LCBR]    = 0X007B, // {
  [_U_UK_PIPE]    = 0X007C, // |
  [_U_UK_RCBR]    = 0X007D, // }
  [_U_UK_TILD]    = 0X007E, // ~
  [_U_UK_L_TRI]   = 0x0131, // ı
  [_U_UK_L_TRO]   = 0x00F6, // ö
  [_U_UK_L_TRS]   = 0x015F, // ş
  [_U_UK_L_TRU]   = 0x00FC, // ü
  [_U_UK_L_TRC]   = 0x00E7, // ç
  [_U_UK_L_TRG]   = 0x011F, // ğ
  [_U_UK_L_TRAA]  =0x00E2,  // â
  [_U_UK_U_TRI]   = 0x0130, // İ
  [_U_UK_U_TRO]   = 0x00D6, // Ö
  [_U_UK_U_TRS]   = 0x015E, // Ş
  [_U_UK_U_TRU]   = 0x00DC, // Ü
  [_U_UK_U_TRC]   = 0x00C7, // Ç
  [_U_UK_U_TRG]   = 0x011E, // Ğ
  [_U_UK_U_TRAA]  = 0x00C2, // Â
};



#define  UK_A  XP(_U_UK_L_A, _U_UK_U_A) // 
#define  UK_B  XP(_U_UK_L_B, _U_UK_U_B) // 
#define  UK_C  XP(_U_UK_L_C, _U_UK_U_C) // 
#define  UK_D  XP(_U_UK_L_D, _U_UK_U_D) // 
#define  UK_E  XP(_U_UK_L_E, _U_UK_U_E) // 
#define  UK_F  XP(_U_UK_L_F, _U_UK_U_F) // 
#define  UK_G  XP(_U_UK_L_G, _U_UK_U_G) // 
#define  UK_H  XP(_U_UK_L_H, _U_UK_U_H) // 
#define  UK_I  XP(_U_UK_L_I, _U_UK_U_I) // 
#define  UK_J  XP(_U_UK_L_J, _U_UK_U_J) // 
#define  UK_K  XP(_U_UK_L_K, _U_UK_U_K) // 
#define  UK_L  XP(_U_UK_L_L, _U_UK_U_L) // 
#define  UK_M  XP(_U_UK_L_M, _U_UK_U_M) // 
#define  UK_N  XP(_U_UK_L_N, _U_UK_U_N) // 
#define  UK_O  XP(_U_UK_L_O, _U_UK_U_O) // 
#define  UK_P  XP(_U_UK_L_P, _U_UK_U_P) // 
#define  UK_Q  XP(_U_UK_L_Q, _U_UK_U_Q) // 
#define  UK_R  XP(_U_UK_L_R, _U_UK_U_R) // 
#define  UK_S  XP(_U_UK_L_S, _U_UK_U_S) // 
#define  UK_T  XP(_U_UK_L_T, _U_UK_U_T) // 
#define  UK_U  XP(_U_UK_L_U, _U_UK_U_U) // 
#define  UK_V  XP(_U_UK_L_V, _U_UK_U_V) // 
#define  UK_W  XP(_U_UK_L_W, _U_UK_U_W) // 
#define  UK_X  XP(_U_UK_L_X, _U_UK_U_X) // 
#define  UK_Y  XP(_U_UK_L_Y, _U_UK_U_Y) // 
#define  UK_Z  XP(_U_UK_L_Z, _U_UK_U_Z) // 

#define  UK_TRI  XP(_U_UK_L_TRI,  _U_UK_U_TRI) // ı İ
#define  UK_TRO  XP(_U_UK_L_TRO,  _U_UK_U_TRO) // ö Ö
#define  UK_TRS  XP(_U_UK_L_TRS,  _U_UK_U_TRS) // ş Ş
#define  UK_TRU  XP(_U_UK_L_TRU,  _U_UK_U_TRU) // ü Ü
#define  UK_TRC  XP(_U_UK_L_TRC,  _U_UK_U_TRC) // ç Ç
#define  UK_TRG  XP(_U_UK_L_TRG,  _U_UK_U_TRG) // ğ Ğ
#define  UK_TRAA XP(_U_UK_L_TRAA, _U_UK_U_TRAA)// â Â

#define  UK_1  XP(_U_UK_1, _U_UK_EXLM)
#define  UK_2  XP(_U_UK_2, _U_UK_AT)
#define  UK_3  XP(_U_UK_3, _U_UK_HASH)
#define  UK_4  XP(_U_UK_4, _U_UK_DLR)
#define  UK_5  XP(_U_UK_5, _U_UK_PERC)
#define  UK_6  XP(_U_UK_6, _U_UK_CIRC)
#define  UK_7  XP(_U_UK_7, _U_UK_AMPR)
#define  UK_8  XP(_U_UK_8, _U_UK_ASTR)
#define  UK_9  XP(_U_UK_9, _U_UK_LPRN)
#define  UK_0  XP(_U_UK_0, _U_UK_RPRN)

#define UK_EXLM  _U_UK_EXLM
#define UK_DQT   _U_UK_DQT
#define UK_HASH  _U_UK_HASH
#define UK_DLR   _U_UK_DLR
#define UK_PERC  _U_UK_PERC
#define UK_AMPR  _U_UK_AMPR
#define UK_QUOT  _U_UK_QUOT
#define UK_LPRN  _U_UK_LPRN
#define UK_RPRN  _U_UK_RPRN
#define UK_ASTR  _U_UK_ASTR
#define UK_PLUS  _U_UK_PLUS
#define UK_COMMA _U_UK_COMMA
#define UK_MINUS _U_UK_MINUS
#define UK_DOT   _U_UK_DOT
#define UK_SLSH  _U_UK_SLSH
#define UK_COLN  _U_UK_COLN
#define UK_SCLN  _U_UK_SCLN
#define UK_LT    _U_UK_LT
#define UK_EQL   _U_UK_EQL
#define UK_GT    _U_UK_GT
#define UK_QUES  _U_UK_QUES
#define UK_AT    _U_UK_AT
#define UK_LBRC  _U_UK_LBRC
#define UK_BSLS  _U_UK_BSLS
#define UK_RBRC  _U_UK_RBRC
#define UK_CIRC  _U_UK_CIRC
#define UK_UNDS  _U_UK_UNDS
#define UK_GRV   _U_UK_GRV
#define UK_LCBR  _U_UK_LCBR
#define UK_PIPE  _U_UK_PIPE
#define UK_RCBR  _U_UK_RCBR
#define UK_TILD  _U_UK_TILD
