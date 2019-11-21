//Copyright Paul Reiche, Fred Ford. 1992-2002

/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef PKUNK_STRINGS_H
#define PKUNK_STRINGS_H

enum
{
	NULL_PHRASE,
	GIVE_SPINDLE,
	name_1,
	name_2,
	name_3,
	name_40,
	name_41,
	NEUTRAL_SPACE_HELLO_1,
	NEUTRAL_SPACE_HELLO_3,
	NEUTRAL_SPACE_HELLO_2,
	NEUTRAL_SPACE_HELLO_4,
	FRIENDLY_SPACE_HELLO_1,
	FRIENDLY_SPACE_HELLO_2,
	FRIENDLY_SPACE_HELLO_3,
	FRIENDLY_SPACE_HELLO_4,
	FRIENDLY_SPACE_HELLO_5,
	FRIENDLY_SPACE_HELLO_6,
	FRIENDLY_SPACE_HELLO_7,
	FRIENDLY_SPACE_HELLO_8,
	NEUTRAL_HOMEWORLD_HELLO_1,
	NEUTRAL_HOMEWORLD_HELLO_2,
	NEUTRAL_HOMEWORLD_HELLO_3,
	NEUTRAL_HOMEWORLD_HELLO_4,
	FRIENDLY_HOMEWORLD_HELLO_1,
	FRIENDLY_HOMEWORLD_HELLO_2,
	FRIENDLY_HOMEWORLD_HELLO_3,
	FRIENDLY_HOMEWORLD_HELLO_4,
	FRIENDLY_HOMEWORLD_HELLO_5,
	FRIENDLY_HOMEWORLD_HELLO_6,
	FRIENDLY_HOMEWORLD_HELLO_7,
	FRIENDLY_HOMEWORLD_HELLO_8,
	whats_up_neutral,
	GENERAL_INFO_NEUTRAL_1,
	GENERAL_INFO_NEUTRAL_2,
	GENERAL_INFO_NEUTRAL_3,
	GENERAL_INFO_NEUTRAL_4,
	good_reason_1,
	WE_GO_HOME_1,
	good_reason_2,
	WE_GO_HOME_2,
	bad_reason_1,
	NO_GO_HOME_1,
	bad_reason_2,
	NO_GO_HOME_2,
	SENSE_KOHRAH_VICTORY,
	SPIRITUAL_PROBLEMS_1,
	SPIRITUAL_PROBLEMS_2,
	SPIRITUAL_PROBLEMS_3,
	SPIRITUAL_PROBLEMS_4,
	HATE_YOU_FOREVER_1,
	HATE_YOU_FOREVER_2,
	HATE_YOU_FOREVER_3,
	HATE_YOU_FOREVER_4,
	MIGRATING_SPACE_1,
	MIGRATING_SPACE_2,
	MIGRATING_SPACE_3,
	MIGRATING_SPACE_4,
	MIGRATING_SPACE_5,
	MIGRATING_SPACE_6,
	MIGRATING_SPACE_7,
	MIGRATING_SPACE_8,
	die_idiot_fools,
	VERY_WELL,
	why_insults,
	RELEASE_TENSION,
	what_about_you_angry,
	ABOUT_US_ANGRY,
	what_about_you,
	should_be_friends,
	YES_FRIENDS,
	try_to_be_nicer,
	CANT_ASK_FOR_MORE,
	VISIT_OUR_HOMEWORLD,
	CAN_BE_FRIENDS,
	bye_angry,
	GOODBYE_ANGRY,
	we_conquer,
	WHY_CONQUER,
	conquer_because_1,
#if 0
	NOT_CONQUER_10,
	NOT_CONQUER_11,
	NOT_CONQUER_12,
#endif
	NOT_CONQUER_1,
	conquer_because_2,
	NOT_CONQUER_2,
	must_conquer,
	BAD_IDEA,
	no_conquest,
	GOOD_IDEA,
	we_are_vindicator0,
	we_are_vindicator1,
	we_are_vindicator2,
	WHY_YOU_HERE,
	we_here_to_help,
	NEED_HELP,
	we_need_help,
	GIVE_HELP,
	exploring_universe,
	SENSE_DEEPER_CONFLICT,
	fun_cruise,
	REPRESS,
	why_ilwrath_fight,
	ILWRATH_FIGHT_BECAUSE,
	when_fight_start,
	FIGHT_START_WHEN,
	how_goes_fight,
	FIGHT_GOES,
	how_goes_war,
	WAR_GOES_1,
	WAR_GOES_2,
	WAR_GOES_3,
	WAR_GOES_4,
	how_stop_fight,
	STOP_FIGHT_LIKE_SO,
	enough_ilwrath,
	OK_ENOUGH_ILWRATH,
	what_about_history,
	ABOUT_HISTORY,
	what_about_yehat,
	ABOUT_YEHAT,
	what_about_culture,
	ABOUT_CULTURE,
	elaborate_culture,
	OK_ELABORATE_CULTURE,
	what_about_future,
	ABOUT_FUTURE,
	enough_about_you,
	OK_ENOUGH_ABOUT_US,
	ABOUT_US,
	where_fleet_1,
	where_fleet_2,
	where_fleet_3,
	MIGRATING_HOMEWORLD_1,
	MIGRATING_HOMEWORLD_2,
	MIGRATING_HOMEWORLD_3,
	RETURNING_FROM_YEHAT_1,
	RETURNING_FROM_YEHAT_2,
	am_worried_1,
	am_worried_2,
	am_worried_3,
	DONT_WORRY_1,
	DONT_WORRY_2,
	DONT_WORRY_3,
	form_alliance,
	GO_TO_HOMEWORLD,
	can_you_help,
	GO_TO_HOMEWORLD_AGAIN,
	hostile_greeting,
	DONT_BE_HOSTILE,
	obey,
	NO_OBEY,
	neutral_bye_space,
	NEUTRAL_GOODBYE_SPACE,
	SHIP_GIFT,
	NO_ROOM,
	friendly_bye_space,
	FRIENDLY_GOODBYE_SPACE,
	bye_friendly,
	GOODBYE_FRIENDLY,
	ALMOST_ALLIANCE,
	INIT_NO_ROOM,
	INIT_SHIP_GIFT,
	suit_yourself,
	GOODBYE_MIGRATION,
	what_about_ilwrath,
	ABOUT_ILWRATH,
	whats_up_space,
	SHIPS_AT_HOME,
	GENERAL_INFO_SPACE_1,
	GENERAL_INFO_SPACE_2,
	GENERAL_INFO_SPACE_3,
	GENERAL_INFO_SPACE_4,
	GENERAL_INFO_SPACE_5,
	GENERAL_INFO_SPACE_6,
	GENERAL_INFO_SPACE_7,
	GENERAL_INFO_SPACE_8,
	tell_my_fortune,
	FORTUNE_IS_1,
	FORTUNE_IS_2,
	FORTUNE_IS_3,
	FORTUNE_IS_4,
	FORTUNE_IS_5,
	FORTUNE_IS_6,
	FORTUNE_IS_7,
	FORTUNE_IS_8,
	OUT_TAKES,
};

#endif /* _STRINGS_H */
