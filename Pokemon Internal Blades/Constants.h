/// <summary>
/// Defines all constants needed for entire program
/// </summary>


// ---------------------------------------------------------------------------------------------------------------------

/// <summary>
/// NONE should be used only when the program is asking for a second type and the pokemon does not technically have one.
/// </summary>
#define NONE			0

/// <summary>
/// Normal Type
/// Supereffective Against:			N/A
/// Half Damage Dealt:				Fighting
/// No Damage to:					Ghost
/// No Damage from:					Ghost
/// </summary>
#define NORMAL			1

/// <summary>
/// Fighting Type
/// Supereffective Against:			Normal, Ice, Rock, Dark, Steel
/// Half Damage Dealt:				Poison, Flying, Psychic, Bug
/// No Damage to:					Ghost
/// No Damage from:					N/A
/// </summary>
#define FIGHTING		2

/// <summary>
/// Fire Type
/// Supereffective Against:			Grass, Ice, Steel, Bug		
/// Half Damage Dealt:				Fire, Water, Rock, Dragon
/// No Damage to:					N/A
/// No Damage from:					N/A
/// </summary>
#define FIRE			3

/// <summary>
/// Water Type
/// Supereffective Against:			Fire, Ground, Rock	
/// Half Damage Dealt:				Water, Grass, Dragon
/// No Damage to:					N/A
/// No Damage from:					N/A
/// </summary>
#define WATER			4

/// <summary>
/// Ice Type
/// Supereffective Against:			Grass, Flying, Ground, Dragon	
/// Half Damage Dealt:				Fire, Water, Ice, Steel
/// No Damage to:					N/A
/// No Damage from:					N/A
/// </summary>
#define ICE				5

/// <summary>
/// Grass Type
/// Supereffective Against:			Water, Ground, Rock		
/// Half Damage Dealt:				Fire, Grass, Poison, Flying, Bug, Dragon, Steel
/// No Damage to:					N/A
/// No Damage from:					N/A
/// </summary>
#define GRASS			6

/// <summary>
/// Bug Type
/// Supereffective Against:			Psychic, Dark, Grass		
/// Half Damage Dealt:				Fire, Fighting, Poison, Fighting, Ghost, Steel
/// No Damage to:					N/A
/// No Damage from:					N/A
/// </summary>
#define BUG				7

/// <summary>
/// Poison Type
/// Supereffective Against:			Grass		
/// Half Damage Dealt:				Poison, Ground, Rock, Ghost
/// No Damage to:					Steel
/// No Damage from:					N/A
/// </summary>
#define POISON			8

/// <summary>
/// Flying Type
/// Supereffective Against:			Bug, Grass, Fighting		
/// Half Damage Dealt:				Electric, Rock, Steel
/// No Damage to:					N/A
/// No Damage from:					Ground
/// </summary>
#define FLYING			9

/// <summary>
/// Psychic Type
/// Supereffective Against:			Fighting, Poison		
/// Half Damage Dealt:				Psychic, Steel
/// No Damage to:					Dark
/// No Damage from:					N/A
/// </summary>
#define PSYCHIC			10

/// <summary>
/// Ghost Type
/// Supereffective Against:			Psychic, Ghost		
/// Half Damage Dealt:				Dark, Steel
/// No Damage to:					Normal
/// No Damage from:					Normal, Fighting
/// </summary>
#define GHOST			11

/// <summary>
/// Dark Type
/// Supereffective Against:			Psychic, Ghost		
/// Half Damage Dealt:				Fighting, Dark, Steel
/// No Damage to:					N/A
/// No Damage from:					Psychic
/// </summary>
#define DARK			12

/// <summary>
/// Ground Type
/// Supereffective Against:			Fire, Electric, Poison, Rock, Steel		
/// Half Damage Dealt:				Water, Grass, Ice
/// No Damage to:					Flying
/// No Damage from:					Electric
/// </summary>
#define GROUND			13

/// <summary>
/// Steel Type
/// Supereffective Against:			Ice, Bug		
/// Half Damage Dealt:				Fire, Ice, Ground
/// No Damage to:					N/A
/// No Damage from:					Poison
/// </summary>
#define STEEL			14

/// <summary>
/// Rock Type
/// Supereffective Against:			Fire, Ice, Flying, Bug		
/// Half Damage Dealt:				Fighting, Ground, Steel
/// No Damage to:					N/A
/// No Damage from:					N/A
/// </summary>
#define ROCK			15

/// <summary>
/// Electric Type
/// Supereffective Against:			Water, Flying		
/// Half Damage Dealt:				Electric, Grass, Dragon
/// No Damage to:					Ground
/// No Damage from:					N/A
/// </summary>
#define ELECTRIC		16

