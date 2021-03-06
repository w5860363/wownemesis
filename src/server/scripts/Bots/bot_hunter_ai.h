

#include "bot_ai.h"


#define AUTO_SHOT           75  
#define TRANQ_SHOT           TRANQ_SHOT_A[SPELL_LEVEL]
#define SCORPID_STING        SCORPID_STING_A[SPELL_LEVEL]
#define HUNTERS_MARK         HUNTERS_MARK_A[SPELL_LEVEL]

#define ARCANE_SHOT          ARCANE_SHOT_A[SPELL_LEVEL]
#define CHIMERA_SHOT         CHIMERA_SHOT_A[SPELL_LEVEL]
#define AIMED_SHOT           AIMED_SHOT_A[SPELL_LEVEL]
#define SILENCING_SHOT       SILENCING_SHOT_A[SPELL_LEVEL]
#define ASPECT_OF_THE_WILD   ASPECT_OF_THE_WILD_A[SPELL_LEVEL]

uint32 TRANQ_SHOT_A[] = { 0, 0, 19801, 19801, 19801, 19801, 19801, 19801, 19801, 19801 };
uint32 HUNTERS_MARK_A[] = { 14325, 14325, 14325, 14325, 14325, 14325, 14325, 14325, 14325, 14325 };
uint32 SCORPID_STING_A[] = { 0, 0, 0, 0, 0, 0, 3043, 3043, 3043, 3043 };

uint32 ARCANE_SHOT_A[] = { 3044, 14281, 14282, 14284, 14285, 14286, 27019, 49044, 49045, 49045 };
uint32 CHIMERA_SHOT_A[] = { 0, 0, 0, 0, 0, 0, 53209, 53209, 53209, 53209 };
uint32 AIMED_SHOT_A[] = { 0, 0, 19434, 20900, 20902, 20903, 20904, 49049, 49050, 49050 };
uint32 SILENCING_SHOT_A[] = { 0, 0, 0, 34490, 34490, 34490, 34490, 34490, 34490, 34490 };

uint32 ASPECT_OF_THE_WILD_A[] = {0, 0, 0, 0, 20043, 20190, 27045, 49071, 49071 };

