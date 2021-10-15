# QMK_UNICODE_KEYS
Add the following to your keymap.c

```c
#include "qmk_unicode_keys.h"
```


Add the following to your rules.mk

```c
UNICODEMAP_ENABLE = yes
```

Add the following to your config.h

```c 
#define UNICODE_SELECTED_MODES UC_WINC // UC_MAC UC_LNX
```



|      Key     |  Description |  Win  |   Mac |  Lnx  |
| ------------ | ------------ | ----- | ----- | ----- |
|   UK_A       |   a and A    |   ✓   |   ✓   |   ✓   |
|   UK_B       |   b and B    |   ✓   |   ✓   |   ✓   |
|   UK_C       |   c and C    |   ✓   |   ✓   |   ✓   |
|   UK_D       |   d and D    |   ✓   |   ✓   |   ✓   |
|   UK_E       |   e and E    |   ✓   |   ✓   |   ✓   |
|   UK_F       |   f and F    |   ✓   |   ✓   |   ✓   |
|   UK_G       |   g and G    |   ✓   |   ✓   |   ✓   |
|   UK_H       |   h and H    |   ✓   |   ✓   |   ✓   |
|   UK_I       |   i and I    |   ✓   |   ✓   |   ✓   |
|   UK_J       |   j and J    |   ✓   |   ✓   |   ✓   |
|   UK_K       |   k and K    |   ✓   |   ✓   |   ✓   |
|   UK_L       |   l and L    |   ✓   |   ✓   |   ✓   |
|   UK_M       |   m and M    |   ✓   |   ✓   |   ✓   |
|   UK_N       |   n and N    |   ✓   |   ✓   |   ✓   |
|   UK_O       |   o and O    |   ✓   |   ✓   |   ✓   |
|   UK_P       |   p and P    |   ✓   |   ✓   |   ✓   |
|   UK_Q       |   q and Q    |   ✓   |   ✓   |   ✓   |
|   UK_R       |   r and R    |   ✓   |   ✓   |   ✓   |
|   UK_S       |   s and S    |   ✓   |   ✓   |   ✓   |
|   UK_T       |   t and T    |   ✓   |   ✓   |   ✓   |
|   UK_U       |   u and U    |   ✓   |   ✓   |   ✓   |
|   UK_V       |   v and V    |   ✓   |   ✓   |   ✓   |
|   UK_W       |   w and W    |   ✓   |   ✓   |   ✓   |
|   UK_X       |   x and X    |   ✓   |   ✓   |   ✓   |
|   UK_Y       |   y and Y    |   ✓   |   ✓   |   ✓   |
|   UK_Z       |   z and Z    |   ✓   |   ✓   |   ✓   |
|   UK_TRI     |   ı and İ    |   ✓   |   ✓   |   ✓   |
|   UK_TRO     |   ö and Ö    |   ✓   |   ✓   |   ✓   |
|   UK_TRS     |   ş and Ş    |   ✓   |   ✓   |   ✓   |
|   UK_TRU     |   ü and Ü    |   ✓   |   ✓   |   ✓   |
|   UK_TRC     |   ç and Ç    |   ✓   |   ✓   |   ✓   |
|   UK_TRG     |   ğ and Ğ    |   ✓   |   ✓   |   ✓   |
|   UK_TRAA    |   â and Â    |   ✓   |   ✓   |   ✓   |
|   UK_1       |   1 and !    |   ✓   |   ✓   |   ✓   |
|   UK_2       |   2 and @    |   ✓   |   ✓   |   ✓   |
|   UK_3       |   3 and #    |   ✓   |   ✓   |   ✓   |
|   UK_4       |   4 and $    |   ✓   |   ✓   |   ✓   |
|   UK_5       |   5 and %    |   ✓   |   ✓   |   ✓   |
|   UK_6       |   6 and ^    |   ✓   |   ✓   |   ✓   |
|   UK_7       |   7 and &    |   ✓   |   ✓   |   ✓   |
|   UK_8       |   8 and *    |   ✓   |   ✓   |   ✓   |
|   UK_9       |   9 and (    |   ✓   |   ✓   |   ✓   |
|   UK_0       |   0 and )    |   ✓   |   ✓   |   ✓   | 
|   UK_EXLM    |   !          |   ✓   |   ✓   |   ✓   |
|   UK_DQT     |   "          |   ✓   |   ✓   |   ✓   |
|   UK_HASH    |   #          |   ✓   |   ✓   |   ✓   |
|   UK_DLR     |   $          |   ✓   |   ✓   |   ✓   |
|   UK_PERC    |   %          |   ✓   |   ✓   |   ✓   |
|   UK_AMPR    |   &          |   ✓   |   ✓   |   ✓   |
|   UK_QUOT    |   '          |   ✓   |   ✓   |   ✓   |
|   UK_LPRN    |   (          |   ✓   |   ✓   |   ✓   |
|   UK_RPRN    |   )          |   ✓   |   ✓   |   ✓   |
|   UK_ASTR    |   *          |   ✓   |   ✓   |   ✓   |
|   UK_PLUS    |   +          |   ✓   |   ✓   |   ✓   |
|   UK_COMMA   |   ,          |   ✓   |   ✓   |   ✓   |
|   UK_MINUS   |   -          |   ✓   |   ✓   |   ✓   |
|   UK_DOT     |   .          |   ✓   |   ✓   |   ✓   |
|   UK_SLSH    |   /          |   ✓   |   ✓   |   ✓   |
|   UK_COLN    |   :          |   ✓   |   ✓   |   ✓   |
|   UK_SCLN    |   ;          |   ✓   |   ✓   |   ✓   |
|   UK_LT      |   <          |   ✓   |   ✓   |   ✓   |
|   UK_EQL     |   =          |   ✓   |   ✓   |   ✓   |
|   UK_GT      |   >          |   ✓   |   ✓   |   ✓   |
|   UK_QUES    |   ?          |   ✓   |   ✓   |   ✓   |
|   UK_AT      |   @          |   ✓   |   ✓   |   ✓   |
|   UK_LBRC    |   [          |   ✓   |   ✓   |   ✓   |
|   UK_BSLS    |   \          |   ✓   |   ✓   |   ✓   |
|   UK_RBRC    |   ]          |   ✓   |   ✓   |   ✓   |
|   UK_CIRC    |   ^          |   ✓   |   ✓   |   ✓   |
|   UK_UNDS    |   _          |   ✓   |   ✓   |   ✓   |
|   UK_GRV     |   `          |   ✓   |   ✓   |   ✓   |
|   UK_LCBR    |   {          |   ✓   |   ✓   |   ✓   |
|   UK_PIPE    |   |          |   ✓   |   ✓   |   ✓   |
|   UK_RCBR    |   }          |   ✓   |   ✓   |   ✓   |
|   UK_TILD    |   ~          |   ✓   |   ✓   |   ✓   |
