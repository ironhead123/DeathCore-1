/*
 * Copyright (C) 2016-2017 DeathCore <http://www.noffearrdeathproject.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ScriptPCH.h"
 
enum SkillSpells
{
	SPELL_BLOCK = 107,
	SPELL_BOWS = 264,
	SPELL_CROSSBOWS = 5011,
	SPELL_DAGGERS = 1180,
	SPELL_DUAL_WIELD = 674,
	SPELL_FIST_WEAPONS = 15590,
	SPELL_GUNS = 266,
	SPELL_MAIL = 8737,
	SPELL_PLATE = 750,
	SPELL_ONE_HANDED_AXES = 196,
	SPELL_ONE_HANDED_MACES = 198,
	SPELL_ONE_HANDED_SWORDS = 201,
	SPELL_TWO_HANDED_AXES = 197,
	SPELL_TWO_HANDED_MACES = 199,
	SPELL_TWO_HANDED_SWORDS = 202,
	SPELL_STAVES = 227,
	SPELL_THROW = 2764,
	SPELL_THROWN = 2567,
	SPELL_POLEARMS = 200,
	SPELL_RELIC = 52665,
	SPELL_RELIC_2 = 27764,
	SPELL_RELIC_3 = 27762,
	SPELL_RELIC_4 = 27763,
	SPELL_SHIELD = 9116,
	SPELL_SHOOT = 3018,
	SPELL_SHOOT_WANDS = 5019,
	SPELL_WANDS = 5009
};

class npc_trainer_master : public CreatureScript
{
public:
	npc_trainer_master() : CreatureScript("npc_trainer_master") { }

	bool OnGossipHello(Player* player, Creature* creature)
	{
		AddGossipItemFor(player, 3, "Treinar-me", GOSSIP_SENDER_MAIN, 1);
		SendGossipMenuFor(player, 1, creature->GetGUID());
		return true;
	}

	bool OnGossipSelect(Player* player, Creature* creature, uint32 sender, uint32 action)
	{
		player->PlayerTalkClass->ClearMenus();
		
		if (sender == GOSSIP_SENDER_MAIN)
		{
			switch (action)
			{
			case 1: // Treinar-me
				player->CastSpell(player,63680,true,NULL,NULL,player->GetGUID());
				player->CastSpell(player,63624,true,NULL,NULL,player->GetGUID());

				switch(player->getClass())
				{
				case CLASS_WARRIOR:
					player->LearnSpell(7384, false);
					player->LearnSpell(47436, false);
					player->LearnSpell(47450, false);
					player->LearnSpell(11578, false);
					player->LearnSpell(47465, false);
					player->LearnSpell(47502, false);
					player->LearnSpell(34428, false);
					player->LearnSpell(1715, false);
					player->LearnSpell(2687, false);
					player->LearnSpell(71, false);
					player->LearnSpell(7386, false);
					player->LearnSpell(355, false);
					player->LearnSpell(72, false);
					player->LearnSpell(47437, false);
					player->LearnSpell(57823, false);
					player->LearnSpell(694, false);
					player->LearnSpell(2565, false);
					player->LearnSpell(676, false);
					player->LearnSpell(47520, false);
					player->LearnSpell(20230, false);
					player->LearnSpell(12678, false);
					player->LearnSpell(47471, false);
					player->LearnSpell(1161, false);
					player->LearnSpell(871, false);
					player->LearnSpell(2458, false);
					player->LearnSpell(20252, false);
					player->LearnSpell(47475, false);
					player->LearnSpell(18499, false);
					player->LearnSpell(1680, false);
					player->LearnSpell(6552, false);
					player->LearnSpell(47488, false);
					player->LearnSpell(1719, false);
					player->LearnSpell(23920, false);
					player->LearnSpell(47440, false);
					player->LearnSpell(3411, false);
					player->LearnSpell(64382, false);
					player->LearnSpell(55694, false);
					player->LearnSpell(57755, false);
					player->LearnSpell(42459, false);
					player->LearnSpell(750, false);
					player->LearnSpell(5246, false);
					player->LearnSpell(3127, false);
					player->LearnSpell(34093, false);
					player->LearnSpell(33392, false);
					player->LearnSpell(SPELL_BLOCK, true);
					player->LearnSpell(SPELL_BOWS, true);
					player->LearnSpell(SPELL_CROSSBOWS, true);
					player->LearnSpell(SPELL_DUAL_WIELD, true);
					player->LearnSpell(SPELL_FIST_WEAPONS, true);
					player->LearnSpell(SPELL_GUNS, true);
					player->LearnSpell(SPELL_ONE_HANDED_AXES, true);
					player->LearnSpell(SPELL_ONE_HANDED_MACES, true);
					player->LearnSpell(SPELL_ONE_HANDED_SWORDS, true);
					player->LearnSpell(SPELL_PLATE, true);
					player->LearnSpell(SPELL_POLEARMS, true);
					player->LearnSpell(SPELL_SHIELD, true);
					player->LearnSpell(SPELL_SHOOT, true);
					player->LearnSpell(SPELL_STAVES, true);
					player->LearnSpell(SPELL_THROW, true);
					player->LearnSpell(SPELL_THROWN, true);
					player->LearnSpell(SPELL_TWO_HANDED_AXES, true);
					player->LearnSpell(SPELL_TWO_HANDED_MACES, true);
					player->LearnSpell(SPELL_TWO_HANDED_SWORDS, true);					
					if(player->HasSpell(12294)) // Mortal Strike.
						player->LearnSpell(47486, false);
					if(player->HasSpell(20243)) // Devastate.
						player->LearnSpell(47498, false);
					player->SaveToDB();
					SendGossipMenuFor(player, 1, creature->GetGUID());
					player->PlayerTalkClass->SendCloseGossip();
					break;

				case CLASS_PALADIN:
					player->LearnSpell(3127, false);
					player->LearnSpell(19746, false);
					player->LearnSpell(19752, false);
					player->LearnSpell(750,   false);
					player->LearnSpell(48942, false);
					player->LearnSpell(48782, false);
					player->LearnSpell(48932, false);
					player->LearnSpell(20271, false);
					player->LearnSpell(498,   false);
					player->LearnSpell(10308, false);
					player->LearnSpell(1152,  false);
					player->LearnSpell(10278, false);
					player->LearnSpell(48788, false);
					player->LearnSpell(53408, false);
					player->LearnSpell(48950, false);
					player->LearnSpell(48936, false);
					player->LearnSpell(31789, false);
					player->LearnSpell(62124, false);
					player->LearnSpell(54043, false);
					player->LearnSpell(25780, false);
					player->LearnSpell(1044,  false);
					player->LearnSpell(20217, false);
					player->LearnSpell(48819, false);
					player->LearnSpell(48801, false);
					player->LearnSpell(48785, false);
					player->LearnSpell(5502,  false);
					player->LearnSpell(20164, false);
					player->LearnSpell(10326, false);
					player->LearnSpell(1038,  false);
					player->LearnSpell(53407, false);
					player->LearnSpell(48943, false);
					player->LearnSpell(20165, false);
					player->LearnSpell(48945, false);
					player->LearnSpell(642,   false);
					player->LearnSpell(48947, false);
					player->LearnSpell(20166, false);
					player->LearnSpell(4987,  false);
					player->LearnSpell(48806, false);
					player->LearnSpell(6940,  false);
					player->LearnSpell(48817, false);
					player->LearnSpell(48934, false);
					player->LearnSpell(48938, false);
					player->LearnSpell(25898, false);
					player->LearnSpell(32223, false);
					player->LearnSpell(31884, false);
					player->LearnSpell(54428, false);
					player->LearnSpell(61411, false);
					player->LearnSpell(53601, false);
					player->LearnSpell(33388, false);
					player->LearnSpell(33391, false);
					player->LearnSpell(34093, false);
					player->LearnSpell(33392, false);
					player->LearnSpell(SPELL_BLOCK, true);
					player->LearnSpell(SPELL_ONE_HANDED_AXES, true);
					player->LearnSpell(SPELL_ONE_HANDED_MACES, true);
					player->LearnSpell(SPELL_ONE_HANDED_SWORDS, true);
					player->LearnSpell(SPELL_PLATE, true);
					player->LearnSpell(SPELL_POLEARMS, true);
					player->LearnSpell(SPELL_RELIC_3, true);
					player->LearnSpell(SPELL_SHIELD, true);
					player->LearnSpell(SPELL_TWO_HANDED_AXES, true);
					player->LearnSpell(SPELL_TWO_HANDED_MACES, true);
					player->LearnSpell(SPELL_TWO_HANDED_SWORDS, true);
					if(player->HasSpell(20925)) // Holy Shield.
						player->LearnSpell(48952, false);
					if(player->HasSpell(31935)) // Avenger's Shield.
						player->LearnSpell(48827, false);
					if(player->HasSpell(20911)) // Blessing of Sanctuary.
						player->LearnSpell(25899, false); // Greater Blessing of Sanctuary.
					if(player->HasSpell(20473)) // Holy Shock.
						player->LearnSpell(48825, false);
					if(player->GetTeam() == ALLIANCE)
					{
						player->LearnSpell(31801, false); // Seal of Vengeance.
						player->LearnSpell(13819, false); // Warhorde.
						player->LearnSpell(23214, false); // Charger.
					}
					if(player->GetTeam() == HORDE)
					{
						player->LearnSpell(53736, false); // Seal of Corruption.
						player->LearnSpell(34769, false); // Thalassian Warhorse.
						player->LearnSpell(34767, false); // Thalassian Charger.
					}
					player->SaveToDB();
					SendGossipMenuFor(player, 1, creature->GetGUID());
					player->PlayerTalkClass->SendCloseGossip();
					break;

				case CLASS_HUNTER:
					player->LearnSpell(3043, false);
					player->LearnSpell(3127, false);
					player->LearnSpell(3045,  false);
					player->LearnSpell(3034,  false);
					player->LearnSpell(8737,  false);
					player->LearnSpell(1494,  false);
					player->LearnSpell(13163, false);
					player->LearnSpell(48996, false);
					player->LearnSpell(49001, false);
					player->LearnSpell(49045, false);
					player->LearnSpell(53338, false);
					player->LearnSpell(5116,  false);
					player->LearnSpell(27044, false);
					player->LearnSpell(883,   false);
					player->LearnSpell(2641,  false);
					player->LearnSpell(6991,  false);
					player->LearnSpell(982,   false);
					player->LearnSpell(1515,  false);
					player->LearnSpell(19883, false);
					player->LearnSpell(20736, false);
					player->LearnSpell(48990, false);
					player->LearnSpell(2974,  false);
					player->LearnSpell(6197,  false);
					player->LearnSpell(1002,  false);
					player->LearnSpell(14327, false);
					player->LearnSpell(5118,  false);
					player->LearnSpell(49056, false);
					player->LearnSpell(53339, false);
					player->LearnSpell(49048, false);
					player->LearnSpell(19884, false);
					player->LearnSpell(34074, false);
					player->LearnSpell(781,   false);
					player->LearnSpell(14311, false);
					player->LearnSpell(1462,  false);
					player->LearnSpell(19885, false);
					player->LearnSpell(19880, false);
					player->LearnSpell(13809, false);
					player->LearnSpell(13161, false);
					player->LearnSpell(5384,  false);
					player->LearnSpell(1543,  false);
					player->LearnSpell(19878, false);
					player->LearnSpell(49067, false);
					player->LearnSpell(3034,  false);
					player->LearnSpell(13159, false);
					player->LearnSpell(19882, false);
					player->LearnSpell(58434, false);
					player->LearnSpell(49071, false);
					player->LearnSpell(49052, false);
					player->LearnSpell(19879, false);
					player->LearnSpell(19263, false);
					player->LearnSpell(19801, false);
					player->LearnSpell(34026, false);
					player->LearnSpell(34600, false);
					player->LearnSpell(34477, false);
					player->LearnSpell(61006, false);
					player->LearnSpell(61847, false);
					player->LearnSpell(53271, false);
					player->LearnSpell(60192, false);
					player->LearnSpell(62757, false);
					player->LearnSpell(34093, false);
					player->LearnSpell(33392, false);
					player->LearnSpell(SPELL_BOWS, true);
					player->LearnSpell(SPELL_CROSSBOWS, true);
					player->LearnSpell(SPELL_DUAL_WIELD, true);
					player->LearnSpell(SPELL_FIST_WEAPONS, true);
					player->LearnSpell(SPELL_GUNS, true);
					player->LearnSpell(SPELL_MAIL, true);
					player->LearnSpell(SPELL_ONE_HANDED_AXES, true);
					player->LearnSpell(SPELL_ONE_HANDED_SWORDS, true);
					player->LearnSpell(SPELL_POLEARMS, true);
					player->LearnSpell(SPELL_STAVES, true);
					player->LearnSpell(SPELL_TWO_HANDED_AXES, true);
					player->LearnSpell(SPELL_TWO_HANDED_SWORDS, true);					
					if(player->HasSpell(19386)) // Wyvern Sting.
						player->LearnSpell(49012, false);
					if(player->HasSpell(53301)) // Explosive Shot.
						player->LearnSpell(60053, false);
					if(player->HasSpell(19306)) // Counter Attack.
						player->LearnSpell(48999, false);
					if(player->HasSpell(19434)) // Aimed Shot.
						player->LearnSpell(49050, false);
					player->SaveToDB();
					SendGossipMenuFor(player, 1, creature->GetGUID());
					player->PlayerTalkClass->SendCloseGossip();
					break;

				case CLASS_MAGE:
					player->LearnSpell(42921, false);
					player->LearnSpell(42842, false);
					player->LearnSpell(42995, false);
					player->LearnSpell(42833, false);
					player->LearnSpell(27090, false);
					player->LearnSpell(33717, false);
					player->LearnSpell(42873, false);
					player->LearnSpell(42846, false);
					player->LearnSpell(12826, false);
					player->LearnSpell(28271, false);
					player->LearnSpell(61780, false);
					player->LearnSpell(61721, false);
					player->LearnSpell(28272, false);
					player->LearnSpell(42917, false);
					player->LearnSpell(43015, false);
					player->LearnSpell(130,   false);
					player->LearnSpell(42926, false);
					player->LearnSpell(43017, false);
					player->LearnSpell(475,   false);
					player->LearnSpell(1953,  false);
					player->LearnSpell(42940, false);
					player->LearnSpell(12051, false);
					player->LearnSpell(43010, false);
					player->LearnSpell(43020, false);
					player->LearnSpell(43012, false);
					player->LearnSpell(42859, false);
					player->LearnSpell(2139,  false);
					player->LearnSpell(42931, false);
					player->LearnSpell(42985, false);
					player->LearnSpell(43008, false);
					player->LearnSpell(45438, false);
					player->LearnSpell(43024, false);
					player->LearnSpell(43002, false);
					player->LearnSpell(43046, false);
					player->LearnSpell(42897, false);
					player->LearnSpell(42914, false);
					player->LearnSpell(66,    false);
					player->LearnSpell(58659, false);
					player->LearnSpell(30449, false);
					player->LearnSpell(42956, false);
					player->LearnSpell(47610, false);
					player->LearnSpell(61316, false);
					player->LearnSpell(61024, false);
					player->LearnSpell(55342, false);
					player->LearnSpell(53142, false);
					player->LearnSpell(7301,  false);
					player->LearnSpell(34093, false);
					player->LearnSpell(33392, false);
					player->LearnSpell(SPELL_DAGGERS, true);
					player->LearnSpell(SPELL_ONE_HANDED_SWORDS, true);
					player->LearnSpell(SPELL_SHOOT_WANDS, true);
					player->LearnSpell(SPELL_STAVES, true);
					player->LearnSpell(SPELL_WANDS, true);					
					if(player->GetTeam() == ALLIANCE)
					{
						player->LearnSpell(32271, false); // Teleport: Exodar.
						player->LearnSpell(49359, false); // Teleport: Theramore.
						player->LearnSpell(3565,  false); // Teleport: Darnassus.
						player->LearnSpell(33690, false); // Teleport: Shattrath.
						player->LearnSpell(3562,  false); // Teleport: Ironforge.
						player->LearnSpell(3561,  false); // Teleport: Stormwind.
						player->LearnSpell(53140, false); // Teleport: Dalaran.
						player->LearnSpell(53142, false); // Portal: Dalaran.
						player->LearnSpell(10059, false); // Portal: Stormwind.
						player->LearnSpell(11419, false); // Portal: Darnassus.
						player->LearnSpell(32266, false); // Portal: Exodar.
						player->LearnSpell(11416, false); // Portal: Ironforge.
						player->LearnSpell(33691, false); // Portal: Shattrath.
						player->LearnSpell(49360, false); // Portal: Theramore.
					}
					if(player->GetTeam() == HORDE)
					{
						player->LearnSpell(3567,  false); // Teleport: Orgrimmar.
						player->LearnSpell(35715, false); // Teleport: Shattrath.
						player->LearnSpell(3566,  false); // Teleport: Thunder Bluff.
						player->LearnSpell(49358, false); // Teleport: Stonard.
						player->LearnSpell(32272, false); // Teleport: Silvermoon.
						player->LearnSpell(3563,  false); // Teleport: Undercity.
						player->LearnSpell(53140, false); // Teleport: Dalaran.
						player->LearnSpell(53142, false); // Portal: Dalaran.
						player->LearnSpell(11417, false); // Portal: Orgrimmar.
						player->LearnSpell(35717, false); // Portal: Shattrath.
						player->LearnSpell(32267, false); // Portal: Silvermoon.
						player->LearnSpell(49361, false); // Portal: Stonard.
						player->LearnSpell(11420, false); // Portal: Thunder Bluff.
						player->LearnSpell(11418, false); // Portal: Undercity.
					}
					if(player->HasSpell(11366)) // Pyroblast.
						player->LearnSpell(42891, false);
					if(player->HasSpell(11426)) // Ice Barrier.
						player->LearnSpell(43039, false);
					if(player->HasSpell(44457)) // Living Bomb.
						player->LearnSpell(55360, false);
					if(player->HasSpell(31661)) // Dragon's Breath.
						player->LearnSpell(42950, false);
					if(player->HasSpell(11113)) // Blast Wave.
						player->LearnSpell(42945, false);
					if(player->HasSpell(44425)) // Arcane Barrage.
						player->LearnSpell(44781, false);
					player->SaveToDB();
					player->PlayerTalkClass->SendCloseGossip();
					break;

				case CLASS_WARLOCK:
					player->LearnSpell(696, false);
					player->LearnSpell(47811, false);
					player->LearnSpell(47809, false);
					player->LearnSpell(688, false);
					player->LearnSpell(47813, false);
					player->LearnSpell(50511, false);
					player->LearnSpell(57946, false);
					player->LearnSpell(47864, false);
					player->LearnSpell(6215, false);
					player->LearnSpell(47878, false);
					player->LearnSpell(47855, false);
					player->LearnSpell(697, false);
					player->LearnSpell(47856, false);
					player->LearnSpell(47857, false);
					player->LearnSpell(5697, false);
					player->LearnSpell(47884, false);
					player->LearnSpell(47815, false);
					player->LearnSpell(47889, false);
					player->LearnSpell(47820, false);
					player->LearnSpell(698, false);
					player->LearnSpell(712, false);
					player->LearnSpell(126, false);
					player->LearnSpell(5138, false);
					player->LearnSpell(5500, false);
					player->LearnSpell(11719, false);
					player->LearnSpell(132, false);
					player->LearnSpell(60220, false);
					player->LearnSpell(18647, false);
					player->LearnSpell(61191, false);
					player->LearnSpell(47823, false);
					player->LearnSpell(691, false);
					player->LearnSpell(47865, false);
					player->LearnSpell(47891, false);
					player->LearnSpell(47888, false);
					player->LearnSpell(17928, false);
					player->LearnSpell(47860, false);
					player->LearnSpell(47825, false);
					player->LearnSpell(1122, false);
					player->LearnSpell(47867, false);
					player->LearnSpell(18540, false);
					player->LearnSpell(47893, false);
					player->LearnSpell(47838, false);
					player->LearnSpell(29858, false);
					player->LearnSpell(58887, false);
					player->LearnSpell(47836, false);
					player->LearnSpell(61290, false);
					player->LearnSpell(48018, false);
					player->LearnSpell(48020, false);
					player->LearnSpell(33388, false);
					player->LearnSpell(33391, false);
					player->LearnSpell(23161, false);
					player->LearnSpell(34093, false);
					player->LearnSpell(33392, false);
					player->LearnSpell(SPELL_DAGGERS, true);
					player->LearnSpell(SPELL_ONE_HANDED_SWORDS, true);
					player->LearnSpell(SPELL_SHOOT_WANDS, true);
					player->LearnSpell(SPELL_STAVES, true);
					player->LearnSpell(SPELL_WANDS, true);					
					if(player->HasSpell(17877)) // Shadowburn.
						player->LearnSpell(47827, false);
					if(player->HasSpell(30283)) // Shadowfury.
						player->LearnSpell(47847, false);
					if(player->HasSpell(30108)) // Unstable Affliction.
						player->LearnSpell(47843, false);
					if(player->HasSpell(50796)) // Chaos Bolt.
						player->LearnSpell(59172, false);
					if(player->HasSpell(48181)) // Haunt.
						player->LearnSpell(59164, false);
					if(player->HasSpell(18220)) // Dark Pact.
						player->LearnSpell(59092, false);
					player->SaveToDB();
					player->PlayerTalkClass->SendCloseGossip();
					break;

				case CLASS_ROGUE:
					player->LearnSpell(3127, false);
					player->LearnSpell(42459, false);
					player->LearnSpell(48668, false);
					player->LearnSpell(48638, false);
					player->LearnSpell(1784, false);
					player->LearnSpell(48657, false);
					player->LearnSpell(921, false);
					player->LearnSpell(1776, false);
					player->LearnSpell(26669, false);
					player->LearnSpell(51724, false);
					player->LearnSpell(6774, false);
					player->LearnSpell(11305, false);
					player->LearnSpell(1766, false);
					player->LearnSpell(48676, false);
					player->LearnSpell(48659, false);
					player->LearnSpell(1804, false);
					player->LearnSpell(8647, false);
					player->LearnSpell(48691, false);
					player->LearnSpell(51722, false);
					player->LearnSpell(48672, false);
					player->LearnSpell(1725, false);
					player->LearnSpell(26889, false);
					player->LearnSpell(2836, false);
					player->LearnSpell(1833, false);
					player->LearnSpell(1842, false);
					player->LearnSpell(8643, false);
					player->LearnSpell(2094, false);
					player->LearnSpell(1860, false);
					player->LearnSpell(57993, false);
					player->LearnSpell(48674, false);
					player->LearnSpell(31224, false);
					player->LearnSpell(5938, false);
					player->LearnSpell(57934, false);
					player->LearnSpell(51723, false);
					player->LearnSpell(34093, false);
					player->LearnSpell(33392, false);
					player->LearnSpell(SPELL_BOWS, true);
					player->LearnSpell(SPELL_CROSSBOWS, true);
					player->LearnSpell(SPELL_DUAL_WIELD, true);
					player->LearnSpell(SPELL_FIST_WEAPONS, true);
					player->LearnSpell(SPELL_GUNS, true);
					player->LearnSpell(SPELL_ONE_HANDED_AXES, true);
					player->LearnSpell(SPELL_ONE_HANDED_MACES, true);
					player->LearnSpell(SPELL_ONE_HANDED_SWORDS, true);
					player->LearnSpell(SPELL_SHOOT, true);
					player->LearnSpell(SPELL_THROW, true);
					player->LearnSpell(SPELL_THROWN, true);					
					if(player->HasSpell(16511)) // Hemorrhage.
						player->LearnSpell(48660, false);
					if(player->HasSpell(1329)) // Mutilate.
						player->LearnSpell(48666, false);
					player->SaveToDB();
					player->PlayerTalkClass->SendCloseGossip();
					break;

				case CLASS_PRIEST:
					player->LearnSpell(528, false);
					player->LearnSpell(2053, false);
					player->LearnSpell(48161, false);
					player->LearnSpell(48123, false);
					player->LearnSpell(48125, false);
					player->LearnSpell(48066, false);
					player->LearnSpell(586, false);
					player->LearnSpell(48068, false);
					player->LearnSpell(48127, false);
					player->LearnSpell(48171, false);
					player->LearnSpell(48168, false);
					player->LearnSpell(10890, false);
					player->LearnSpell(6064, false);
					player->LearnSpell(988, false);
					player->LearnSpell(48300, false);
					player->LearnSpell(6346, false);
					player->LearnSpell(48071, false);
					player->LearnSpell(48135, false);
					player->LearnSpell(48078, false);
					player->LearnSpell(453, false);
					player->LearnSpell(10955, false);
					player->LearnSpell(10909, false);
					player->LearnSpell(8129, false);
					player->LearnSpell(48073, false);
					player->LearnSpell(605, false);
					player->LearnSpell(48072, false);
					player->LearnSpell(48169, false);
					player->LearnSpell(552, false);
					player->LearnSpell(1706, false);
					player->LearnSpell(48063, false);
					player->LearnSpell(48162, false);
					player->LearnSpell(48170, false);
					player->LearnSpell(48074, false);
					player->LearnSpell(48158, false);
					player->LearnSpell(48120, false);
					player->LearnSpell(34433, false);
					player->LearnSpell(48113, false);
					player->LearnSpell(32375, false);
					player->LearnSpell(64843, false);
					player->LearnSpell(64901, false);
					player->LearnSpell(53023, false);
					player->LearnSpell(34093, false);
					player->LearnSpell(33392, false);
					player->LearnSpell(SPELL_DAGGERS, true);
					player->LearnSpell(SPELL_ONE_HANDED_MACES, true);
					player->LearnSpell(SPELL_SHOOT_WANDS, true);
					player->LearnSpell(SPELL_STAVES, true);
					player->LearnSpell(SPELL_WANDS, true);					
					if(player->HasSpell(34914)) // Vampiric Touch.
						player->LearnSpell(48160, false);
					if(player->HasSpell(47540)) // Penance.
						player->LearnSpell(53007, false);
					if(player->HasSpell(724)) // Lightwell.
						player->LearnSpell(48087, false);
					if(player->HasSpell(19236)) // Desperate Prayer.
						player->LearnSpell(48173, false);
					if(player->HasSpell(34861)) // Circle of Healing.
						player->LearnSpell(48089, false);
					if(player->HasSpell(15407)) // Mind Flay.
						player->LearnSpell(48156, false);
					player->SaveToDB();
					player->PlayerTalkClass->SendCloseGossip();
					break;

				case CLASS_DEATH_KNIGHT:
					player->LearnSpell(3127, false);
					player->LearnSpell(50842, false);
					player->LearnSpell(49941, false);
					player->LearnSpell(49930, false);
					player->LearnSpell(47476, false);
					player->LearnSpell(45529, false);
					player->LearnSpell(3714, false);
					player->LearnSpell(56222, false);
					player->LearnSpell(48743, false);
					player->LearnSpell(48263, false);
					player->LearnSpell(49909, false);
					player->LearnSpell(47528, false);
					player->LearnSpell(45524, false);
					player->LearnSpell(48792, false);
					player->LearnSpell(57623, false);
					player->LearnSpell(56815, false);
					player->LearnSpell(47568, false);
					player->LearnSpell(49895, false);
					player->LearnSpell(50977, false);
					player->LearnSpell(49576, false);
					player->LearnSpell(49921, false);
					player->LearnSpell(46584, false);
					player->LearnSpell(49938, false);
					player->LearnSpell(48707, false);
					player->LearnSpell(48265, false);
					player->LearnSpell(61999, false);
					player->LearnSpell(42650, false);
					player->LearnSpell(53428, false);
					player->LearnSpell(53331, false);
					player->LearnSpell(54447, false);
					player->LearnSpell(53342, false);
					player->LearnSpell(54446, false);
					player->LearnSpell(53323, false);
					player->LearnSpell(53344, false);
					player->LearnSpell(70164, false);
					player->LearnSpell(62158, false);
					player->LearnSpell(33391, false);
					player->LearnSpell(48778, false);
					player->LearnSpell(51425, false);
					player->LearnSpell(49924, false);
					player->LearnSpell(34093, false);
					player->LearnSpell(33392, false);
					player->LearnSpell(SPELL_DUAL_WIELD, true);
					player->LearnSpell(SPELL_ONE_HANDED_AXES, true);
					player->LearnSpell(SPELL_ONE_HANDED_MACES, true);
					player->LearnSpell(SPELL_ONE_HANDED_SWORDS, true);
					player->LearnSpell(SPELL_PLATE, true);
					player->LearnSpell(SPELL_POLEARMS, true);
					player->LearnSpell(SPELL_RELIC, true);
					player->LearnSpell(SPELL_TWO_HANDED_AXES, true);
					player->LearnSpell(SPELL_TWO_HANDED_MACES, true);
					player->LearnSpell(SPELL_TWO_HANDED_SWORDS, true);					
					if(player->HasSpell(55050)) // Heart Strike.
						player->LearnSpell(55262, false);
					if(player->HasSpell(49143)) // Frost Strike.
						player->LearnSpell(55268, false);
					if(player->HasSpell(49184)) // Howling Blast.
						player->LearnSpell(51411, false);
					if(player->HasSpell(55090)) // Scourge Strike.
						player->LearnSpell(55271, false);
					if(player->HasSpell(49158)) // Corpse Explosion.
						player->LearnSpell(51328, false);
					player->SaveToDB();
					player->PlayerTalkClass->SendCloseGossip();
					break;

				case CLASS_SHAMAN:
					player->LearnSpell(2062, false);
					player->LearnSpell(8737, false);
					player->LearnSpell(49273, false);
					player->LearnSpell(49238, false);
					player->LearnSpell(10399, false);
					player->LearnSpell(49231, false);
					player->LearnSpell(58753, false);
					player->LearnSpell(2484, false);
					player->LearnSpell(49281, false);
					player->LearnSpell(58582, false);
					player->LearnSpell(49233, false);
					player->LearnSpell(58790, false);
					player->LearnSpell(58704, false);
					player->LearnSpell(58643, false);
					player->LearnSpell(49277, false);
					player->LearnSpell(61657, false);
					player->LearnSpell(8012, false);
					player->LearnSpell(526, false);
					player->LearnSpell(2645, false);
					player->LearnSpell(57994, false);
					player->LearnSpell(8143, false);
					player->LearnSpell(49236, false);
					player->LearnSpell(58796, false);
					player->LearnSpell(58757, false);
					player->LearnSpell(49276, false);
					player->LearnSpell(57960, false);
					player->LearnSpell(131, false);
					player->LearnSpell(58745, false);
					player->LearnSpell(6196, false);
					player->LearnSpell(58734, false);
					player->LearnSpell(58774, false);
					player->LearnSpell(58739, false);
					player->LearnSpell(58656, false);
					player->LearnSpell(546, false);
					player->LearnSpell(556, false);
					player->LearnSpell(66842, false);
					player->LearnSpell(51994, false);
					player->LearnSpell(8177, false);
					player->LearnSpell(58749, false);
					player->LearnSpell(20608, false);
					player->LearnSpell(36936, false);
					player->LearnSpell(36936, false);
					player->LearnSpell(58804, false);
					player->LearnSpell(49271, false);
					player->LearnSpell(8512, false);
					player->LearnSpell(6495, false);
					player->LearnSpell(8170, false);
					player->LearnSpell(66843, false);
					player->LearnSpell(55459, false);
					player->LearnSpell(66844, false);
					player->LearnSpell(3738, false);
					player->LearnSpell(2894, false);
					player->LearnSpell(60043, false);
					player->LearnSpell(51514, false);
					player->LearnSpell(34093, false);
					player->LearnSpell(33392, false);
					player->LearnSpell(SPELL_BLOCK, true);
					player->LearnSpell(SPELL_FIST_WEAPONS, true);
					player->LearnSpell(SPELL_MAIL, true);
					player->LearnSpell(SPELL_ONE_HANDED_AXES, true);
					player->LearnSpell(SPELL_ONE_HANDED_MACES, true);
					player->LearnSpell(SPELL_RELIC_4, true);
					player->LearnSpell(SPELL_SHIELD, true);
					player->LearnSpell(SPELL_STAVES, true);
					player->LearnSpell(SPELL_TWO_HANDED_AXES, true);
					player->LearnSpell(SPELL_TWO_HANDED_MACES, true);					
					if(player->GetTeam() == ALLIANCE)
						player->LearnSpell(32182, false); // Heroism.
					if(player->GetTeam() == HORDE)
						player->LearnSpell(2825, false); // Bloodlust.
					if(player->HasSpell(61295)) // Riptide.
						player->LearnSpell(61301, false);
					if(player->HasSpell(974)) // Earth Shield.
						player->LearnSpell(49284, false);
					if(player->HasSpell(30706)) // Totem of Wrath.
						player->LearnSpell(57722, false);
					if(player->HasSpell(51490)) // Thunderstorm.
						player->LearnSpell(59159, false);
					player->SaveToDB();
					player->PlayerTalkClass->SendCloseGossip();
					break;

				case CLASS_DRUID:
					player->LearnSpell(48378, false);
					player->LearnSpell(48469, false);
					player->LearnSpell(48461, false);
					player->LearnSpell(48463, false);
					player->LearnSpell(48441, false);
					player->LearnSpell(53307, false);
					player->LearnSpell(53308, false);
					player->LearnSpell(5487, false);
					player->LearnSpell(48560, false);
					player->LearnSpell(6795, false);
					player->LearnSpell(48480, false);
					player->LearnSpell(53312, false);
					player->LearnSpell(18960, false);
					player->LearnSpell(5229, false);
					player->LearnSpell(48443, false);
					player->LearnSpell(50763, false);
					player->LearnSpell(8983, false);
					player->LearnSpell(8946, false);
					player->LearnSpell(1066, false);
					player->LearnSpell(48562, false);
					player->LearnSpell(783, false);
					player->LearnSpell(770, false);
					player->LearnSpell(16857, false);
					player->LearnSpell(18658, false);
					player->LearnSpell(768, false);
					player->LearnSpell(1082, false);
					player->LearnSpell(16979, false);
					player->LearnSpell(49376, false);
					player->LearnSpell(5215, false);
					player->LearnSpell(48477, false);
					player->LearnSpell(49800, false);
					player->LearnSpell(48465, false);
					player->LearnSpell(48572, false);
					player->LearnSpell(26995, false);
					player->LearnSpell(48574, false);
					player->LearnSpell(2782, false);
					player->LearnSpell(50213, false);
					player->LearnSpell(2893, false);
					player->LearnSpell(33357, false);
					player->LearnSpell(5209, false);
					player->LearnSpell(48575, false);
					player->LearnSpell(48447, false);
					player->LearnSpell(48577, false);
					player->LearnSpell(48579, false);
					player->LearnSpell(5225, false);
					player->LearnSpell(22842, false);
					player->LearnSpell(49803, false);
					player->LearnSpell(9634, false);
					player->LearnSpell(20719, false);
					player->LearnSpell(48467, false);
					player->LearnSpell(29166, false);
					player->LearnSpell(62600, false);
					player->LearnSpell(22812, false);
					player->LearnSpell(48470, false);
					player->LearnSpell(48564, false);
					player->LearnSpell(48566, false);
					player->LearnSpell(33943, false);
					player->LearnSpell(49802, false);
					player->LearnSpell(48451, false);
					player->LearnSpell(48568, false);
					player->LearnSpell(33786, false);
					player->LearnSpell(40120, false);
					player->LearnSpell(62078, false);
					player->LearnSpell(52610, false);
					player->LearnSpell(50464, false);
					player->LearnSpell(48570, false);
					player->LearnSpell(34093, false);
					player->LearnSpell(33392, false);
					player->LearnSpell(SPELL_DAGGERS, true);
					player->LearnSpell(SPELL_FIST_WEAPONS, true);
					player->LearnSpell(SPELL_ONE_HANDED_MACES, true);
					player->LearnSpell(SPELL_POLEARMS, true);
					player->LearnSpell(SPELL_RELIC_2, true);
					player->LearnSpell(SPELL_STAVES, true);
					player->LearnSpell(SPELL_TWO_HANDED_MACES, true);					
					if(player->HasSpell(50516)) // Typhoon.
						player->LearnSpell(61384, false);
					if(player->HasSpell(48505)) // Starfall.
						player->LearnSpell(53201, false);
					if(player->HasSpell(48438)) // Wild Growth.
						player->LearnSpell(53251, false);
					if(player->HasSpell(5570)) // Insect Swarm.
						player->LearnSpell(48468, false);
					player->SaveToDB();
					player->PlayerTalkClass->SendCloseGossip();
					break;
				}
				break;
				}
            }
			return true;
	}
};

void AddSC_npc_trainer_master()
{
    new npc_trainer_master();
}