/// <summary>
/// Dragon Type
/// Supereffective Against:			Dragon		
/// Half Damage Dealt:				Dragon, Ice
/// No Damage to:					N/A
/// No Damage from:					N/A
/// </summary>
#define DRAGON			17

/// <summary>
/// Shadow Type
/// Supereffective Against:			All but Shadow		
/// Half Damage Dealt:				Shadow
/// No Damage to:					N/A
/// No Damage from:					N/A
/// </summary>
#define SHADOW			18

/// <summary>
/// ??? Type
/// Supereffective Against:			N/A
/// Double Damage taken:			N/A
/// Half Damage Dealt:				N/A
/// No Damage to:					N/A
/// No Damage from:					N/A
/// </summary>
#define UNKNOWN			19

// ---------------------------------------------------------------------------------------------------------------------

/// <summary>
/// Base MP of 5
/// </summary>
#define LOW_MP			5

/// <summary>
/// Base MP of 10
/// </summary>
#define LOW_MED_MP		10

/// <summary>
/// Base MP of 15
/// </summary>
#define MEDIUM_MP		15

/// <summary>
/// Base MP of 20
/// </summary>
#define MED_HIGH_MP		20

/// <summary>
/// Base MP of 30
/// </summary>
#define HIGH_MP			30

// ---------------------------------------------------------------------------------------------------------------------

// Nature Definitions
// Used to modify stats in Nature Class

/// <summary>
/// Increases the stat by 1.1
/// </summary>
#define INCREASE_STAT	1.1

/// <summary>
/// Normal Stat: 1.0
/// </summary>
#define NORMAL_STAT		1.0

/// <summary>
/// Decreases the stat by 0.9
/// </summary>
#define DECREASE_STAT	0.9

// ---------------------------------------------------------------------------------------------------------------------

/// <summary>
/// True
/// </summary>
#define YES				true

/// <summary>
/// False
/// </summary>
#define NO				false

// ---------------------------------------------------------------------------------------------------------------------

/// <summary>
/// Blank Name Definition
///	Defines EMPTY as ""
/// </summary>
#define EMPTY			""

// ---------------------------------------------------------------------------------------------------------------------

/// <summary>
/// Poisoned Effects: The Pokémon loses 1/8th Max HP each turn;
///	 For every 4 steps the trainer takes, the Pokémon loses 1 HP until it reaches 1 HP remaining
/// </summary>
#define POISONED		1

/// <summary>
/// Paralysis Effects: The Pokémon afflicted's Speed stat is reduced to 25% of it's Maximum. 
///  Pokémon with the Quick Feet ability are not affected by the Speed reduction
///  The Pokémon has a 25% chance of being unable to attack each turn
/// </summary>
#define PARALYZED		2

/// <summary>
/// Burned Effects: Each turn, the Pokémon afflicted with the Burn loses 1/8th of it's Max HP
///  The Pokémon's Physical Attack Stat is cut by Half. This effect does not work on Pokémon with the Guts ability
///  The Pokémon's Special Attack Stat is doubled on Pokémon with the Heat Rampage ability
/// </summary>
#define BURNED			3

/// <summary>
/// Frozen Effects: The Pokémon cannot use any attacks (apart from those that thaw it)
/// </summary>
#define FROZEN			4

/// <summary>
/// Sleeping Effects: The Pokémon cannot attack for 1 to 7 turns, the turn count is lowered with the Early Bird ability
///  Sleep Talk & Snore can be used
///  Allows the attacks Dream Eater & Nightmare as well as the ability Bad Dreams to be used against you
/// </summary>
#define SLEEPING		5

/// <summary>
/// Attracted Effects: The Pokémon afflicted cannot attack 50% of the time
/// </summary>
#define ATTRACTED		6

/// <summary>
/// Confusion Effects: The Pokémon afflicted cannot attack 50% of the time for 1-4 turns
///  Raises Evasion for Pokémon with the Tangled Feed ability
/// </summary>
#define	CONFUSED		7

/// <summary>
/// Cursed Effects: The Pokémon afflicted loses 1/4 of it's Max HP each turn
/// </summary>
#define CURSED			8

/// <summary>
/// Badly Poisoned Effects: The Pokémon loses 1/16th Max HP for the first turn and then adds 1/16th to the amount to be lost 
///  so on 2nd turn 2/16th, 3rd 3/16th and so on until the Pokémon faints
/// </summary>
#define BAD_POISON		9

// ---------------------------------------------------------------------------------------------------------------------

/// <summary>
/// Gender Definition: Male
/// </summary>
#define MALE			0

/// <summary>
/// Gender Definition: Female
/// </summary>
#define FEMALE			1

// ---------------------------------------------------------------------------------------------------------------------

/// <summary>
/// Default Trainer ID Definition
/// </summary>
#define DEFAULT_ID		100000l