#include "bot_ai.h"

#define SPELL_CHAIN_HEAL          SPELL_CHAIN_HEAL_A[SPELL_LEVEL]
#define SPELL_LESSER_HEALING      SPELL_LESSER_HEALING_A[SPELL_LEVEL]

#define SPELL_SHAMAN_REZZ         SPELL_SHAMAN_REZZ_A[SPELL_LEVEL]

//Nukes
#define SPELL_FLAME_SHOCK         SPELL_FLAME_SHOCK_A[SPELL_LEVEL]
#define SPELL_LIGHTNING_BOLT      SPELL_LIGHTNING_BOLT_A[SPELL_LEVEL]
#define SPELL_EARTH_SHOCK         SPELL_EARTH_SHOCK_A[SPELL_LEVEL]

//BUFFS
//#define SPELL_WINDFURY_WEAPON   10486 //rank 3
#define SPELL_LIGHTNING_SHIELD    SPELL_LIGHTNING_SHIELD_A[SPELL_LEVEL]
#define SPELL_STONESKIN_AURA      SPELL_STONESKIN_AURA_A[SPELL_LEVEL]
#define SPELL_HEALINGSTREAM_AURA  SPELL_HEALINGSTREAM_AURA_A[SPELL_LEVEL]
#define SPELL_MANASPRING_AURA     SPELL_MANASPRING_AURA_A[SPELL_LEVEL]

//Totems
#define SPELL_STONESKIN_TOTEM     SPELL_STONESKIN_TOTEM_A[SPELL_LEVEL]
#define SPELL_HEALINGSTREAM_TOTEM SPELL_HEALINGSTREAM_TOTEM_A[SPELL_LEVEL]
#define SPELL_MANASPRING_TOTEM    SPELL_MANASPRING_TOTEM_A[SPELL_LEVEL]
#define SPELL_SEARING_TOTEM       SPELL_SEARING_TOTEM_A[SPELL_LEVEL]
#define SPELL_WINDFURY_TOTEM      SPELL_WINDFURY_TOTEM_A[SPELL_LEVEL]

uint32 SPELL_CHAIN_HEAL_A[] = { 0, 0, 0, 0, 1064, 10623, 25422, 25423, 55459, 55459 };
uint32 SPELL_LESSER_HEALING_A[] = { 0, 0, 8004, 8010, 10466, 10467, 10468, 25420, 49275, 49275 };

uint32 SPELL_LIGHTNING_BOLT_A[] = { 403, 548, 915, 6041, 10392, 15207, 25448, 45296, 45296 };
uint32 SPELL_FLAME_SHOCK_A[] = { 0, 8050, 8052, 8053, 10447, 10448, 29228, 25457, 49232, 49232 };
uint32 SPELL_EARTH_SHOCK_A[] = { 8042, 8045, 8046, 10412, 10413, 10414, 10414, 25454, 49230, 49230 };

uint32 SPELL_LIGHTNING_SHIELD_A[] = {324, 325, 905, 945, 8134, 10431, 25469, 25472, 49280, 49280 };
uint32 SPELL_SHAMAN_REZZ_A[] = {0, 2008, 20609, 20610, 20776, 20776, 20777, 25590, 49277, 49277 };

uint32 SPELL_STONESKIN_AURA_A[] = { 8072, 8156, 8156, 10403, 10404, 10405, 25506, 58752, 58752, 58752 };
uint32 SPELL_STONESKIN_TOTEM_A[] = { 8071, 8154, 8155, 10406, 10407, 10408, 25508, 25509, 25509, 25509 };

uint32 SPELL_HEALINGSTREAM_AURA_A[] = { 0, 0, 5672, 6371, 6372, 10460, 10461, 25566, 58765, 58765 };
uint32 SPELL_HEALINGSTREAM_TOTEM_A[] = { 0, 0, 5394, 6375, 6377, 10462, 10463, 25567, 58757, 58757 };

uint32 SPELL_MANASPRING_AURA_A[] = { 0, 0, 5677, 10491, 10493, 10494, 25569, 25569, 58775, 58775 };
uint32 SPELL_MANASPRING_TOTEM_A[] = { 0, 0, 5675, 10495, 10496, 10497, 25570, 25570, 58771, 58771 };

uint32 SPELL_SEARING_TOTEM_A[] = { 0, 3599, 6363, 6364, 6365, 10437, 10438, 25533, 58699, 58699 };

uint32 SPELL_WINDFURY_TOTEM_A[] = { 0, 0, 0, 0, 8512, 8512, 8512, 8512, 8512, 8512 };
