
#include "bot_ai.h"


#define SPELL_MARK_OF_THE_WILD      SPELL_MARK_OF_THE_WILD_A[SPELL_LEVEL]
#define SPELL_THORNS                SPELL_THORNS_A[SPELL_LEVEL]
#define SPELL_HEALING_TOUCH         SPELL_HEALING_TOUCH_A[SPELL_LEVEL]
#define SPELL_REGROWTH              SPELL_REGROWTH_A[SPELL_LEVEL]
#define SPELL_REJUVENATION          SPELL_REJUVENATION_A[SPELL_LEVEL]
#define SPELL_REBIRTH               SPELL_REBIRTH_A[SPELL_LEVEL]
#define SPELL_CURE_POISON           SPELL_CURE_POISON_A[SPELL_LEVEL]


//0#define SPELL_RESURRECTION       10881    //rank 4
#define SPELL_WARSTOMP              20549    //racial ability

//FERAL SPELLS
#define SPELL_CAT_FORM              768
#define SPELL_CAT_FORM_MOD          3025
#define SPELL_BEAR_FORM             9634
#define SPELL_BEAR_FORM_MOD         1178

#define SPELL_DEMORALIZING_ROAR     SPELL_DEMORALIZING_ROAR_A[SPELL_LEVEL]
#define SPELL_SWIPE                 SPELL_SWIPE_A[SPELL_LEVEL]

#define SPELL_CLAW                  SPELL_CLAW_A[SPELL_LEVEL]
#define SPELL_RAKE                  SPELL_RAKE_A[SPELL_LEVEL]
#define SPELL_SHRED                 SPELL_SHRED_A[SPELL_LEVEL]
#define SPELL_RIP                   SPELL_RIP_A[SPELL_LEVEL]
#define SPELL_MANGLE_CAT            SPELL_MANGLE_CAT_A[SPELL_LEVEL]

//BALANCE SPELLS
#define SPELL_MOONFIRE              SPELL_MOONFIRE_A[SPELL_LEVEL]
#define SPELL_STARFIRE              SPELL_STARFIRE_A[SPELL_LEVEL]
#define SPELL_WRATH                 SPELL_WRATH_A[SPELL_LEVEL]
#define SPELL_FAIRIE_FIRE           SPELL_FAIRIE_FIRE_A[SPELL_LEVEL]

#define SPELL_NOGGENFOGGER_SMALL    16595
#define SPELL_NOGGENFOGGER_SKELETON 16591


uint32 SPELL_MARK_OF_THE_WILD_A[] = { 1126, 5232, 6756, 5234, 8907, 21849, 21850, 26991, 48470 };
uint32 SPELL_THORNS_A[] = { 467, 782, 1075, 8914, 9756, 9910, 26992, 26992, 53307, 53307 };
uint32 SPELL_HEALING_TOUCH_A[] = { 5185, 5187, 5189, 6778, 9758, 9889, 26978, 26979, 26979 };
uint32 SPELL_REGROWTH_A[] = { 0, 8936, 8939, 8941, 9750, 9857, 9858, 26980, 96980, 48442, 48442 };
uint32 SPELL_REJUVENATION_A[] = { 774, 1058, 2090, 2091, 3627, 9840, 26981, 26982, 48440, 48440 };
uint32 SPELL_REBIRTH_A[] = { 0, 0, 2006, 2010, 10880, 10881, 20770, 25435, 25435 };
uint32 SPELL_CURE_POISON_A[] = { 0, 8946, 8946, 14253, 14253, 14253, 14253, 14253, 14253 };


uint32 SPELL_DEMORALIZING_ROAR_A[] = { 0, 99, 1735, 9490, 9747, 9898, 26998, 26998, 48559, 48560, 48560 };
uint32 SPELL_SWIPE_A[] = { 0, 779, 780, 769, 9754, 9908, 26997, 26997, 26997 };

uint32 SPELL_CLAW_A[] = { 0, 0, 1082, 3029, 5201, 9849, 9850, 27000, 48569, 48569 };
uint32 SPELL_RAKE_A[] = { 0, 0, 1822, 1823, 1824, 9904, 27003, 27003, 48574, 48574 };
uint32 SPELL_SHRED_A[] = { 0, 0, 5221, 6800, 8992, 9829, 9830, 27001, 27002, 27002 };
uint32 SPELL_RIP_A[] = { 0, 0, 1079, 9492, 9493, 9752, 9894, 9896, 27008, 27008 };
uint32 SPELL_MANGLE_CAT_A[] = { 0, 0, 0, 0, 0, 33982, 33983, 48565, 48566, 48566 };

uint32 SPELL_MOONFIRE_A[] = { 8921, 8924, 8925, 8928, 8929, 9834, 26987, 26988, 26988 };
uint32 SPELL_STARFIRE_A[] = { 0, 0, 2912, 8950, 8951, 9875, 25298, 26986, 26986 };
uint32 SPELL_WRATH_A[] = { 5176, 5178, 5179, 5180, 8905, 9912, 26984, 26985, 48461, 48461 };
uint32 SPELL_FAIRIE_FIRE_A[] = { 0, 16857, 16857, 17390, 17391, 17392, 27011, 27011, 48475, 48475 };
