#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <Windows.h>

#include <Wininet.h> // for get request
#pragma comment(lib, "wininet.lib")

// our json parser 
#include "json.hpp"

// data
namespace data {
	namespace stats_n {
		struct bedwars {
			struct bedwars_challenges {
				int bw_challenge_no_team_upgrades_best_time;
				int bw_challenge_selfish_best_time;
				int bw_challenge_reset_armor_best_time;
				int bw_challenge_slow_generator_best_time;
				int bw_challenge_collector_best_time;
			};
			std::vector<std::string> packages;
			bool first_join_7;
			int experience;
			int bedwars_boxes;
			int games_played_bedwars_1;
			int _items_purchased_bedwars;
			int beds_broken_bedwars;
			int coins;
			int death_bedwars;
			int eight_two__items_purchased_bedwars;
			int eight_two_beds_broken_bedwars;
			int eight_two_deaths_bedwars;
			int eight_two_entity_attack_deaths_bedwars;
			int eight_two_entity_attack_kills_bedwars;
			int eight_two_final_kills_bedwars;
			int eight_two_games_played_bedwars;
			int eight_two_gold_resources_collected_bedwars;
			int eight_two_iron_resources_collected_bedwars;
			int eight_two_items_purchased_bedwars;
			int eight_two_kills_bedwars;
			int eight_two_permanent_items_purchased_bedwars;
			int eight_two_resources_collected_bedwars;
			int eight_two_void_deaths_bedwars;
			int eight_two_void_final_kills_bedwars;
			int eight_two_void_kills_bedwars;
			int eight_two_wins_bedwars;
			int entity_attack_deaths_bedwars;
			int entity_attack_kills_bedwars;
			int final_kills_bedwars;
			int games_played_bedwars;
			int gold_resources_collected_bedwars;
			int iron_resources_collected_bedwars;
			int items_purchased_bedwars;
			int kills_bedwars;
			int permanent_items_purchased_bedwars;
			int resources_collected_bedwars;
			int void_deaths_bedwars;
			int void_final_kills_bedwars;
			int void_kills_bedwars;
			int wins_bedwars;
			int winstreak;
			int eight_two_winstreak;
			std::string favorite_slots;
			int diamond_resources_collected_bedwars;
			int eight_two_diamond_resources_collected_bedwars;
			int eight_two_entity_attack_final_kills_bedwars;
			int entity_attack_final_kills_bedwars;
			int beds_lost_bedwars;
			int eight_two_beds_lost_bedwars;
			int eight_two_emerald_resources_collected_bedwars;
			int eight_two_magic_final_kills_bedwars;
			int emerald_resources_collected_bedwars;
			int magic_final_kills_bedwars;
			int eight_two_entity_attack_final_deaths_bedwars;
			int eight_two_final_deaths_bedwars;
			int eight_two_magic_kills_bedwars;
			int entity_attack_final_deaths_bedwars;
			int final_deaths_bedwars;
			int magic_kills_bedwars;
			int eight_two_lucky_winstreak;
			int eight_two_lucky__items_purchased_bedwars;
			int eight_two_lucky_beds_broken_bedwars;
			int eight_two_lucky_deaths_bedwars;
			int eight_two_lucky_diamond_resources_collected_bedwars;
			int eight_two_lucky_entity_attack_deaths_bedwars;
			int eight_two_lucky_entity_attack_final_kills_bedwars;
			int eight_two_lucky_entity_attack_kills_bedwars;
			int eight_two_lucky_fall_kills_bedwars;
			int eight_two_lucky_final_kills_bedwars;
			int eight_two_lucky_fire_tick_deaths_bedwars;
			int eight_two_lucky_games_played_bedwars;
			int eight_two_lucky_gold_resources_collected_bedwars;
			int eight_two_lucky_iron_resources_collected_bedwars;
			int eight_two_lucky_items_purchased_bedwars;
			int eight_two_lucky_kills_bedwars;
			int eight_two_lucky_permanent_items_purchased_bedwars;
			int eight_two_lucky_resources_collected_bedwars;
			int eight_two_lucky_void_deaths_bedwars;
			int eight_two_lucky_wins_bedwars;
			int eight_two_lucky_beds_lost_bedwars;
			int eight_two_lucky_void_kills_bedwars;
			int eight_two_losses_bedwars;
			int eight_two_void_final_deaths_bedwars;
			int losses_bedwars;
			int void_final_deaths_bedwars;
			std::string favourites_2;
			int four_three_winstreak;
			int four_three__items_purchased_bedwars;
			int four_three_beds_broken_bedwars;
			int four_three_deaths_bedwars;
			int four_three_entity_attack_deaths_bedwars;
			int four_three_entity_attack_final_kills_bedwars;
			int four_three_entity_attack_kills_bedwars;
			int four_three_final_kills_bedwars;
			int four_three_games_played_bedwars;
			int four_three_gold_resources_collected_bedwars;
			int four_three_iron_resources_collected_bedwars;
			int four_three_items_purchased_bedwars;
			int four_three_kills_bedwars;
			int four_three_permanent_items_purchased_bedwars;
			int four_three_resources_collected_bedwars;
			int four_three_void_deaths_bedwars;
			int four_three_wins_bedwars;
			int four_three_void_final_kills_bedwars;
			int fall_kills_bedwars;
			int four_three_fall_kills_bedwars;
			int four_three_void_kills_bedwars;
			int four_four_winstreak;
			int four_four__items_purchased_bedwars;
			int four_four_beds_broken_bedwars;
			int four_four_beds_lost_bedwars;
			int four_four_diamond_resources_collected_bedwars;
			int four_four_entity_attack_final_kills_bedwars;
			int four_four_entity_attack_kills_bedwars;
			int four_four_final_kills_bedwars;
			int four_four_games_played_bedwars;
			int four_four_gold_resources_collected_bedwars;
			int four_four_iron_resources_collected_bedwars;
			int four_four_items_purchased_bedwars;
			int four_four_kills_bedwars;
			int four_four_magic_final_kills_bedwars;
			int four_four_permanent_items_purchased_bedwars;
			int four_four_resources_collected_bedwars;
			int four_four_void_final_kills_bedwars;
			int four_four_wins_bedwars;
			int four_four_deaths_bedwars;
			int four_four_entity_attack_deaths_bedwars;
			int four_four_void_deaths_bedwars;
			int four_four_void_kills_bedwars;
			int fall_deaths_bedwars;
			int four_four_fall_deaths_bedwars;
			int four_four_entity_attack_final_deaths_bedwars;
			int four_four_final_deaths_bedwars;
			int four_four_losses_bedwars;
			int four_three_diamond_resources_collected_bedwars;
			int four_three_beds_lost_bedwars;
			int four_three_emerald_resources_collected_bedwars;
			int bedwars_opened_chests;
			int bedwars_opened_commons;
			std::vector<std::string> chest_history_new;
			int bedwars_opened_rares;
			std::string active_victory_dance;
			std::string active_bed_destroy;
			std::string active_kill_effect;
			int four_three_entity_attack_final_deaths_bedwars;
			int four_three_final_deaths_bedwars;
			int four_three_losses_bedwars;
			int four_four_magic_deaths_bedwars;
			int four_four_void_final_deaths_bedwars;
			int magic_deaths_bedwars;
			std::string selected_ultimate;
			int eight_two_ultimate_winstreak;
			int eight_two_ultimate__items_purchased_bedwars;
			int eight_two_ultimate_beds_broken_bedwars;
			int eight_two_ultimate_deaths_bedwars;
			int eight_two_ultimate_emerald_resources_collected_bedwars;
			int eight_two_ultimate_entity_attack_deaths_bedwars;
			int eight_two_ultimate_entity_attack_final_kills_bedwars;
			int eight_two_ultimate_entity_attack_kills_bedwars;
			int eight_two_ultimate_final_kills_bedwars;
			int eight_two_ultimate_games_played_bedwars;
			int eight_two_ultimate_gold_resources_collected_bedwars;
			int eight_two_ultimate_iron_resources_collected_bedwars;
			int eight_two_ultimate_items_purchased_bedwars;
			int eight_two_ultimate_kills_bedwars;
			int eight_two_ultimate_permanent_items_purchased_bedwars;
			int eight_two_ultimate_resources_collected_bedwars;
			int eight_two_ultimate_void_deaths_bedwars;
			int eight_two_ultimate_wins_bedwars;
			int two_four_winstreak;
			int two_four__items_purchased_bedwars;
			int two_four_deaths_bedwars;
			int two_four_entity_attack_final_kills_bedwars;
			int two_four_final_kills_bedwars;
			int two_four_games_played_bedwars;
			int two_four_gold_resources_collected_bedwars;
			int two_four_iron_resources_collected_bedwars;
			int two_four_items_purchased_bedwars;
			int two_four_kills_bedwars;
			int two_four_resources_collected_bedwars;
			int two_four_void_deaths_bedwars;
			int two_four_void_kills_bedwars;
			int two_four_wins_bedwars;
			int bedwars_opened_epics;
			int bedwars_opened_legendaries;
			bool shop_sort_enable_owned_first;
			int fall_final_kills_bedwars;
			int four_four_fall_final_kills_bedwars;
			int eight_one_winstreak;
			int eight_one__items_purchased_bedwars;
			int eight_one_beds_broken_bedwars;
			int eight_one_beds_lost_bedwars;
			int eight_one_deaths_bedwars;
			int eight_one_emerald_resources_collected_bedwars;
			int eight_one_entity_attack_deaths_bedwars;
			int eight_one_entity_attack_final_kills_bedwars;
			int eight_one_entity_attack_kills_bedwars;
			int eight_one_final_deaths_bedwars;
			int eight_one_final_kills_bedwars;
			int eight_one_games_played_bedwars;
			int eight_one_gold_resources_collected_bedwars;
			int eight_one_iron_resources_collected_bedwars;
			int eight_one_items_purchased_bedwars;
			int eight_one_kills_bedwars;
			int eight_one_losses_bedwars;
			int eight_one_permanent_items_purchased_bedwars;
			int eight_one_resources_collected_bedwars;
			int eight_one_void_deaths_bedwars;
			int eight_one_void_final_deaths_bedwars;
			int eight_one_void_final_kills_bedwars;
			int eight_one_void_kills_bedwars;
			int four_three_fall_deaths_bedwars;
			std::string active_kill_messages;
			int eight_two_magic_deaths_bedwars;
			int eight_one_magic_final_kills_bedwars;
			int eight_one_wins_bedwars;
			int four_three_void_final_deaths_bedwars;
			int eight_two_fall_deaths_bedwars;
			int eight_one_diamond_resources_collected_bedwars;
			int eight_one_fall_kills_bedwars;
			int eight_two_voidless_winstreak;
			int eight_two_voidless__items_purchased_bedwars;
			int eight_two_voidless_beds_broken_bedwars;
			int eight_two_voidless_beds_lost_bedwars;
			int eight_two_voidless_deaths_bedwars;
			int eight_two_voidless_entity_attack_deaths_bedwars;
			int eight_two_voidless_entity_attack_final_deaths_bedwars;
			int eight_two_voidless_entity_attack_final_kills_bedwars;
			int eight_two_voidless_entity_attack_kills_bedwars;
			int eight_two_voidless_fall_kills_bedwars;
			int eight_two_voidless_final_deaths_bedwars;
			int eight_two_voidless_final_kills_bedwars;
			int eight_two_voidless_games_played_bedwars;
			int eight_two_voidless_gold_resources_collected_bedwars;
			int eight_two_voidless_iron_resources_collected_bedwars;
			int eight_two_voidless_items_purchased_bedwars;
			int eight_two_voidless_kills_bedwars;
			int eight_two_voidless_losses_bedwars;
			int eight_two_voidless_permanent_items_purchased_bedwars;
			int eight_two_voidless_resources_collected_bedwars;
			int four_four_emerald_resources_collected_bedwars;
			int four_four_magic_kills_bedwars;
			int eight_one_entity_attack_final_deaths_bedwars;
			int entity_explosion_deaths_bedwars;
			int four_three_entity_explosion_deaths_bedwars;
			int four_three_magic_final_kills_bedwars;
			int eight_one_magic_kills_bedwars;
			int eight_two_fall_kills_bedwars;
			int eight_two_fire_tick_kills_bedwars;
			int fire_tick_kills_bedwars;
			int four_three_magic_final_deaths_bedwars;
			int magic_final_deaths_bedwars;
			int eight_two_lucky_void_final_kills_bedwars;
			int four_four_fall_kills_bedwars;
			int eight_two_fall_final_deaths_bedwars;
			int eight_two_fall_final_kills_bedwars;
			int fall_final_deaths_bedwars;
			std::string active_island_topper;
			std::string active_sprays;
			int bedwars_golden_boxes;
			int four_three_magic_deaths_bedwars;
			std::string shop_sort;
			std::string active_NPC_skin;
			int eight_two_entity_explosion_kills_bedwars;
			int entity_explosion_kills_bedwars;
			int four_four_fall_final_deaths_bedwars;
			int eight_two_entity_explosion_deaths_bedwars;
			int fire_final_kills_bedwars;
			int four_three_fire_final_kills_bedwars;
			std::string active_death_cry;
			std::string active_projectile_trail;
			int eight_two_fire_final_kills_bedwars;
			int eight_two_rush__items_purchased_bedwars;
			int eight_two_rush_beds_broken_bedwars;
			int eight_two_rush_deaths_bedwars;
			int eight_two_rush_emerald_resources_collected_bedwars;
			int eight_two_rush_entity_attack_deaths_bedwars;
			int eight_two_rush_entity_attack_final_kills_bedwars;
			int eight_two_rush_entity_attack_kills_bedwars;
			int eight_two_rush_final_kills_bedwars;
			int eight_two_rush_games_played_bedwars;
			int eight_two_rush_gold_resources_collected_bedwars;
			int eight_two_rush_iron_resources_collected_bedwars;
			int eight_two_rush_items_purchased_bedwars;
			int eight_two_rush_kills_bedwars;
			int eight_two_rush_permanent_items_purchased_bedwars;
			int eight_two_rush_resources_collected_bedwars;
			int eight_two_rush_void_final_kills_bedwars;
			int eight_two_rush_void_kills_bedwars;
			int eight_two_rush_wins_bedwars;
			int eight_two_rush_winstreak;
			int four_four_rush_winstreak;
			int four_four_rush__items_purchased_bedwars;
			int four_four_rush_beds_broken_bedwars;
			int four_four_rush_deaths_bedwars;
			int four_four_rush_emerald_resources_collected_bedwars;
			int four_four_rush_entity_attack_final_kills_bedwars;
			int four_four_rush_entity_attack_kills_bedwars;
			int four_four_rush_final_kills_bedwars;
			int four_four_rush_games_played_bedwars;
			int four_four_rush_gold_resources_collected_bedwars;
			int four_four_rush_iron_resources_collected_bedwars;
			int four_four_rush_items_purchased_bedwars;
			int four_four_rush_kills_bedwars;
			int four_four_rush_permanent_items_purchased_bedwars;
			int four_four_rush_resources_collected_bedwars;
			int four_four_rush_void_deaths_bedwars;
			int four_four_rush_wins_bedwars;
			int four_four_rush_entity_attack_deaths_bedwars;
			int four_four_rush_void_kills_bedwars;
			int four_four_rush_beds_lost_bedwars;
			int four_four_rush_diamond_resources_collected_bedwars;
			int four_four_rush_magic_deaths_bedwars;
			int four_four_rush_fall_kills_bedwars;
			int four_four_rush_void_final_kills_bedwars;
			int four_four_rush_final_deaths_bedwars;
			int four_four_rush_magic_final_kills_bedwars;
			int four_four_rush_void_final_deaths_bedwars;
			int four_three_fall_final_kills_bedwars;
			int bedwars_halloween_boxes;
			std::string selected_challenge_type;
			bool free_event_key_bedwars_halloween_boxes_2021;
			int eight_one_magic_deaths_bedwars;
			int four_three_magic_kills_bedwars;
			int eight_two_magic_final_deaths_bedwars;
			int four_four_magic_final_deaths_bedwars;
			int four_three_fall_final_deaths_bedwars;
			int total_challenges_completed;
			int bw_challenge_no_team_upgrades;
			bedwars_challenges challenges;
			int bw_unique_challenges_completed;
			int bedwars_christmas_boxes;
			int four_four_ultimate_winstreak;
			int four_four_ultimate__items_purchased_bedwars;
			int four_four_ultimate_beds_broken_bedwars;
			int four_four_ultimate_deaths_bedwars;
			int four_four_ultimate_diamond_resources_collected_bedwars;
			int four_four_ultimate_entity_attack_deaths_bedwars;
			int four_four_ultimate_entity_attack_final_kills_bedwars;
			int four_four_ultimate_entity_attack_kills_bedwars;
			int four_four_ultimate_final_kills_bedwars;
			int four_four_ultimate_games_played_bedwars;
			int four_four_ultimate_gold_resources_collected_bedwars;
			int four_four_ultimate_iron_resources_collected_bedwars;
			int four_four_ultimate_items_purchased_bedwars;
			int four_four_ultimate_kills_bedwars;
			int four_four_ultimate_permanent_items_purchased_bedwars;
			int four_four_ultimate_resources_collected_bedwars;
			int four_four_ultimate_void_deaths_bedwars;
			int four_four_ultimate_void_final_kills_bedwars;
			int four_four_ultimate_void_kills_bedwars;
			int four_four_ultimate_wins_bedwars;
			int four_four_ultimate_beds_lost_bedwars;
			int four_four_ultimate_final_deaths_bedwars;
			int four_four_ultimate_losses_bedwars;
			int four_four_ultimate_magic_final_kills_bedwars;
			int four_four_ultimate_void_final_deaths_bedwars;
			int four_four_ultimate_entity_attack_final_deaths_bedwars;
			int four_four_ultimate_magic_kills_bedwars;
			int four_four_ultimate_emerald_resources_collected_bedwars;
			int four_four_ultimate_magic_deaths_bedwars;
			int bw_challenge_selfish;
			int bw_challenge_reset_armor;
			int bw_challenge_slow_generator;
			bool free_event_key_bedwars_christmas_boxes_2021;
			bool understands_resource_bank;
			bool understands_streaks;
			int castle_winstreak;
			int castle__items_purchased_bedwars;
			int castle_beds_lost_bedwars;
			int castle_deaths_bedwars;
			int castle_entity_attack_kills_bedwars;
			int castle_games_played_bedwars;
			int castle_gold_resources_collected_bedwars;
			int castle_iron_resources_collected_bedwars;
			int castle_items_purchased_bedwars;
			int castle_kills_bedwars;
			int castle_permanent_items_purchased_bedwars;
			int castle_resources_collected_bedwars;
			int castle_void_deaths_bedwars;
			int castle_wins_bedwars;
			int castle_entity_attack_deaths_bedwars;
			int castle_entity_attack_final_deaths_bedwars;
			int castle_fall_deaths_bedwars;
			int castle_fall_kills_bedwars;
			int castle_final_deaths_bedwars;
			int castle_losses_bedwars;
			int castle_void_kills_bedwars;
			int castle_entity_attack_final_kills_bedwars;
			int castle_final_kills_bedwars;
			int castle_magic_kills_bedwars;
			int castle_magic_deaths_bedwars;
			int castle_magic_final_deaths_bedwars;
			int fire_tick_deaths_bedwars;
			int four_three_fire_tick_deaths_bedwars;
			int eight_one_entity_explosion_deaths_bedwars;
			int eight_one_fall_deaths_bedwars;
			int eight_one_fall_final_kills_bedwars;
			int eight_two_armed_winstreak;
			int eight_two_armed__items_purchased_bedwars;
			int eight_two_armed_deaths_bedwars;
			int eight_two_armed_entity_attack_deaths_bedwars;
			int eight_two_armed_games_played_bedwars;
			int eight_two_armed_gold_resources_collected_bedwars;
			int eight_two_armed_iron_resources_collected_bedwars;
			int eight_two_armed_items_purchased_bedwars;
			int eight_two_armed_kills_bedwars;
			int eight_two_armed_losses_bedwars;
			int eight_two_armed_magic_deaths_bedwars;
			int eight_two_armed_resources_collected_bedwars;
			int eight_two_armed_void_kills_bedwars;
			int four_three_projectile_deaths_bedwars;
			int projectile_deaths_bedwars;
			long long lastTourneyAd;
		};
		struct arcade {
			int coins;
			int stamp_level;
			int kicks_soccer;
			int powerkicks_soccer;
			int candy_found_halloween_simulator;
			int rounds_simon_says;
			int round_wins_simon_says;
			int top_score_simon_says;
			int gifts_grinch_simulator_v2;
			int round_wins_santa_says;
			int top_score_santa_says;
			int lawn_moower_mowed_best_score_party;
			int lawn_moower_mowed_total_score_party;
			int round_wins_party;
			int the_floor_is_lava_best_time_party;
			int the_floor_is_lava_round_wins_party;
			int total_stars_party;
			int trampolinio_round_wins_party;
			int wins_party;
		};
		struct duels {
			int combo_rookie_title_prestige;
			int uhc_rookie_title_prestige;
			int all_modes_rookie_title_prestige;
			int mega_walls_rookie_title_prestige;
			int blitz_rookie_title_prestige;
			int op_rookie_title_prestige;
			int tnt_games_rookie_title_prestige;
			int bow_rookie_title_prestige;
			int classic_rookie_title_prestige;
			int sumo_rookie_title_prestige;
			int skywars_rookie_title_prestige;
			int no_debuff_rookie_title_prestige;
			int bridge_rookie_title_prestige;
			std::string duels_recently_played2;
			std::string selected_1_new;
			std::string selected_2_new;
			std::string show_lb_option;
			std::string chat_enabled;
			int games_played_duels;
			std::vector<std::string> maps_won_on;
			int current_winstreak;
			int best_overall_winstreak;
			int best_winstreak_mode_uhc_doubles;
			int current_uhc_winstreak;
			int best_uhc_winstreak;
			int current_winstreak_mode_uhc_doubles;
			int coins;
			int damage_dealt;
			int golden_apples_eaten;
			int health_regenerated;
			int kills;
			int melee_hits;
			int melee_swings;
			int rounds_played;
			int uhc_doubles_damage_dealt;
			int uhc_doubles_golden_apples_eaten;
			int uhc_doubles_health_regenerated;
			int uhc_doubles_kills;
			int uhc_doubles_melee_hits;
			int uhc_doubles_melee_swings;
			int uhc_doubles_rounds_played;
			int uhc_doubles_wins;
			int wins;
			int best_classic_winstreak;
			int current_winstreak_mode_classic_duel;
			int best_winstreak_mode_classic_duel;
			int current_classic_winstreak;
			int classic_duel_damage_dealt;
			int classic_duel_health_regenerated;
			int classic_duel_kills;
			int classic_duel_melee_hits;
			int classic_duel_melee_swings;
			int classic_duel_rounds_played;
			int classic_duel_wins;
			int duels_winstreak_best_classic_duel;
			int leaderboardPage_win_streak;
			int bow_hits;
			int bow_shots;
			int classic_duel_bow_hits;
			int classic_duel_bow_shots;
			int best_winstreak_mode_sumo_duel;
			int current_sumo_winstreak;
			int best_sumo_winstreak;
			int current_winstreak_mode_sumo_duel;
			int sumo_duel_kills;
			int sumo_duel_melee_hits;
			int sumo_duel_melee_swings;
			int sumo_duel_rounds_played;
			int sumo_duel_wins;
			int duels_winstreak_best_sumo_duel;
			int deaths;
			int losses;
			int sumo_duel_deaths;
			int sumo_duel_losses;
			int classic_duel_deaths;
			int classic_duel_losses;
			int duels_chests;
			std::string blitz_duels_kit;
			int current_winstreak_mode_blitz_duel;
			int current_blitz_winstreak;
			int blitz_duel_damage_dealt;
			int blitz_duel_deaths;
			int blitz_duel_health_regenerated;
			int blitz_duel_losses;
			int blitz_duel_melee_hits;
			int blitz_duel_melee_swings;
			int blitz_duel_rounds_played;
			int best_blitz_winstreak;
			int best_winstreak_mode_blitz_duel;
			int blitz_duel_kills;
			int blitz_duel_kit_wins;
			int blitz_duel_reaper_kit_wins;
			int blitz_duel_wins;
			int kit_wins;
			int reaper_kit_wins;
			int duels_winstreak_best_blitz_duel;
			int blitz_duel_slimeyslime_kit_wins;
			int slimeyslime_kit_wins;
			int blitz_duel_toxicologist_kit_wins;
			int toxicologist_kit_wins;
			int current_tnt_games_winstreak;
			int current_winstreak_mode_bowspleef_duel;
			int best_winstreak_mode_bowspleef_duel;
			int best_tnt_games_winstreak;
			int bowspleef_duel_bow_shots;
			int bowspleef_duel_rounds_played;
			int bowspleef_duel_wins;
			int bowspleef_duel_deaths;
			int bowspleef_duel_losses;
			int classic_iron_title_prestige;
			std::string sw_duels_kit_new3;
			int best_skywars_winstreak;
			int current_winstreak_mode_sw_doubles;
			int best_winstreak_mode_sw_doubles;
			int current_skywars_winstreak;
			int scout_kit_wins;
			int sw_doubles_damage_dealt;
			int sw_doubles_deaths;
			int sw_doubles_kit_wins;
			int sw_doubles_melee_hits;
			int sw_doubles_melee_swings;
			int sw_doubles_rounds_played;
			int sw_doubles_scout_kit_wins;
			int sw_doubles_wins;
			int duels_winstreak_best_uhc_doubles;
			int blocks_placed;
			int uhc_doubles_blocks_placed;
			int uhc_doubles_bow_hits;
			int uhc_doubles_bow_shots;
			std::vector<std::string> bridge_map_wins;
			int best_winstreak_mode_bridge_doubles;
			int current_winstreak_mode_bridge_doubles;
			int best_bridge_winstreak;
			int current_bridge_winstreak;
			int bridge_deaths;
			int bridge_doubles_blocks_placed;
			int bridge_doubles_bow_shots;
			int bridge_doubles_bridge_deaths;
			int bridge_doubles_bridge_kills;
			int bridge_doubles_damage_dealt;
			int bridge_doubles_goals;
			int bridge_doubles_health_regenerated;
			int bridge_doubles_melee_hits;
			int bridge_doubles_melee_swings;
			int bridge_doubles_rounds_played;
			int bridge_doubles_wins;
			int bridge_kills;
			int goals;
			int uhc_doubles_deaths;
			int uhc_doubles_losses;
			int all_modes_iron_title_prestige;
			int sumo_iron_title_prestige;
			std::string progress_mode;
			std::string active_cosmetictitle;
			std::vector<std::string> packages;
			int sumo_gold_title_prestige;
			int current_winstreak_mode_sw_duel;
			int best_winstreak_mode_sw_duel;
			int sw_duel_blocks_placed;
			int sw_duel_kit_wins;
			int sw_duel_melee_swings;
			int sw_duel_rounds_played;
			int sw_duel_scout_kit_wins;
			int sw_duel_wins;
			int duels_winstreak_best_sw_duel;
			int sw_duel_health_regenerated;
			int sw_duel_damage_dealt;
			int sw_duel_kills;
			int sw_duel_melee_hits;
			int duels_opened_chests;
			int duels_opened_commons;
			int duels_opened_rares;
			std::vector<std::string> duels_chest_history;
			int duels_opened_epics;
			int sw_doubles_blocks_placed;
			int sw_doubles_kills;
			int duels_winstreak_best_sw_doubles;
			int sw_doubles_health_regenerated;
			int sw_doubles_losses;
			int all_modes_gold_title_prestige;
			int uhc_duel_damage_dealt;
			int uhc_duel_golden_apples_eaten;
			int uhc_duel_health_regenerated;
			int uhc_duel_melee_hits;
			int uhc_duel_melee_swings;
			int uhc_duel_rounds_played;
			int uhc_duel_blocks_placed;
			int uhc_duel_bow_hits;
			int uhc_duel_bow_shots;
			int current_op_winstreak;
			int current_winstreak_mode_op_doubles;
			int op_doubles_damage_dealt;
			int op_doubles_deaths;
			int op_doubles_health_regenerated;
			int op_doubles_losses;
			int op_doubles_melee_hits;
			int op_doubles_melee_swings;
			int op_doubles_rounds_played;
			bool moved_to_redis3;
			int boxing_rookie_title_prestige;
			int parkour_rookie_title_prestige;
			std::string kit_menu_option;
			std::string show_map_detail;
			bool moved_to_redis_2;
			int parkour_eight_deaths;
			int parkour_eight_losses;
			int parkour_eight_rounds_played;
			int duel_arena_bow_shots;
			int duel_arena_melee_swings;
			int duel_arena_rounds_played;
			int duel_arena_wins;
			int duel_arena_damage_dealt;
			int duel_arena_health_regenerated;
			int duel_arena_kills;
			int duel_arena_melee_hits;
			int duel_arena_blocks_placed;
			int duel_arena_bow_hits;
			int duel_arena_losses;
			int duel_arena_deaths;
			std::string arena_mode_bow;
			std::string rematch_option_1;
			int combo_duel_damage_dealt;
			int combo_duel_golden_apples_eaten;
			int combo_duel_health_regenerated;
			int combo_duel_melee_hits;
			int combo_duel_melee_swings;
			int combo_duel_rounds_played;
			int heal_pots_used;
			int potion_duel_damage_dealt;
			int potion_duel_heal_pots_used;
			int potion_duel_health_regenerated;
			int potion_duel_melee_hits;
			int potion_duel_melee_swings;
			int potion_duel_rounds_played;
		};
		struct hunger_games {
			std::vector<std::string> packages;
			int wins_teams_normal;
			bool autoarmor;
			int wins_backup;
			int wins_solo_normal;
			int wins;
			int chests_opened;
			int chests_opened_blaze;
			int coins;
			int damage;
			int damage_blaze;
			int damage_taken;
			int damage_taken_blaze;
			int deaths;
			int exp_blaze;
			int games_played;
			int games_played_blaze;
			int mobs_spawned;
			int mobs_spawned_blaze;
			int potions_drunk;
			int potions_drunk_blaze;
			int time_played;
			int time_played_blaze;
			int damage_knight;
			int damage_taken_knight;
			int exp_knight;
			int games_played_knight;
			int time_played_knight;
			int chests_opened_scout;
			int damage_scout;
			int damage_taken_scout;
			int exp_scout;
			int games_played_scout;
			int kills;
			int kills_scout;
			int kills_solo_normal;
			int potions_drunk_scout;
			int time_played_scout;
			int paladin;
			int chests_opened_knight;
			int kills_knight;
			int blitz_uses;
			int chests_opened_paladin;
			int damage_paladin;
			int damage_taken_paladin;
			int exp_paladin;
			int games_played_paladin;
			int kills_paladin;
			int potions_drunk_paladin;
			int potions_thrown;
			int potions_thrown_paladin;
			int time_played_paladin;
			int wins_paladin;
			std::string chosen_taunt;
			int mobs_spawned_paladin;
			int arrows_hit;
			int arrows_hit_paladin;
			int taunt_kills;
			int taunt_kills_paladin;
			int arrows_fired;
			int arrows_fired_paladin;
			int baker;
			int chests_opened_snowman;
			int damage_snowman;
			int damage_taken_snowman;
			int exp_snowman;
			int games_played_snowman;
			int kills_random;
			int kills_snowman;
			int mobs_spawned_snowman;
			int potions_drunk_snowman;
			int random_wins;
			int snowballs_thrown_snowman;
			int time_played_snowman;
			int wins_snowman;
			std::string chosen_finisher;
			int arrows_hit_troll;
			int chests_opened_troll;
			int damage_taken_troll;
			int damage_troll;
			int exp_troll;
			int games_played_troll;
			int kills_troll;
			int mobs_spawned_troll;
			int potions_drunk_troll;
			int potions_thrown_troll;
			int taunt_kills_troll;
			int time_played_troll;
			int wins_troll;
			int potions_drunk_knight;
			int potions_thrown_knight;
			int arrows_fired_knight;
			int arrows_hit_knight;
			int mobs_spawned_knight;
			int wins_knight;
			int kills_teams_normal;
			int taunt_kills_knight;
			int arrows_fired_necromancer;
			int arrows_hit_necromancer;
			int chests_opened_necromancer;
			int damage_necromancer;
			int damage_taken_necromancer;
			int exp_necromancer;
			int games_played_necromancer;
			int kills_necromancer;
			int mobs_spawned_necromancer;
			int taunt_kills_necromancer;
			int time_played_necromancer;
			int toxicologist;
			int chests_opened_toxicologist;
			int damage_taken_toxicologist;
			int damage_toxicologist;
			int games_played_toxicologist;
			int time_played_toxicologist;
			int arrows_fired_toxicologist;
			int arrows_hit_toxicologist;
			int exp_toxicologist;
			int kills_toxicologist;
			int potions_thrown_toxicologist;
			int mobs_spawned_toxicologist;
			int potions_drunk_toxicologist;
			int wins_teams;
			int wins_teams_toxicologist;
			int chests_opened_creepertamer;
			int damage_creepertamer;
			int damage_taken_creepertamer;
			int games_played_creepertamer;
			int time_played_creepertamer;
			int damage_meatmaster;
			int damage_taken_meatmaster;
			int exp_meatmaster;
			int games_played_meatmaster;
			int kills_meatmaster;
			int mobs_spawned_meatmaster;
			int potions_drunk_meatmaster;
			int time_played_meatmaster;
			std::string chosen_victorydance;
			int arrows_hit_jockey;
			int chests_opened_jockey;
			int damage_jockey;
			int damage_taken_jockey;
			int exp_jockey;
			int games_played_jockey;
			int kills_jockey;
			int mobs_spawned_jockey;
			int potions_drunk_jockey;
			int potions_thrown_jockey;
			int time_played_jockey;
			int wins_jockey;
		};
		struct skywars {
			struct head_collection {
				struct skywars_recent {
					std::string uuid;
					long timestamp;
					std::string mode;
					std::string sacrifice;
				};
				std::vector<skywars_recent> recent;
				std::vector<skywars_recent> prestigious;
			};
			std::string level_formatted;
			int souls;
			std::vector<std::string> packages;
			bool active_kit_TEAMS_random;
			std::string active_kit_TEAMS;
			int games_played_skywars;
			int skywars_experience;
			int blocks_placed;
			int chests_opened;
			int chests_opened_kit_mining_team_default;
			int chests_opened_solo;
			int coins;
			int deaths;
			int deaths_kit_mining_team_default;
			int deaths_solo;
			int deaths_solo_insane;
			int games;
			int games_kit_mining_team_default;
			int games_solo;
			int kills;
			int kills_kit_mining_team_default;
			int kills_monthly_a;
			int kills_solo;
			int kills_solo_insane;
			int kills_weekly_b;
			std::string last_mode;
			int longest_bow_kill;
			int longest_bow_kill_kit_mining_team_default;
			int longest_bow_kill_solo;
			int losses;
			int losses_kit_mining_team_default;
			int losses_solo;
			int losses_solo_insane;
			int melee_kills;
			int melee_kills_kit_mining_team_default;
			int melee_kills_solo;
			int most_kills_game;
			int most_kills_game_kit_mining_team_default;
			int most_kills_game_solo;
			int souls_gathered;
			int survived_players;
			int survived_players_kit_mining_team_default;
			int survived_players_solo;
			int time_played;
			int time_played_kit_mining_team_default;
			int time_played_solo;
			int void_kills;
			int void_kills_kit_mining_team_default;
			int void_kills_solo;
			int win_streak;
			std::string activeKit_SOLO;
			bool activeKit_SOLO_random;
			int quits;
			int chests_opened_team;
			int deaths_team;
			int deaths_team_insane;
			int egg_thrown;
			int kills_team;
			int kills_team_insane;
			int longest_bow_kill_team;
			int losses_team;
			int losses_team_insane;
			int melee_kills_team;
			int survived_players_team;
			int time_played_team;
			int chests_opened_kit_basic_solo_default;
			int deaths_kit_basic_solo_default;
			int deaths_team_normal;
			int losses_kit_basic_solo_default;
			int losses_team_normal;
			int survived_players_kit_basic_solo_default;
			int time_played_kit_basic_solo_default;
			int kills_kit_basic_solo_default;
			int kills_team_normal;
			int most_kills_game_kit_basic_solo_default;
			int most_kills_game_team;
			int skywars_chests;
			int team_bulldozer;
			bool toggle_team_bulldozer;
			int team_savior;
			int blocks_broken;
			int deaths_solo_normal;
			int losses_solo_normal;
			int deaths_kit_supporting_team_rookie;
			int losses_kit_supporting_team_rookie;
			int time_played_kit_supporting_team_rookie;
			int chests_opened_kit_supporting_team_rookie;
			int fastest_win;
			int fastest_win_kit_supporting_team_rookie;
			int fastest_win_solo;
			int games_kit_supporting_team_rookie;
			int kills_kit_supporting_team_rookie;
			int killstreak;
			int killstreak_kit_supporting_team_rookie;
			int killstreak_solo;
			int longest_bow_kill_kit_supporting_team_rookie;
			int melee_kills_kit_supporting_team_rookie;
			int most_kills_game_kit_supporting_team_rookie;
			int survived_players_kit_supporting_team_rookie;
			int void_kills_kit_supporting_team_rookie;
			int wins;
			int wins_kit_supporting_team_rookie;
			int wins_solo;
			int wins_solo_insane;
			int team_resistance_boost;
			int team_lucky_charm;
			int chests_opened_kit_attacking_team_knight;
			int deaths_kit_attacking_team_knight;
			int games_kit_attacking_team_knight;
			int kills_kit_attacking_team_knight;
			int longest_bow_kill_kit_attacking_team_knight;
			int losses_kit_attacking_team_knight;
			int melee_kills_kit_attacking_team_knight;
			int most_kills_game_kit_attacking_team_knight;
			int survived_players_kit_attacking_team_knight;
			int time_played_kit_attacking_team_knight;
			int void_kills_kit_attacking_team_knight;
			int cosmetic_tokens;
			int arrows_hit;
			int arrows_hit_kit_attacking_team_knight;
			int arrows_hit_solo;
			int arrows_shot;
			int arrows_shot_kit_attacking_team_knight;
			int arrows_shot_solo;
			int longest_bow_shot;
			int longest_bow_shot_kit_attacking_team_knight;
			int longest_bow_shot_solo;
			int fastest_win_kit_attacking_team_knight;
			int killstreak_kit_attacking_team_knight;
			int wins_kit_attacking_team_knight;
			int assists;
			int assists_kit_attacking_team_knight;
			int assists_solo;
			int enderpearls_thrown;
			int fall_kills;
			int fall_kills_kit_attacking_team_knight;
			int fall_kills_solo;
			int mob_kills;
			int mob_kills_kit_attacking_team_knight;
			int mob_kills_solo;
			int team_nourishment;
			int solo_bridger;
			int soul_well;
			bool used_soul_well;
			int skywars_opened_chests;
			int skywars_opened_rares;
			int skywars_opened_commons;
			std::vector<std::string> skywars_chest_history;
			int skywars_opened_epics;
			int heads;
			int heads_divine;
			int heads_divine_kit_attacking_team_knight;
			int heads_divine_solo;
			int heads_kit_attacking_team_knight;
			int heads_solo;
			head_collection head_collection;
			int chests_opened_kit_ranked_ranked_default;
			int chests_opened_ranked;
			int deaths_kit_ranked_ranked_default;
			int deaths_ranked;
			int deaths_ranked_normal;
			int games_kit_ranked_ranked_default;
			int games_ranked;
			int kills_kit_ranked_ranked_default;
			int kills_ranked;
			int kills_ranked_normal;
			int longest_bow_kill_kit_ranked_ranked_default;
			int longest_bow_kill_ranked;
			int losses_kit_ranked_ranked_default;
			int losses_ranked;
			int losses_ranked_normal;
			int melee_kills_kit_ranked_ranked_default;
			int melee_kills_ranked;
			int most_kills_game_kit_ranked_ranked_default;
			int most_kills_game_ranked;
			int survived_players_kit_ranked_ranked_default;
			int survived_players_ranked;
			int time_played_kit_ranked_ranked_default;
			int time_played_ranked;
			int void_kills_kit_ranked_ranked_default;
			int void_kills_ranked;
			int heads_kit_supporting_team_rookie;
			int heads_tasty;
			int heads_tasty_kit_supporting_team_rookie;
			int heads_tasty_solo;
			int void_kills_team;
			int assists_kit_supporting_team_rookie;
			int assists_team;
			int fastest_win_kit_ranked_ranked_default;
			int fastest_win_ranked;
			int killstreak_kit_ranked_ranked_default;
			int killstreak_ranked;
			int wins_kit_ranked_ranked_default;
			int wins_ranked;
			int wins_ranked_normal;
			int assists_kit_ranked_ranked_default;
			int assists_ranked;
			std::string active_kit_RANKED;
			bool active_kit_RANKED_random;
			int fastest_win_kit_ranked_ranked_scout;
			int games_kit_ranked_ranked_scout;
			int kills_kit_ranked_ranked_scout;
			int killstreak_kit_ranked_ranked_scout;
			int longest_bow_kill_kit_ranked_ranked_scout;
			int melee_kills_kit_ranked_ranked_scout;
			int most_kills_game_kit_ranked_ranked_scout;
			int refill_chest_destroy;
			int survived_players_kit_ranked_ranked_scout;
			int time_played_kit_ranked_ranked_scout;
			int void_kills_kit_ranked_ranked_scout;
			int wins_kit_ranked_ranked_scout;
			int chests_opened_kit_ranked_ranked_scout;
			int opals;
			int deaths_kit_ranked_ranked_scout;
			int losses_kit_ranked_ranked_scout;
			int xezbeth_luck;
			int extra_wheels;
			int mega_bridger;
			int solo_mining_expertise;
			int paid_souls;
			int mega_rusher;
			int soul_well_rares;
			int soul_well_legendaries;
			int SkyWars_openedLegendaries;
			int kills_weekly_a;
			int heads_heavenly;
			int heads_heavenly_kit_attacking_team_knight;
			int heads_heavenly_solo;
			int heads_meh;
			int heads_meh_kit_attacking_team_knight;
			int heads_meh_solo;
			int heads_salty;
			int heads_salty_kit_attacking_team_knight;
			int heads_salty_solo;
			int heads_tasty_kit_attacking_team_knight;
			int heads_yucky;
			int heads_yucky_kit_attacking_team_knight;
			int heads_yucky_solo;
			int fall_kills_team;
			int games_team;
			int heads_decent;
			int heads_decent_kit_attacking_team_knight;
			int heads_decent_team;
			int heads_divine_team;
			int heads_meh_team;
			int heads_salty_team;
			int heads_tasty_team;
			int heads_team;
			int heads_yucky_team;
			int killstreak_team;
			int wins_team;
			int wins_team_insane;
			int arrows_hit_team;
			int arrows_shot_team;
			int bow_kills;
			int bow_kills_kit_attacking_team_knight;
			int bow_kills_team;
			int team_juggernaut;
			long long rush_explained_last;
			int rush_explained;
			int chests_opened_lab;
			int chests_opened_lab_kit_attacking_team_knight;
			int chests_opened_lab_solo;
			int coins_gained_lab;
			int deaths_lab;
			int deaths_lab_kit_attacking_team_knight;
			int deaths_lab_solo;
			int enderpearls_thrown_lab;
			int losses_lab;
			int losses_lab_kit_attacking_team_knight;
			int losses_lab_solo;
			int quits_lab;
			int time_played_lab;
			int time_played_lab_kit_attacking_team_knight;
			int time_played_lab_solo;
			int win_streak_lab;
			int arrows_hit_kit_defending_team_armorer;
			int arrows_shot_kit_defending_team_armorer;
			int assists_kit_defending_team_armorer;
			int chests_opened_kit_defending_team_armorer;
			int fastest_win_kit_defending_team_armorer;
			int fastest_win_team;
			int games_kit_defending_team_armorer;
			int heads_eww;
			int heads_eww_kit_defending_team_armorer;
			int heads_eww_team;
			int heads_kit_defending_team_armorer;
			int heads_meh_kit_defending_team_armorer;
			int heads_salty_kit_defending_team_armorer;
			int kills_kit_defending_team_armorer;
			int killstreak_kit_defending_team_armorer;
			int longest_bow_kill_kit_defending_team_armorer;
			int longest_bow_shot_kit_defending_team_armorer;
			int longest_bow_shot_team;
			int melee_kills_kit_defending_team_armorer;
			int most_kills_game_kit_defending_team_armorer;
			int survived_players_kit_defending_team_armorer;
			int time_played_kit_defending_team_armorer;
			int wins_kit_defending_team_armorer;
			int deaths_kit_defending_team_armorer;
			int losses_kit_defending_team_armorer;
			int heads_decent_kit_defending_team_armorer;
			int kills_monthly_b;
			int skywars_easter_boxes;
			std::string shop_sort;
			bool shop_sort_enable_owned_first;
			std::string active_victorydance;
			std::string active_killeffect;
			std::string active_deathcry;
			std::string active_balloon;
			std::string active_killmessages;
			std::string active_sprays;
			std::string active_cage;
			std::string active_projectiletrail;
			long lastTourneyAd;
			int heads_decent_solo;
			int heads_eww_kit_attacking_team_knight;
			int items_enchanted;
			bool free_event_key_skywars_christmas_boxes_2021_2;
			int skywars_christmas_boxes;
			int heads_succulent;
			int heads_succulent_kit_attacking_team_knight;
			int heads_succulent_solo;
			int inGamePresentsCap_2021_2;
			int inGamePresentsCap_2021_5;
			int inGamePresentsCap_2021_7;
			int inGamePresentsCap_2021_9;
			int inGamePresentsCap_2021_11;
			int mob_kills_team;
		};
		struct tntgames {
			std::vector<std::string> packages;
			int wins;
			int new_spleef_double_jumps;
			int new_pvprun_double_jumps;
			int new_spleef_repulsor;
			int new_spleef_tripleshot;
			int new_tntag_speedy;
			int new_tntrun_double_jumps;
			int new_firewizard_regen;
			int new_icewizard_explode;
			int new_bloodwizard_regen;
			int new_firewizard_explode;
			int new_bloodwizard_explode;
			int new_icewizard_regen;
			int new_kineticwizard_regen;
			int new_kineticwizard_explode;
			int new_witherwizard_regen;
			int new_witherwizard_explode;
			int kills_tntag;
			int coins;
			int winstreak;
			int wins_tntag;
			int points_capture;
			int kinetic_healing_capture;
			int air_time_capture;
			long lastTourneyAd;
			int tag_blastprotection;
			int tag_slowitdown;
			int tag_speeditup;
			int deaths_tntag;
			int run_potions_splashed_on_players;
			int record_tntrun;
			int deaths_tntrun;
			int deaths_bowspleef;
			int tags_bowspleef;
		};
		struct battleground {
			std::string mage_spec;
			std::string warrior_spec;
			std::string paladin_spec;
			std::string selected_mount;
			std::string chosen_class;
			std::vector<std::string> packages;
			std::string shaman_spec;
			int coins;
		};
		struct walls3 {
			std::vector<std::string> packages;
			int coins;
		};
		struct murder_mystery {
			std::vector<std::string> murdermystery_books;
			int mm_chests;
			int detective_chance;
			int murderer_chance;
			int coins;
			int games;
			int games_MURDER_CLASSIC;
			int games_gold_rush;
			int games_gold_rush_MURDER_CLASSIC;
			int wins;
			int wins_MURDER_CLASSIC;
			int wins_gold_rush;
			int wins_gold_rush_MURDER_CLASSIC;
			std::vector<std::string> packages;
			int coins_pickedup;
			int coins_pickedup_MURDER_CLASSIC;
			int coins_pickedup_library;
			int coins_pickedup_library_MURDER_CLASSIC;
			int games_library;
			int games_library_MURDER_CLASSIC;
			int wins_library;
			int wins_library_MURDER_CLASSIC;
			int coins_pickedup_transport;
			int coins_pickedup_transport_MURDER_CLASSIC;
			int games_transport;
			int games_transport_MURDER_CLASSIC;
			int wins_transport;
			int wins_transport_MURDER_CLASSIC;
			int coins_pickedup_mountain;
			int coins_pickedup_mountain_MURDER_CLASSIC;
			int deaths;
			int deaths_MURDER_CLASSIC;
			int deaths_mountain;
			int deaths_mountain_MURDER_CLASSIC;
			int games_mountain;
			int games_mountain_MURDER_CLASSIC;
			int wins_mountain;
			int wins_mountain_MURDER_CLASSIC;
			int games_spooky_mansion;
			int games_spooky_mansion_MURDER_CLASSIC;
			int wins_spooky_mansion;
			int wins_spooky_mansion_MURDER_CLASSIC;
			int coins_pickedup_snowglobe;
			int coins_pickedup_snowglobe_MURDER_CLASSIC;
			int deaths_snowglobe;
			int deaths_snowglobe_MURDER_CLASSIC;
			int games_snowglobe;
			int games_snowglobe_MURDER_CLASSIC;
			int bow_kills;
			int bow_kills_MURDER_CLASSIC;
			int bow_kills_transport;
			int bow_kills_transport_MURDER_CLASSIC;
			int detective_wins;
			int detective_wins_MURDER_CLASSIC;
			int detective_wins_transport;
			int detective_wins_transport_MURDER_CLASSIC;
			int kills;
			int kills_MURDER_CLASSIC;
			int kills_transport;
			int kills_transport_MURDER_CLASSIC;
			int quickest_detective_win_time_seconds;
			int quickest_detective_win_time_seconds_MURDER_CLASSIC;
			int quickest_detective_win_time_seconds_transport;
			int quickest_detective_win_time_seconds_transport_MURDER_CLASSIC;
			int was_hero;
			int was_hero_MURDER_CLASSIC;
			int was_hero_transport;
			int was_hero_transport_MURDER_CLASSIC;
			int mm_christmas_chests;
			int deaths_subway;
			int deaths_subway_MURDER_CLASSIC;
			int games_subway;
			int games_subway_MURDER_CLASSIC;
			int kills_as_murderer;
			int kills_as_murderer_MURDER_CLASSIC;
			int kills_as_murderer_subway;
			int kills_as_murderer_subway_MURDER_CLASSIC;
			int kills_subway;
			int kills_subway_MURDER_CLASSIC;
			int knife_kills;
			int knife_kills_MURDER_CLASSIC;
			int knife_kills_subway;
			int knife_kills_subway_MURDER_CLASSIC;
			int coins_pickedup_MURDER_DOUBLE_UP;
			int coins_pickedup_mountain_MURDER_DOUBLE_UP;
			int deaths_MURDER_DOUBLE_UP;
			int deaths_mountain_MURDER_DOUBLE_UP;
			int detective_wins_MURDER_DOUBLE_UP;
			int detective_wins_mountain;
			int detective_wins_mountain_MURDER_DOUBLE_UP;
			int games_MURDER_DOUBLE_UP;
			int games_mountain_MURDER_DOUBLE_UP;
			int quickest_detective_win_time_seconds_MURDER_DOUBLE_UP;
			int quickest_detective_win_time_seconds_mountain;
			int quickest_detective_win_time_seconds_mountain_MURDER_DOUBLE_UP;
			int was_hero_MURDER_DOUBLE_UP;
			int was_hero_mountain;
			int was_hero_mountain_MURDER_DOUBLE_UP;
			int wins_MURDER_DOUBLE_UP;
			int wins_mountain_MURDER_DOUBLE_UP;
			int deaths_subway_MURDER_DOUBLE_UP;
			int games_subway_MURDER_DOUBLE_UP;
			int coins_pickedup_gold_rush;
			int coins_pickedup_gold_rush_MURDER_CLASSIC;
			int kills_as_murderer_gold_rush;
			int kills_as_murderer_gold_rush_MURDER_CLASSIC;
			int kills_gold_rush;
			int kills_gold_rush_MURDER_CLASSIC;
			int knife_kills_gold_rush;
			int knife_kills_gold_rush_MURDER_CLASSIC;
			int murderer_wins;
			int murderer_wins_MURDER_CLASSIC;
			int murderer_wins_gold_rush;
			int murderer_wins_gold_rush_MURDER_CLASSIC;
			int quickest_murderer_win_time_seconds;
			int quickest_murderer_win_time_seconds_MURDER_CLASSIC;
			int quickest_murderer_win_time_seconds_gold_rush;
			int quickest_murderer_win_time_seconds_gold_rush_MURDER_CLASSIC;
			int thrown_knife_kills;
			int thrown_knife_kills_MURDER_CLASSIC;
			int thrown_knife_kills_gold_rush;
			int thrown_knife_kills_gold_rush_MURDER_CLASSIC;

		};
		struct arena {
			int coins;
		};
		struct gingerbread {
			int coins;
			std::vector<std::string> packages;
		};
		struct paintball {
			int coins;
			std::vector<std::string> packages;
			int kills;
			bool showKillPrefix;
			std::string favorite_slots;
		};
		struct quake {
			int coins;
			std::vector<std::string> packages;
			long lastTourneyAd;
			bool compass_selected;
			bool alternative_gun_cooldown_indicator;
			bool enable_sound;
			bool message_others_kills_and_deaths;
			bool message_your_deaths;
			bool instantRespawn;
			bool showDashCooldown;
			bool message_your_kills;
			int highest_killstreak;
			bool message_coin;
			bool message_multi_kills;
			bool message_killstreaks;
			int kills;
			int headshots;
			int distance_travelled;
			int shots_fired;
			int kills_since_update_feb_2017;
			int deaths;
			bool showKillPrefix;
			int kills_teams;
			int kills_timeattack;
			int kills_dm;
			int kills_dm_teams;
			int kills_tourney_unknown;
			bool message_powerup_collections;
		};
		struct vampire_z {
			int coins;
			bool updated_status;
		};
		struct walls {
			int coins;
		};
		struct mcgo {
			int coins;
			int kills;
			int game_wins_deathmatch;
			int game_wins;
			int kills_deathmatch;
			int headshot_kills;
			int grenade_kills;
			int grenadeKills;
			int pocket_change;
			std::vector<std::string> packages;
			int bombs_planted;
			int bombs_defused;
		};
		struct supersmash {
			int coins;
		};
		struct uhc {
			int coins;
			bool clearup_achievement;
			bool saved_stats;
			int deaths;
			int kit_WORKING_TOOLS;
			std::string equippedKit;
			int deaths_solo;
		};
		struct skyblock {
			struct skyblock_profile {
				std::string profile_id;
				std::string cute_name;
			};
			std::vector<skyblock_profile> profiles;
		};
		struct build_battle {
			std::vector<std::string> packages;
		};
		struct legacy {
			int next_tokens_seconds;
			int quakecraft_tokens;
			int tokens;
			int total_tokens;
		};
		struct housing {
			std::vector<std::string> packages;
		};
	}
	struct stats {
		stats_n::arcade arcade;
		stats_n::bedwars bedwars;
		stats_n::duels duels;
		stats_n::hunger_games hunger_games;
		stats_n::skywars skywars;
		stats_n::tntgames tntgames;
		stats_n::battleground battleground;
		stats_n::walls3 walls3;
		stats_n::murder_mystery murder_mystery;
		stats_n::arena arena;
		stats_n::gingerbread gingerbread;
		stats_n::paintball paintball;
		stats_n::quake quake;
		stats_n::vampire_z vampire_z;
		stats_n::walls walls;
		stats_n::mcgo mcgo;
		stats_n::supersmash supersmash;
		stats_n::uhc uhc;
		stats_n::skyblock skyblock;
		stats_n::build_battle build_battle;
		stats_n::legacy legacy;
		stats_n::housing housing;
	};
	struct achievements {
		int bedwars_level;
		int bedwars_beds;
		int bedwars_collectors_edition;
		int bedwars_bedwars_killer;
		int general_challenger;
		int bedwars_wins;
		int general_quest_master;
		int duels_duels_traveller;
		int duels_duels_win_streak;
		int duels_duels_winner;
		int general_wins;
		int blitz_looter;
		int blitz_mob_master;
		int blitz_coins;
		int general_coins;
		int skywars_you_re_a_star;
		int skywars_kills_solo;
		int blitz_kit_experience_collector;
		int skywars_kills_team;
		int tntgames_clinic;
		int tntgames_tnt_banker;
		int tntgames_tnt_triathlon;
		int tntgames_tnt_tag_wins;
		int blitz_fighting_expert;
		int blitz_kills;
		int blitz_kit_expert;
		int blitz_kit_collector;
		int blitz_treasure_seeker;
		int blitz_wins;
		int blitz_master_of_kits;
		int walls_jack_of_all_trades;
		int blitz_rng_master;
		int bedwars_loot_box;
		int murdermystery_hoarder;
		int arcade_arcade_banker;
		int pit_gold;
		int pit_kills;
		int duels_duels_division;
		int summer_shopaholic;
		int blitz_wins_teams;
		int skywars_kits_team;
		int pit_events;
		int skyblock_minion_lover;
		int skyblock_treasury;
		int skyblock_harvester;
		int skyblock_excavator;
		int skyblock_combat;
		int skyblock_gatherer;
		int skyblock_augmentation;
		int pit_prestiges;
		int pit_renown;
		int arena_climb_the_ranks;
		int gingerbread_banker;
		int pit_mysticism;
		int skywars_wins_solo;
		int skywars_heads;
		int skywars_cages;
		int murdermystery_wins_as_survivor;
		int skywars_opal_obsession;
		int skywars_kits_solo;
		int duels_goals;
		int duels_bridge_doubles_wins;
		int duels_bridge_win_streak;
		int duels_bridge_wins;
		int duels_unique_map_wins;
		int skywars_wins_team;
		int skyblock_domesticator;
		int halloween_candy_hoarder;
		int halloween_pumpkinator;
		int duels_duels_mastery;
		int murdermystery_countermeasures;
		int tntgames_block_runner;
		int uhc_bounty;
		int arcade_ctw_slayer;
		int bedwars_bedwars_challenger;
		int christmas_advent_;
		int christmas_present_collector;
		int christmas_no_christmas;
		int christmas_santa_says_rounds;
		int quake_coins;
		int quake_kills;
		int quake_headshots;
		int arcade_party_super_star;
		int arcade_arcade_winner;
		int murdermystery_kills_as_murderer;
		int murdermystery_wins_as_murderer;
	};
	struct pet_consumables {
		int BONE;
		int BREAD;
		int CAKE;
		int FEATHER;
		int GOLD_RECORD;
		int HAY_BLOCK;
		int LAVA_BUCKET;
		int MAGMA_CREAM;
		int MELON;
		int MILK_BUCKET;
		int PUMPKIN_PIE;
		int RAW_FISH;
		int SLIME_BALL;
		int STICK;
		int WATER_BUCKET;
		int WHEAT;
		int WOOD_SWORD;
		int APPLE;
		int COOKED_BEEF;
		int COOKIE;
		int LEASH;
		int RED_ROSE;
		int ROTTEN_FLESH;
		int BAKED_POTATO;
		int CARROT_ITEM;
		int PORK;
		int MUSHROOM_SOUP;

	};
	struct vanity_meta {
		std::vector<std::string> packages;
	};
	struct eugene {
		float dailyTwoKExp;
	};
	struct challenges {
		struct challenges_alltime {
			int SKYWARS__enderman_challenge;
			int SKYWARS__feeding_the_void_challenge;
			int TNTGAMES__tnt_tag_challenge;
			int ARCADE__zombies_challenge;
			int SKYWARS__rush_challenge;
			int ARCADE__party_games_challenge;
			int BEDWARS__support;
			int BEDWARS__offensive;
			int BUILD_BATTLE__guesser_challenge;
			int BUILD_BATTLE__top__challenge;
			int MURDER_MYSTERY__murder_spree;
			int MURDER_MYSTERY__hero;
			int MURDER_MYSTERY__sherlock;
			int DUELS__feed_the_void_challenge;

		};
		challenges_alltime all_time;
	};
	struct achievementRewardsNew {
		long for_points_200;
		long for_points_400;
		long for_points_300;
		long for_points_500;
		long for_points_700;
		long for_points_800;
		long for_points_2200;
		long for_points_1100;
		long for_points_1200;
		long for_points_1300;
		long for_points_1400;
		long for_points_1500;
		long for_points_1600;
		long for_points_1700;
		long for_points_1800;
		long for_points_1900;
		long for_points_2000;
		long for_points_2100;
		long for_points_1000;
		long for_points_900;
	};
	struct housing_meta {
		std::vector<std::string> packages;
		std::vector<std::string> allowedBlocks;
		std::string tutorialStep;
	};
	struct questSettings {
		bool autoActivate;
	};
	struct tourney {
		long first_join_lobby;
	};
	struct easter2022Cooldowns2 {
		bool VIP0;
		bool VIP1;
		bool SUPERSTAR0;
		bool MVP_PLUS0;
		bool NORMAL1;
		bool VIP_PLUS0;
		bool MVP0;
		bool MVP1;
		bool VIP2;
		bool SUPERSTAR1;
		bool MVP_PLUS1;
		bool NORMAL2;
		bool NORMAL0;
		bool VIP_PLUS1;
	};
}

// public structs
struct hypixel_player {
	int achievements_points;
	int rewardHighScore;
	int vanity_meta;
	int rewardStreak;
	int totalDailyRewards;
	int totalRewards;
	int achievement_points;
	std::string _id;
	std::string uuid;
	std::string display_name;
	std::string player_name;
	std::string channel;
	std::string currentPet;
	std::string newPackageRank;
	std::string mostRecentGameType;
	std::string monthlyPackageRank;
	std::string mostRecentMonthlyPackageRank;
	std::string currentGadget;
	long long first_login;
	long long network_exp;
	long long lastAdsenseGenerateTime;
	long long lastClaimedReward;
	long long last_login;
	long long last_logout;
	long long karma;
	std::vector<std::string> known_aliases;
	std::vector<std::string> known_aliases_lower;
	std::vector<std::string> achievements_one_time;
	data::stats stats;
	data::achievements achievements;
	data::pet_consumables pet_consumables;
	data::vanity_meta vanitymeta;
	data::eugene eugene;
	data::challenges challenges;
	data::achievementRewardsNew achievementRewardsNew;
	data::housing_meta housing_meta;
	data::questSettings questSettings;
	data::easter2022Cooldowns2 easter2022Cooldowns2;
	bool main2017Tutorial;
};
struct hypixel_friend {
	std::string _id;
	std::string uuidSender;
	std::string uuidReceiver;
	long long started;
};
struct hypixel_punishments {
	int watchdog_lastMinute;
	int staff_rollingDaily;
	int watchdog_total;
	int watchdog_rollingDaily;
	int staff_total;
	std::string _i;
};
struct hypixel_game {
	int id;
	std::string name;
	std::string databaseName;
	std::vector<std::string> modeNames;
};
struct hypixel_recent_game {
	long long date;
	std::string gameType;
	std::string mode;
	std::string map;
};

namespace json {
	nlohmann::json set_obj;
	nlohmann::json temp_obj;
	auto get_string( std::string data ) -> std::string {
		try
		{
			return temp_obj[ data ];
		}
		catch ( ... )
		{
			return "NULL";
		}
	}
	auto get_long_long( std::string data ) -> long long {
		try
		{
			return temp_obj[ data ];
		}
		catch ( ... )
		{
			return NULL;
		}
	}
	auto get_int( std::string data ) -> int {
		try
		{
			return temp_obj[ data ];
		}
		catch ( ... )
		{
			return NULL;
		}
	}
	auto get_bool( std::string data ) -> bool {
		try
		{
			return temp_obj[ data ];
		}
		catch ( ... )
		{
			return NULL;
		}
	}
}

namespace get {
	// player
	namespace player {
		auto player( hypixel_player& player ) -> void {
			json::temp_obj = json::set_obj[ "player" ];
			player._id = json::get_string( "_id" );
			player.uuid = json::get_string( "uuid" );
			player.display_name = json::get_string( "displayname" );
			player.first_login = json::get_long_long( "firstLogin" );

			try {
				for ( auto& t : json::temp_obj[ "knownAliases" ] )
					player.known_aliases.push_back( t );
			}
			catch ( ... ) { }

			try {
				for ( auto& t : json::temp_obj[ "knownAliasesLower" ] )
					player.known_aliases_lower.push_back( t );
			}
			catch ( ... ) { }

			player.last_login = json::get_long_long( "last_login" );
			player.player_name = json::get_string( "player_name" );

			try {
				for ( auto& t : json::temp_obj[ "achievementsOneTime" ] )
					player.achievements_one_time.push_back( t );
			}
			catch ( ... ) { }

			player.achievement_points = json::get_int( "achievements_points" );
			player.last_logout = json::get_long_long( "lastLogout" );

			try {
				for ( auto& t : json::temp_obj[ "vanityMeta" ][ "packages" ] )
					player.vanitymeta.packages.push_back( t );
			}
			catch ( ... ) { }

			player.network_exp = json::get_long_long( "networkExp" );
			player.lastAdsenseGenerateTime = json::get_long_long( "lastAdsenseGenerateTime" );
			player.lastClaimedReward = json::get_long_long( "lastClaimedReward" );
			player.rewardHighScore = json::get_int( "rewardHighScore" );
			player.rewardStreak = json::get_int( "rewardStreak" );
			player.totalDailyRewards = json::get_int( "totalDailyRewards" );
			player.totalRewards = json::get_int( "totalRewards" );
			player.karma = json::get_long_long( "karma" );

			try {
				for ( auto& t : json::temp_obj[ "housingMeta" ][ "packages" ] )
					player.housing_meta.packages.push_back( t );
			}
			catch ( ... ) { }

			try {
				for ( auto& t : json::temp_obj[ "housingMeta" ][ "allowedBlocks" ] )
					player.housing_meta.allowedBlocks.push_back( t );
			}
			catch ( ... ) { }

			player.newPackageRank = json::get_string( "newPackageRank" );
			player.channel = json::get_string( "channel" );
			player.main2017Tutorial = json::get_bool( "main2017Tutorial" );
			player.currentPet = json::get_string( "currentPet" );
			player.monthlyPackageRank = json::get_string( "monthlyPackageRank" );
			player.mostRecentMonthlyPackageRank = json::get_string( "mostRecentMonthlyPackageRank" );
			player.currentGadget = json::get_string( "currentGadget" );
			player.mostRecentGameType = json::get_string( "mostRecentGameType" );
		}
		auto challenges_all_time( hypixel_player& plr )  -> void {
			json::temp_obj = json::set_obj[ "player" ][ "challenges" ][ "all_time" ];
			plr.challenges.all_time.SKYWARS__enderman_challenge = json::get_int( "SKYWARS__enderman_challenge" );
			plr.challenges.all_time.SKYWARS__feeding_the_void_challenge = json::get_int( "SKYWARS__feeding_the_void_challenge" );
			plr.challenges.all_time.TNTGAMES__tnt_tag_challenge = json::get_int( "TNTGAMES__tnt_tag_challenge" );
			plr.challenges.all_time.ARCADE__zombies_challenge = json::get_int( "ARCADE__zombies_challenge" );
			plr.challenges.all_time.SKYWARS__rush_challenge = json::get_int( "SKYWARS__rush_challenge" );
			plr.challenges.all_time.ARCADE__party_games_challenge = json::get_int( "ARCADE__party_games_challenge" );
			plr.challenges.all_time.BEDWARS__support = json::get_int( "BEDWARS__support" );
			plr.challenges.all_time.BEDWARS__offensive = json::get_int( "BEDWARS__offensive" );
			plr.challenges.all_time.BUILD_BATTLE__guesser_challenge = json::get_int( "BUILD_BATTLE__guesser_challenge" );
			plr.challenges.all_time.BUILD_BATTLE__top__challenge = json::get_int( "BUILD_BATTLE__top__challenge" );
			plr.challenges.all_time.MURDER_MYSTERY__murder_spree = json::get_int( "MURDER_MYSTERY__murder_spree" );
			plr.challenges.all_time.MURDER_MYSTERY__hero = json::get_int( "MURDER_MYSTERY__hero" );
			plr.challenges.all_time.MURDER_MYSTERY__sherlock = json::get_int( "MURDER_MYSTERY__sherlock" );
			plr.challenges.all_time.DUELS__feed_the_void_challenge = json::get_int( "DUELS__feed_the_void_challenge" );
		}
		auto pet_consumables( hypixel_player& plr )  -> void {
			json::temp_obj = json::set_obj[ "player" ][ "petConsumables" ];
			plr.pet_consumables.BONE = json::get_int( "BONE" );
			plr.pet_consumables.BREAD = json::get_int( "BREAD" );
			plr.pet_consumables.CAKE = json::get_int( "CAKE" );
			plr.pet_consumables.FEATHER = json::get_int( "FEATHER" );
			plr.pet_consumables.GOLD_RECORD = json::get_int( "GOLD_RECORD" );
			plr.pet_consumables.HAY_BLOCK = json::get_int( "HAY_BLOCK" );
			plr.pet_consumables.LAVA_BUCKET = json::get_int( "LAVA_BUCKET" );
			plr.pet_consumables.MAGMA_CREAM = json::get_int( "MAGMA_CREAM" );
			plr.pet_consumables.MELON = json::get_int( "MELON" );
			plr.pet_consumables.MILK_BUCKET = json::get_int( "MILK_BUCKET" );
			plr.pet_consumables.PUMPKIN_PIE = json::get_int( "PUMPKIN_PIE" );
			plr.pet_consumables.RAW_FISH = json::get_int( "RAW_FISH" );
			plr.pet_consumables.SLIME_BALL = json::get_int( "SLIME_BALL" );
			plr.pet_consumables.STICK = json::get_int( "STICK" );
			plr.pet_consumables.WATER_BUCKET = json::get_int( "WATER_BUCKET" );
			plr.pet_consumables.WHEAT = json::get_int( "WHEAT" );
			plr.pet_consumables.WOOD_SWORD = json::get_int( "WOOD_SWORD" );
			plr.pet_consumables.APPLE = json::get_int( "APPLE" );
			plr.pet_consumables.COOKED_BEEF = json::get_int( "COOKED_BEEF" );
			plr.pet_consumables.COOKIE = json::get_int( "COOKIE" );
			plr.pet_consumables.LEASH = json::get_int( "LEASH" );
			plr.pet_consumables.RED_ROSE = json::get_int( "RED_ROSE" );
			plr.pet_consumables.ROTTEN_FLESH = json::get_int( "ROTTEN_FLESH" );
			plr.pet_consumables.BAKED_POTATO = json::get_int( "BAKED_POTATO" );
			plr.pet_consumables.CARROT_ITEM = json::get_int( "CARROT_ITEM" );
			plr.pet_consumables.PORK = json::get_int( "PORK" );
			plr.pet_consumables.MUSHROOM_SOUP = json::get_int( "MUSHROOM_SOUP" );
		}
		auto player_achievements( hypixel_player& plr )  -> void {
			json::temp_obj = json::set_obj[ "player" ][ "achievements" ];
			plr.achievements.skywars_wins_solo = json::get_int( "skywars_wins_solo" );
			plr.achievements.skywars_wins_team = json::get_int( "skywars_wins_team" );
			plr.achievements.skywars_cages = json::get_int( "skywars_cages" );
			plr.achievements.skywars_kills_team = json::get_int( "skywars_kills_team" );
			plr.achievements.skywars_kits_team = json::get_int( "skywars_kits_team" );
			plr.achievements.skywars_kits_solo = json::get_int( "skywars_kits_solo" );
			plr.achievements.skywars_kills_solo = json::get_int( "skywars_kills_solo" );
			plr.achievements.quake_kills = json::get_int( "quake_kills" );
			plr.achievements.arena_climb_the_ranks = json::get_int( "arena_climb_the_ranks" );
			plr.achievements.bedwars_level = json::get_int( "bedwars_level" );
			plr.achievements.pit_gold = json::get_int( "pit_gold" );
			plr.achievements.pit_kills = json::get_int( "pit_kills" );
			plr.achievements.general_wins = json::get_int( "general_wins" );
			plr.achievements.general_challenger = json::get_int( "general_challenger" );
			plr.achievements.skywars_heads = json::get_int( "skywars_heads" );
			plr.achievements.pit_events = json::get_int( "pit_events" );
			plr.achievements.skywars_you_re_a_star = json::get_int( "skywars_you_re_a_star" );
			plr.achievements.tntgames_clinic = json::get_int( "tntgames_clinic" );
			plr.achievements.general_coins = json::get_int( "general_coins" );
			plr.achievements.tntgames_tnt_banker = json::get_int( "tntgames_tnt_banker" );
			plr.achievements.tntgames_tnt_triathlon = json::get_int( "tntgames_tnt_triathlon" );
			plr.achievements.arcade_arcade_banker = json::get_int( "arcade_arcade_banker" );
			plr.achievements.halloween_candy_hoarder = json::get_int( "halloween_candy_hoarder" );
			plr.achievements.arcade_arcade_winner = json::get_int( "arcade_arcade_winner" );
			plr.achievements.tntgames_block_runner = json::get_int( "tntgames_block_runner" );
			plr.achievements.bedwars_loot_box = json::get_int( "bedwars_loot_box" );
			plr.achievements.christmas_advent_ = json::get_int( "christmas_advent_" );
			plr.achievements.murdermystery_hoarder = json::get_int( "murdermystery_hoarder" );
			plr.achievements.murdermystery_wins_as_survivor = json::get_int( "murdermystery_wins_as_survivor" );
			plr.achievements.christmas_present_collector = json::get_int( "christmas_present_collector" );
			plr.achievements.bedwars_collectors_edition = json::get_int( "bedwars_collectors_edition" );
			plr.achievements.general_quest_master = json::get_int( "general_quest_master" );
			plr.achievements.summer_shopaholic = json::get_int( "summer_shopaholic" );
			plr.achievements.bedwars_bedwars_killer = json::get_int( "bedwars_bedwars_killer" );
			plr.achievements.bedwars_wins = json::get_int( "bedwars_wins" );
			plr.achievements.bedwars_beds = json::get_int( "bedwars_beds" );
			plr.achievements.arcade_party_super_star = json::get_int( "arcade_party_super_star" );
			plr.achievements.tntgames_tnt_tag_wins = json::get_int( "tntgames_tnt_tag_wins" );
			plr.achievements.skyblock_minion_lover = json::get_int( "skyblock_minion_lover" );
			plr.achievements.skyblock_treasury = json::get_int( "skyblock_treasury" );
			plr.achievements.skyblock_harvester = json::get_int( "skyblock_harvester" );
			plr.achievements.skyblock_augmentation = json::get_int( "skyblock_augmentation" );
			plr.achievements.skyblock_excavator = json::get_int( "skyblock_excavator" );
			plr.achievements.skyblock_combat = json::get_int( "skyblock_combat" );
			plr.achievements.skyblock_domesticator = json::get_int( "skyblock_domesticator" );
			plr.achievements.skyblock_gatherer = json::get_int( "skyblock_gatherer" );
			plr.achievements.murdermystery_kills_as_murderer = json::get_int( "murdermystery_kills_as_murderer" );
			plr.achievements.murdermystery_wins_as_murderer = json::get_int( "murdermystery_wins_as_murderer" );
			plr.achievements.murdermystery_countermeasures = json::get_int( "murdermystery_countermeasures" );
			plr.achievements.duels_duels_traveller = json::get_int( "duels_duels_traveller" );
			plr.achievements.duels_duels_win_streak = json::get_int( "duels_duels_win_streak" );
			plr.achievements.duels_duels_winner = json::get_int( "duels_duels_winner" );
		}

		// stats
		namespace stats {
			auto bedwars( hypixel_player& plr ) -> void {
				json::temp_obj = json::set_obj[ "player" ][ "stats" ][ "Bedwars" ];
				plr.stats.bedwars.first_join_7 = json::get_bool( "first_join_7" );

				try {
					for ( auto& t : json::temp_obj[ "packages" ] )
						plr.stats.bedwars.packages.push_back( t );
				}
				catch ( ... ) { }

				plr.stats.bedwars.bedwars_christmas_boxes = json::get_int( "bedwars_christmas_boxes" );
				plr.stats.bedwars.experience = json::get_int( "Experience" );
				plr.stats.bedwars.bedwars_boxes = json::get_int( "bedwars_boxes" );
				plr.stats.bedwars.games_played_bedwars_1 = json::get_int( "games_played_bedwars_1" );
				plr.stats.bedwars._items_purchased_bedwars = json::get_int( "_items_purchased_bedwars" );
				plr.stats.bedwars.beds_broken_bedwars = json::get_int( "beds_broken_bedwars" );
				plr.stats.bedwars.coins = json::get_int( "coins" );
				plr.stats.bedwars.death_bedwars = json::get_int( "death_bedwars" );
				plr.stats.bedwars.diamond_resources_collected_bedwars = json::get_int( "diamond_resources_collected_bedwars" );
				plr.stats.bedwars.emerald_resources_collected_bedwars = json::get_int( "emerald_resources_collected_bedwars" );
				plr.stats.bedwars.entity_attack_deaths_bedwars = json::get_int( "entity_attack_deaths_bedwars" );
				plr.stats.bedwars.entity_attack_kills_bedwars = json::get_int( "entity_attack_kills_bedwars" );
				plr.stats.bedwars.final_deaths_bedwars = json::get_int( "final_deaths_bedwars" );
				plr.stats.bedwars.four_four__items_purchased_bedwars = json::get_int( "four_four__items_purchased_bedwars" );
				plr.stats.bedwars.four_four_beds_lost_bedwars = json::get_int( "four_four_beds_lost_bedwars" );
				plr.stats.bedwars.four_four_deaths_bedwars = json::get_int( "four_four_deaths_bedwars" );
				plr.stats.bedwars.four_four_diamond_resources_collected_bedwars = json::get_int( "four_four_diamond_resources_collected_bedwars" );
				plr.stats.bedwars.four_four_emerald_resources_collected_bedwars = json::get_int( "four_four_emerald_resources_collected_bedwars" );
				plr.stats.bedwars.four_four_entity_attack_deaths_bedwars = json::get_int( "four_four_entity_attack_deaths_bedwars" );
				plr.stats.bedwars.four_four_entity_attack_kills_bedwars = json::get_int( "four_four_entity_attack_kills_bedwars" );
				plr.stats.bedwars.four_four_final_deaths_bedwars = json::get_int( "four_four_final_deaths_bedwars" );
				plr.stats.bedwars.four_four_games_played_bedwars = json::get_int( "four_four_games_played_bedwars" );
				plr.stats.bedwars.four_four_gold_resources_collected_bedwars = json::get_int( "four_four_gold_resources_collected_bedwars" );
				plr.stats.bedwars.four_four_iron_resources_collected_bedwars = json::get_int( "four_four_iron_resources_collected_bedwars" );
				plr.stats.bedwars.four_four_items_purchased_bedwars = json::get_int( "four_four_items_purchased_bedwars" );
				plr.stats.bedwars.four_four_kills_bedwars = json::get_int( "four_four_kills_bedwars" );
				plr.stats.bedwars.four_four_losses_bedwars = json::get_int( "four_four_losses_bedwars" );
				plr.stats.bedwars.four_four_permanent_items_purchased_bedwars = json::get_int( "four_four_permanent_items_purchased_bedwars" );
				plr.stats.bedwars.four_four_resources_collected_bedwars = json::get_int( "four_four_resources_collected_bedwars" );
				plr.stats.bedwars.four_four_void_final_deaths_bedwars = json::get_int( "four_four_void_final_deaths_bedwars" );
				plr.stats.bedwars.four_four_void_kills_bedwars = json::get_int( "four_four_void_kills_bedwars" );
				plr.stats.bedwars.games_played_bedwars = json::get_int( "games_played_bedwars" );
				plr.stats.bedwars.gold_resources_collected_bedwars = json::get_int( "gold_resources_collected_bedwars" );
				plr.stats.bedwars.iron_resources_collected_bedwars = json::get_int( "iron_resources_collected_bedwars" );
				plr.stats.bedwars.items_purchased_bedwars = json::get_int( "items_purchased_bedwars" );
				plr.stats.bedwars.kills_bedwars = json::get_int( "kills_bedwars" );
				plr.stats.bedwars.losses_bedwars = json::get_int( "losses_bedwars" );
				plr.stats.bedwars.permanent_items_purchased_bedwars = json::get_int( "permanent_items_purchased_bedwars" );
				plr.stats.bedwars.resources_collected_bedwars = json::get_int( "resources_collected_bedwars" );
				plr.stats.bedwars.void_final_deaths_bedwars = json::get_int( "void_final_deaths_bedwars" );
				plr.stats.bedwars.void_kills_bedwars = json::get_int( "void_kills_bedwars" );
				plr.stats.bedwars.eight_two_winstreak = json::get_int( "eight_two_winstreak" );
				plr.stats.bedwars.eight_two__items_purchased_bedwars = json::get_int( "eight_two__items_purchased_bedwars" );
				plr.stats.bedwars.eight_two_beds_lost_bedwars = json::get_int( "eight_two_beds_lost_bedwars" );
				plr.stats.bedwars.eight_two_deaths_bedwars = json::get_int( "eight_two_deaths_bedwars" );
				plr.stats.bedwars.eight_two_emerald_resources_collected_bedwars = json::get_int( "eight_two_emerald_resources_collected_bedwars" );
				plr.stats.bedwars.eight_two_entity_attack_final_deaths_bedwars = json::get_int( "eight_two_entity_attack_final_deaths_bedwars" );
				plr.stats.bedwars.eight_two_entity_attack_final_kills_bedwars = json::get_int( "eight_two_entity_attack_final_kills_bedwars" );
				plr.stats.bedwars.eight_two_final_deaths_bedwars = json::get_int( "eight_two_final_deaths_bedwars" );
				plr.stats.bedwars.eight_two_final_kills_bedwars = json::get_int( "eight_two_final_kills_bedwars" );
				plr.stats.bedwars.eight_two_games_played_bedwars = json::get_int( "eight_two_games_played_bedwars" );
				plr.stats.bedwars.eight_two_gold_resources_collected_bedwars = json::get_int( "eight_two_gold_resources_collected_bedwars" );
				plr.stats.bedwars.eight_two_iron_resources_collected_bedwars = json::get_int( "eight_two_iron_resources_collected_bedwars" );
				plr.stats.bedwars.eight_two_items_purchased_bedwars = json::get_int( "eight_two_items_purchased_bedwars" );
				plr.stats.bedwars.eight_two_kills_bedwars = json::get_int( "eight_two_kills_bedwars" );
				plr.stats.bedwars.eight_two_losses_bedwars = json::get_int( "eight_two_losses_bedwars" );
				plr.stats.bedwars.eight_two_resources_collected_bedwars = json::get_int( "eight_two_resources_collected_bedwars" );
				plr.stats.bedwars.eight_two_void_deaths_bedwars = json::get_int( "eight_two_void_deaths_bedwars" );
				plr.stats.bedwars.eight_two_void_kills_bedwars = json::get_int( "eight_two_void_kills_bedwars" );
				plr.stats.bedwars.entity_attack_final_deaths_bedwars = json::get_int( "entity_attack_final_deaths_bedwars" );
				plr.stats.bedwars.entity_attack_final_kills_bedwars = json::get_int( "entity_attack_final_kills_bedwars" );
				plr.stats.bedwars.final_kills_bedwars = json::get_int( "final_kills_bedwars" );
				plr.stats.bedwars.void_deaths_bedwars = json::get_int( "void_deaths_bedwars" );
				plr.stats.bedwars.eight_two_entity_attack_deaths_bedwars = json::get_int( "eight_two_entity_attack_deaths_bedwars" );
				plr.stats.bedwars.eight_two_entity_attack_kills_bedwars = json::get_int( "eight_two_entity_attack_kills_bedwars" );
				plr.stats.bedwars.eight_two_magic_deaths_bedwars = json::get_int( "eight_two_magic_deaths_bedwars" );
				plr.stats.bedwars.magic_deaths_bedwars = json::get_int( "magic_deaths_bedwars" );
				plr.stats.bedwars.winstreak = json::get_int( "winstreak" );
				plr.stats.bedwars.fall_kills_bedwars = json::get_int( "fall_kills_bedwars" );
				plr.stats.bedwars.four_four_entity_attack_final_kills_bedwars = json::get_int( "four_four_entity_attack_final_kills_bedwars" );
				plr.stats.bedwars.four_four_fall_kills_bedwars = json::get_int( "four_four_fall_kills_bedwars" );
				plr.stats.bedwars.four_four_final_kills_bedwars = json::get_int( "four_four_final_kills_bedwars" );
				plr.stats.bedwars.four_four_wins_bedwars = json::get_int( "four_four_wins_bedwars" );
				plr.stats.bedwars.wins_bedwars = json::get_int( "wins_bedwars" );
				plr.stats.bedwars.four_four_void_deaths_bedwars = json::get_int( "four_four_void_deaths_bedwars" );
				plr.stats.bedwars.bedwars_boxes = json::get_int( "bedwars_boxes" );
				plr.stats.bedwars.beds_broken_bedwars = json::get_int( "beds_broken_bedwars" );
				plr.stats.bedwars.fall_deaths_bedwars = json::get_int( "fall_deaths_bedwars" );
				plr.stats.bedwars.four_four_beds_broken_bedwars = json::get_int( "four_four_beds_broken_bedwars" );
				plr.stats.bedwars.four_four_fall_deaths_bedwars = json::get_int( "four_four_fall_deaths_bedwars" );
				plr.stats.bedwars.four_four_entity_attack_final_deaths_bedwars = json::get_int( "four_four_entity_attack_final_deaths_bedwars" );
				plr.stats.bedwars.four_four_void_final_kills_bedwars = json::get_int( "four_four_void_final_kills_bedwars" );
				plr.stats.bedwars.void_final_kills_bedwars = json::get_int( "void_final_kills_bedwars" );
				plr.stats.bedwars.fall_final_kills_bedwars = json::get_int( "fall_final_kills_bedwars" );
				plr.stats.bedwars.four_four_fall_final_kills_bedwars = json::get_int( "four_four_fall_final_kills_bedwars" );
				plr.stats.bedwars.favourites_2 = json::get_string( "favourites_2" );
				plr.stats.bedwars.four_four_magic_final_kills_bedwars = json::get_int( "four_four_magic_final_kills_bedwars" );
				plr.stats.bedwars.magic_final_kills_bedwars = json::get_int( "magic_final_kills_bedwars" );
				plr.stats.bedwars.eight_two_fall_final_kills_bedwars = json::get_int( "eight_two_fall_final_kills_bedwars" );
				plr.stats.bedwars.eight_two_permanent_items_purchased_bedwars = json::get_int( "eight_two_permanent_items_purchased_bedwars" );
				plr.stats.bedwars.eight_two_beds_broken_bedwars = json::get_int( "eight_two_beds_broken_bedwars" );
				plr.stats.bedwars.eight_two_void_final_kills_bedwars = json::get_int( "eight_two_void_final_kills_bedwars" );
				plr.stats.bedwars.eight_two_wins_bedwars = json::get_int( "eight_two_wins_bedwars" );
				plr.stats.bedwars.eight_two_diamond_resources_collected_bedwars = json::get_int( "eight_two_diamond_resources_collected_bedwars" );
				plr.stats.bedwars.eight_two_magic_final_deaths_bedwars = json::get_int( "eight_two_magic_final_deaths_bedwars" );
				plr.stats.bedwars.magic_final_deaths_bedwars = json::get_int( "magic_final_deaths_bedwars" );
				plr.stats.bedwars.eight_one_winstreak = json::get_int( "eight_one_winstreak" );
				plr.stats.bedwars.eight_one__items_purchased_bedwars = json::get_int( "eight_one__items_purchased_bedwars" );
				plr.stats.bedwars.eight_one_beds_broken_bedwars = json::get_int( "eight_one_beds_broken_bedwars" );
				plr.stats.bedwars.eight_one_beds_lost_bedwars = json::get_int( "eight_one_beds_lost_bedwars" );
				plr.stats.bedwars.eight_one_deaths_bedwars = json::get_int( "eight_one_deaths_bedwars" );
				plr.stats.bedwars.eight_one_diamond_resources_collected_bedwars = json::get_int( "eight_one_diamond_resources_collected_bedwars" );
				plr.stats.bedwars.eight_one_emerald_resources_collected_bedwars = json::get_int( "eight_one_emerald_resources_collected_bedwars" );
				plr.stats.bedwars.eight_one_entity_attack_deaths_bedwars = json::get_int( "eight_one_entity_attack_deaths_bedwars" );
				plr.stats.bedwars.eight_one_entity_attack_final_kills_bedwars = json::get_int( "eight_one_entity_attack_final_kills_bedwars" );
				plr.stats.bedwars.eight_one_entity_attack_kills_bedwars = json::get_int( "eight_one_entity_attack_kills_bedwars" );
				plr.stats.bedwars.eight_one_final_kills_bedwars = json::get_int( "eight_one_final_kills_bedwars" );
				plr.stats.bedwars.eight_one_games_played_bedwars = json::get_int( "eight_one_games_played_bedwars" );
				plr.stats.bedwars.eight_one_gold_resources_collected_bedwars = json::get_int( "eight_one_gold_resources_collected_bedwars" );
				plr.stats.bedwars.eight_one_iron_resources_collected_bedwars = json::get_int( "eight_one_iron_resources_collected_bedwars" );
				plr.stats.bedwars.eight_one_items_purchased_bedwars = json::get_int( "eight_one_items_purchased_bedwars" );
				plr.stats.bedwars.eight_one_kills_bedwars = json::get_int( "eight_one_kills_bedwars" );
				plr.stats.bedwars.eight_one_permanent_items_purchased_bedwars = json::get_int( "eight_one_permanent_items_purchased_bedwars" );
				plr.stats.bedwars.eight_one_resources_collected_bedwars = json::get_int( "eight_one_resources_collected_bedwars" );
				plr.stats.bedwars.eight_one_void_deaths_bedwars = json::get_int( "eight_one_void_deaths_bedwars" );
				plr.stats.bedwars.eight_one_void_final_kills_bedwars = json::get_int( "eight_one_void_final_kills_bedwars" );
				plr.stats.bedwars.eight_one_void_kills_bedwars = json::get_int( "eight_one_void_kills_bedwars" );
				plr.stats.bedwars.eight_one_wins_bedwars = json::get_int( "eight_one_wins_bedwars" );
				plr.stats.bedwars.selected_challenge_type = json::get_string( "selected_challenge_type" );
				plr.stats.bedwars.favorite_slots = json::get_string( "favorite_slots" );
				plr.stats.bedwars.eight_two_fire_tick_kills_bedwars = json::get_int( "eight_two_fire_tick_kills_bedwars" );
				plr.stats.bedwars.eight_two_void_final_deaths_bedwars = json::get_int( "eight_two_void_final_deaths_bedwars" );
				plr.stats.bedwars.fire_tick_kills_bedwars = json::get_int( "fire_tick_kills_bedwars" );
				plr.stats.bedwars.four_four_magic_kills_bedwars = json::get_int( "four_four_magic_kills_bedwars" );
				plr.stats.bedwars.magic_kills_bedwars = json::get_int( "magic_kills_bedwars" );
				plr.stats.bedwars.four_four_magic_deaths_bedwars = json::get_int( "four_four_magic_deaths_bedwars" );
				plr.stats.bedwars.bedwars_opened_legendaries = json::get_int( "Bedwars_openedLegendaries" );
				plr.stats.bedwars.bedwars_opened_epics = json::get_int( "Bedwars_openedEpics" );
				plr.stats.bedwars.four_three_winstreak = json::get_int( "four_three_winstreak" );
				plr.stats.bedwars.four_three__items_purchased_bedwars = json::get_int( "four_three__items_purchased_bedwars" );
				plr.stats.bedwars.four_three_beds_broken_bedwars = json::get_int( "four_three_beds_broken_bedwars" );
				plr.stats.bedwars.four_three_beds_lost_bedwars = json::get_int( "four_three_beds_lost_bedwars" );
				plr.stats.bedwars.four_three_deaths_bedwars = json::get_int( "four_three_deaths_bedwars" );
				plr.stats.bedwars.four_three_entity_attack_deaths_bedwars = json::get_int( "four_three_entity_attack_deaths_bedwars" );
				plr.stats.bedwars.four_three_entity_attack_final_kills_bedwars = json::get_int( "four_three_entity_attack_final_kills_bedwars" );
				plr.stats.bedwars.four_three_entity_attack_kills_bedwars = json::get_int( "four_three_entity_attack_kills_bedwars" );
				plr.stats.bedwars.four_three_fall_deaths_bedwars = json::get_int( "four_three_fall_deaths_bedwars" );
				plr.stats.bedwars.four_three_final_deaths_bedwars = json::get_int( "four_three_final_deaths_bedwars" );
				plr.stats.bedwars.four_three_final_kills_bedwars = json::get_int( "four_three_final_kills_bedwars" );
				plr.stats.bedwars.four_three_games_played_bedwars = json::get_int( "four_three_games_played_bedwars" );
				plr.stats.bedwars.four_three_gold_resources_collected_bedwars = json::get_int( "four_three_gold_resources_collected_bedwars" );
				plr.stats.bedwars.four_three_iron_resources_collected_bedwars = json::get_int( "four_three_iron_resources_collected_bedwars" );
				plr.stats.bedwars.four_three_items_purchased_bedwars = json::get_int( "four_three_items_purchased_bedwars" );
				plr.stats.bedwars.four_three_kills_bedwars = json::get_int( "four_three_kills_bedwars" );
				plr.stats.bedwars.four_three_losses_bedwars = json::get_int( "four_three_losses_bedwars" );
				plr.stats.bedwars.four_three_magic_deaths_bedwars = json::get_int( "four_three_magic_deaths_bedwars" );
				plr.stats.bedwars.four_three_permanent_items_purchased_bedwars = json::get_int( "four_three_permanent_items_purchased_bedwars" );
				plr.stats.bedwars.four_three_resources_collected_bedwars = json::get_int( "four_three_resources_collected_bedwars" );
				plr.stats.bedwars.four_three_void_deaths_bedwars = json::get_int( "four_three_void_deaths_bedwars" );
				plr.stats.bedwars.four_three_void_final_deaths_bedwars = json::get_int( "four_three_void_final_deaths_bedwars" );
				plr.stats.bedwars.four_three_void_final_kills_bedwars = json::get_int( "four_three_void_final_kills_bedwars" );
				plr.stats.bedwars.four_three_void_kills_bedwars = json::get_int( "four_three_void_kills_bedwars" );
				plr.stats.bedwars.four_three_fall_kills_bedwars = json::get_int( "four_three_fall_kills_bedwars" );
				plr.stats.bedwars.four_three_wins_bedwars = json::get_int( "four_three_wins_bedwars" );
				plr.stats.bedwars.four_three_entity_attack_final_deaths_bedwars = json::get_int( "four_three_entity_attack_final_deaths_bedwars" );
				plr.stats.bedwars.lastTourneyAd = json::get_long_long( "lastTourneyAd" );
			}
			auto arcade( hypixel_player& plr ) -> void {
				json::temp_obj = json::set_obj[ "player" ][ "stats" ][ "Arcade" ];
				plr.stats.arcade.coins = json::get_int( "coins" );
				plr.stats.arcade.stamp_level = json::get_int( "stamp_level" );
				plr.stats.arcade.candy_found_halloween_simulator = json::get_int( "candy_found_halloween_simulator" );
				plr.stats.arcade.wins_party = json::get_int( "wins_party" );
				plr.stats.arcade.round_wins_simon_says = json::get_int( "round_wins_simon_says" );
				plr.stats.arcade.top_score_simon_says = json::get_int( "top_score_simon_says" );
				plr.stats.arcade.rounds_simon_says = json::get_int( "rounds_simon_says" );
				plr.stats.arcade.lawn_moower_mowed_best_score_party = json::get_int( "lawn_moower_mowed_best_score_party" );
				plr.stats.arcade.lawn_moower_mowed_total_score_party = json::get_int( "lawn_moower_mowed_total_score_party" );
				plr.stats.arcade.total_stars_party = json::get_int( "total_stars_party" );
				plr.stats.arcade.round_wins_party = json::get_int( "round_wins_party" );
			}
			auto duels( hypixel_player& plr ) -> void {
				json::temp_obj = json::set_obj[ "player" ][ "stats" ][ "Duels" ];
				plr.stats.duels.op_rookie_title_prestige = json::get_int( "op_rookie_title_prestige" );
				plr.stats.duels.combo_rookie_title_prestige = json::get_int( "combo_rookie_title_prestige" );
				plr.stats.duels.bow_rookie_title_prestige = json::get_int( "bow_rookie_title_prestige" );
				plr.stats.duels.mega_walls_rookie_title_prestige = json::get_int( "mega_walls_rookie_title_prestige" );
				plr.stats.duels.blitz_rookie_title_prestige = json::get_int( "blitz_rookie_title_prestige" );
				plr.stats.duels.skywars_rookie_title_prestige = json::get_int( "skywars_rookie_title_prestige" );
				plr.stats.duels.uhc_rookie_title_prestige = json::get_int( "uhc_rookie_title_prestige" );
				plr.stats.duels.all_modes_rookie_title_prestige = json::get_int( "all_modes_rookie_title_prestige" );
				plr.stats.duels.classic_rookie_title_prestige = json::get_int( "classic_rookie_title_prestige" );
				plr.stats.duels.no_debuff_rookie_title_prestige = json::get_int( "no_debuff_rookie_title_prestige" );
				plr.stats.duels.sumo_rookie_title_prestige = json::get_int( "sumo_rookie_title_prestige" );
				plr.stats.duels.tnt_games_rookie_title_prestige = json::get_int( "tnt_games_rookie_title_prestige" );
				plr.stats.duels.bridge_rookie_title_prestige = json::get_int( "bridge_rookie_title_prestige" );
				plr.stats.duels.selected_2_new = json::get_string( "selected_2_new" );
				plr.stats.duels.selected_1_new = json::get_string( "selected_1_new" );
				plr.stats.duels.moved_to_redis3 = json::get_bool( "moved_to_redis_3" );
				plr.stats.duels.parkour_rookie_title_prestige = json::get_int( "parkour_rookie_title_prestige" );
				plr.stats.duels.boxing_rookie_title_prestige = json::get_int( "boxing_rookie_title_prestige" );
				plr.stats.duels.duels_recently_played2 = json::get_string( "duels_recently_played2" );
				plr.stats.duels.show_lb_option = json::get_string( "show_lb_option" );
				plr.stats.duels.chat_enabled = json::get_string( "chat_enabled" );

				try {
					for ( auto& t : json::temp_obj[ "maps_won_on" ] )
						plr.stats.duels.maps_won_on.push_back( t );
				}
				catch ( ... ) { }

				plr.stats.duels.coins = json::get_int( "coins" );
				plr.stats.duels.best_overall_winstreak = json::get_int( "best_overall_winstreak" );
				plr.stats.duels.current_winstreak = json::get_int( "current_winstreak" );
				plr.stats.duels.best_uhc_winstreak = json::get_int( "best_uhc_winstreak" );
				plr.stats.duels.best_skywars_winstreak = json::get_int( "best_skywars_winstreak" );
				plr.stats.duels.best_blitz_winstreak = json::get_int( "best_blitz_winstreak" );
				plr.stats.duels.best_classic_winstreak = json::get_int( "best_classic_winstreak" );
				plr.stats.duels.best_tnt_games_winstreak = json::get_int( "best_tnt_games_winstreak" );
				plr.stats.duels.best_sumo_winstreak = json::get_int( "best_sumo_winstreak" );
				plr.stats.duels.best_bridge_winstreak = json::get_int( "best_bridge_winstreak" );
				plr.stats.duels.best_winstreak_mode_sumo_duel = json::get_int( "best_winstreak_mode_sumo_duel" );
				plr.stats.duels.current_winstreak_mode_sumo_duel = json::get_int( "current_winstreak_mode_sumo_duel" );
				plr.stats.duels.current_sumo_winstreak = json::get_int( "current_sumo_winstreak" );
				plr.stats.duels.kills = json::get_int( "kills" );
				plr.stats.duels.melee_hits = json::get_int( "melee_hits" );
				plr.stats.duels.melee_swings = json::get_int( "melee_swings" );
				plr.stats.duels.rounds_played = json::get_int( "rounds_played" );
				plr.stats.duels.sumo_duel_kills = json::get_int( "sumo_duel_kills" );
				plr.stats.duels.sumo_duel_melee_hits = json::get_int( "sumo_duel_melee_hits" );
				plr.stats.duels.sumo_duel_melee_swings = json::get_int( "sumo_duel_melee_swings" );
				plr.stats.duels.sumo_duel_rounds_played = json::get_int( "sumo_duel_rounds_played" );
				plr.stats.duels.sumo_duel_wins = json::get_int( "sumo_duel_wins" );
				plr.stats.duels.wins = json::get_int( "wins" );
				plr.stats.duels.deaths = json::get_int( "deaths" );
				plr.stats.duels.losses = json::get_int( "losses" );
				plr.stats.duels.sumo_duel_deaths = json::get_int( "sumo_duel_deaths" );
				plr.stats.duels.sumo_duel_losses = json::get_int( "sumo_duel_losses" );
				plr.stats.duels.best_winstreak_mode_classic_duel = json::get_int( "best_winstreak_mode_classic_duel" );
				plr.stats.duels.current_winstreak_mode_classic_duel = json::get_int( "current_winstreak_mode_classic_duel" );
				plr.stats.duels.current_classic_winstreak = json::get_int( "current_classic_winstreak" );
				plr.stats.duels.classic_duel_damage_dealt = json::get_int( "classic_duel_damage_dealt" );
				plr.stats.duels.classic_duel_health_regenerated = json::get_int( "classic_duel_health_regenerated" );
				plr.stats.duels.classic_duel_kills = json::get_int( "classic_duel_kills" );
				plr.stats.duels.classic_duel_melee_hits = json::get_int( "classic_duel_melee_hits" );
				plr.stats.duels.classic_duel_melee_swings = json::get_int( "classic_duel_melee_swings" );
				plr.stats.duels.classic_duel_rounds_played = json::get_int( "classic_duel_rounds_played" );
				plr.stats.duels.classic_duel_wins = json::get_int( "classic_duel_wins" );
				plr.stats.duels.damage_dealt = json::get_int( "damage_dealt" );
				plr.stats.duels.health_regenerated = json::get_int( "health_regenerated" );
				plr.stats.duels.classic_duel_deaths = json::get_int( "classic_duel_deaths" );
				plr.stats.duels.classic_duel_losses = json::get_int( "classic_duel_losses" );
			}
			auto hungergames( hypixel_player& plr )  -> void {
				json::temp_obj = json::set_obj[ "player" ][ "stats" ][ "HungerGames" ];

				try {
					for ( auto& t : json::temp_obj[ "packages" ] )
						plr.stats.hunger_games.packages.push_back( t );
				}
				catch ( ... ) { }

				plr.stats.hunger_games.wins_teams_normal = json::get_int( "wins_teams_normal" );
				plr.stats.hunger_games.autoarmor = json::get_bool( "autoarmor" );
				plr.stats.hunger_games.wins_backup = json::get_int( "wins_backup" );
				plr.stats.hunger_games.wins_solo_normal = json::get_int( "wins_solo_normal" );
				plr.stats.hunger_games.wins = json::get_int( "wins" );
				plr.stats.hunger_games.chests_opened = json::get_int( "chests_opened" );
				plr.stats.hunger_games.chests_opened_blaze = json::get_int( "chests_opened_blaze" );
				plr.stats.hunger_games.coins = json::get_int( "coins" );
				plr.stats.hunger_games.damage = json::get_int( "damage" );
				plr.stats.hunger_games.damage_blaze = json::get_int( "damage_blaze" );
				plr.stats.hunger_games.damage_taken = json::get_int( "damage_taken" );
				plr.stats.hunger_games.damage_taken_blaze = json::get_int( "damage_taken_blaze" );
				plr.stats.hunger_games.deaths = json::get_int( "deaths" );
				plr.stats.hunger_games.exp_blaze = json::get_int( "exp_blaze" );
				plr.stats.hunger_games.games_played = json::get_int( "games_played" );
				plr.stats.hunger_games.games_played_blaze = json::get_int( "games_played_blaze" );
				plr.stats.hunger_games.mobs_spawned = json::get_int( "mobs_spawned" );
				plr.stats.hunger_games.mobs_spawned_blaze = json::get_int( "mobs_spawned_blaze" );
				plr.stats.hunger_games.potions_drunk = json::get_int( "potions_drunk" );
				plr.stats.hunger_games.potions_drunk_blaze = json::get_int( "potions_drunk_blaze" );
				plr.stats.hunger_games.time_played = json::get_int( "time_played" );
				plr.stats.hunger_games.time_played_blaze = json::get_int( "time_played_blaze" );
				plr.stats.hunger_games.damage_knight = json::get_int( "damage_knight" );
				plr.stats.hunger_games.damage_taken_knight = json::get_int( "damage_taken_knight" );
				plr.stats.hunger_games.exp_knight = json::get_int( "exp_knight" );
				plr.stats.hunger_games.games_played_knight = json::get_int( "games_played_knight" );
				plr.stats.hunger_games.time_played_knight = json::get_int( "time_played_knight" );
				plr.stats.hunger_games.chests_opened_scout = json::get_int( "chests_opened_scout" );
				plr.stats.hunger_games.damage_scout = json::get_int( "damage_scout" );
				plr.stats.hunger_games.damage_taken_scout = json::get_int( "damage_taken_scout" );
				plr.stats.hunger_games.exp_scout = json::get_int( "exp_scout" );
				plr.stats.hunger_games.games_played_scout = json::get_int( "games_played_scout" );
				plr.stats.hunger_games.kills = json::get_int( "kills" );
				plr.stats.hunger_games.kills_scout = json::get_int( "kills_scout" );
				plr.stats.hunger_games.kills_solo_normal = json::get_int( "kills_solo_normal" );
				plr.stats.hunger_games.potions_drunk_scout = json::get_int( "potions_drunk_scout" );
				plr.stats.hunger_games.time_played_scout = json::get_int( "time_played_scout" );
				plr.stats.hunger_games.paladin = json::get_int( "paladin" );
				plr.stats.hunger_games.chests_opened_knight = json::get_int( "chests_opened_knight" );
				plr.stats.hunger_games.kills_knight = json::get_int( "kills_knight" );
				plr.stats.hunger_games.blitz_uses = json::get_int( "blitz_uses" );
				plr.stats.hunger_games.chests_opened_paladin = json::get_int( "chests_opened_paladin" );
				plr.stats.hunger_games.damage_paladin = json::get_int( "damage_paladin" );
				plr.stats.hunger_games.damage_taken_paladin = json::get_int( "damage_taken_paladin" );
				plr.stats.hunger_games.exp_paladin = json::get_int( "exp_paladin" );
				plr.stats.hunger_games.games_played_paladin = json::get_int( "games_played_paladin" );
				plr.stats.hunger_games.kills_paladin = json::get_int( "kills_paladin" );
				plr.stats.hunger_games.potions_drunk_paladin = json::get_int( "potions_drunk_paladin" );
				plr.stats.hunger_games.potions_thrown = json::get_int( "potions_thrown" );
				plr.stats.hunger_games.potions_thrown_paladin = json::get_int( "potions_thrown_paladin" );
				plr.stats.hunger_games.time_played_paladin = json::get_int( "time_played_paladin" );
				plr.stats.hunger_games.wins_paladin = json::get_int( "wins_paladin" );
				plr.stats.hunger_games.chosen_taunt = json::get_string( "chosen_taunt" );
				plr.stats.hunger_games.mobs_spawned_paladin = json::get_int( "mobs_spawned_paladin" );
				plr.stats.hunger_games.arrows_hit = json::get_int( "arrows_hit" );
				plr.stats.hunger_games.arrows_hit_paladin = json::get_int( "arrows_hit_paladin" );
				plr.stats.hunger_games.taunt_kills = json::get_int( "taunt_kills" );
				plr.stats.hunger_games.taunt_kills_paladin = json::get_int( "taunt_kills_paladin" );
				plr.stats.hunger_games.arrows_fired = json::get_int( "arrows_fired" );
				plr.stats.hunger_games.arrows_fired_paladin = json::get_int( "arrows_fired_paladin" );
				plr.stats.hunger_games.baker = json::get_int( "baker" );
				plr.stats.hunger_games.chests_opened_snowman = json::get_int( "chests_opened_snowman" );
				plr.stats.hunger_games.damage_snowman = json::get_int( "damage_snowman" );
				plr.stats.hunger_games.damage_taken_snowman = json::get_int( "damage_taken_snowman" );
				plr.stats.hunger_games.exp_snowman = json::get_int( "exp_snowman" );
				plr.stats.hunger_games.games_played_snowman = json::get_int( "games_played_snowman" );
				plr.stats.hunger_games.kills_random = json::get_int( "kills_random" );
				plr.stats.hunger_games.kills_snowman = json::get_int( "kills_snowman" );
				plr.stats.hunger_games.mobs_spawned_snowman = json::get_int( "mobs_spawned_snowman" );
				plr.stats.hunger_games.potions_drunk_snowman = json::get_int( "potions_drunk_snowman" );
				plr.stats.hunger_games.random_wins = json::get_int( "random_wins" );
				plr.stats.hunger_games.snowballs_thrown_snowman = json::get_int( "snowballs_thrown_snowman" );
				plr.stats.hunger_games.time_played_snowman = json::get_int( "time_played_snowman" );
				plr.stats.hunger_games.wins_snowman = json::get_int( "wins_snowman" );
				plr.stats.hunger_games.chosen_finisher = json::get_string( "chosen_finisher" );
				plr.stats.hunger_games.arrows_hit_troll = json::get_int( "arrows_hit_troll" );
				plr.stats.hunger_games.chests_opened_troll = json::get_int( "chests_opened_troll" );
				plr.stats.hunger_games.damage_taken_troll = json::get_int( "damage_taken_troll" );
				plr.stats.hunger_games.damage_troll = json::get_int( "damage_troll" );
				plr.stats.hunger_games.exp_troll = json::get_int( "exp_troll" );
				plr.stats.hunger_games.games_played_troll = json::get_int( "games_played_troll" );
				plr.stats.hunger_games.kills_troll = json::get_int( "kills_troll" );
				plr.stats.hunger_games.mobs_spawned_troll = json::get_int( "mobs_spawned_troll" );
				plr.stats.hunger_games.potions_drunk_troll = json::get_int( "potions_drunk_troll" );
				plr.stats.hunger_games.potions_thrown_troll = json::get_int( "potions_thrown_troll" );
				plr.stats.hunger_games.taunt_kills_troll = json::get_int( "taunt_kills_troll" );
				plr.stats.hunger_games.time_played_troll = json::get_int( "time_played_troll" );
				plr.stats.hunger_games.wins_troll = json::get_int( "wins_troll" );
				plr.stats.hunger_games.potions_drunk_knight = json::get_int( "potions_drunk_knight" );
				plr.stats.hunger_games.potions_thrown_knight = json::get_int( "potions_thrown_knight" );
				plr.stats.hunger_games.arrows_fired_knight = json::get_int( "arrows_fired_knight" );
				plr.stats.hunger_games.arrows_hit_knight = json::get_int( "arrows_hit_knight" );
				plr.stats.hunger_games.mobs_spawned_knight = json::get_int( "mobs_spawned_knight" );
				plr.stats.hunger_games.wins_knight = json::get_int( "wins_knight" );
				plr.stats.hunger_games.kills_teams_normal = json::get_int( "kills_teams_normal" );
				plr.stats.hunger_games.taunt_kills_knight = json::get_int( "taunt_kills_knight" );
				plr.stats.hunger_games.arrows_fired_necromancer = json::get_int( "arrows_fired_necromancer" );
				plr.stats.hunger_games.arrows_hit_necromancer = json::get_int( "arrows_hit_necromancer" );
				plr.stats.hunger_games.chests_opened_necromancer = json::get_int( "chests_opened_necromancer" );
				plr.stats.hunger_games.damage_necromancer = json::get_int( "damage_necromancer" );
				plr.stats.hunger_games.damage_taken_necromancer = json::get_int( "damage_taken_necromancer" );
				plr.stats.hunger_games.exp_necromancer = json::get_int( "exp_necromancer" );
				plr.stats.hunger_games.games_played_necromancer = json::get_int( "games_played_necromancer" );
				plr.stats.hunger_games.kills_necromancer = json::get_int( "kills_necromancer" );
				plr.stats.hunger_games.mobs_spawned_necromancer = json::get_int( "mobs_spawned_necromancer" );
				plr.stats.hunger_games.taunt_kills_necromancer = json::get_int( "taunt_kills_necromancer" );
				plr.stats.hunger_games.time_played_necromancer = json::get_int( "time_played_necromancer" );
				plr.stats.hunger_games.toxicologist = json::get_int( "toxicologist" );
				plr.stats.hunger_games.chests_opened_toxicologist = json::get_int( "chests_opened_toxicologist" );
				plr.stats.hunger_games.damage_taken_toxicologist = json::get_int( "damage_taken_toxicologist" );
				plr.stats.hunger_games.damage_toxicologist = json::get_int( "damage_toxicologist" );
				plr.stats.hunger_games.games_played_toxicologist = json::get_int( "games_played_toxicologist" );
				plr.stats.hunger_games.time_played_toxicologist = json::get_int( "time_played_toxicologist" );
				plr.stats.hunger_games.arrows_fired_toxicologist = json::get_int( "arrows_fired_toxicologist" );
				plr.stats.hunger_games.arrows_hit_toxicologist = json::get_int( "arrows_hit_toxicologist" );
				plr.stats.hunger_games.exp_toxicologist = json::get_int( "exp_toxicologist" );
				plr.stats.hunger_games.kills_toxicologist = json::get_int( "kills_toxicologist" );
				plr.stats.hunger_games.potions_thrown_toxicologist = json::get_int( "potions_thrown_toxicologist" );
				plr.stats.hunger_games.mobs_spawned_toxicologist = json::get_int( "mobs_spawned_toxicologist" );
				plr.stats.hunger_games.potions_drunk_toxicologist = json::get_int( "potions_drunk_toxicologist" );
				plr.stats.hunger_games.wins_teams = json::get_int( "wins_teams" );
				plr.stats.hunger_games.wins_teams_toxicologist = json::get_int( "wins_teams_toxicologist" );
				plr.stats.hunger_games.chests_opened_creepertamer = json::get_int( "chests_opened_creepertamer" );
				plr.stats.hunger_games.damage_creepertamer = json::get_int( "damage_creepertamer" );
				plr.stats.hunger_games.damage_taken_creepertamer = json::get_int( "damage_taken_creepertamer" );
				plr.stats.hunger_games.games_played_creepertamer = json::get_int( "games_played_creepertamer" );
				plr.stats.hunger_games.time_played_creepertamer = json::get_int( "time_played_creepertamer" );
				plr.stats.hunger_games.damage_meatmaster = json::get_int( "damage_meatmaster" );
				plr.stats.hunger_games.damage_taken_meatmaster = json::get_int( "damage_taken_meatmaster" );
				plr.stats.hunger_games.exp_meatmaster = json::get_int( "exp_meatmaster" );
				plr.stats.hunger_games.games_played_meatmaster = json::get_int( "games_played_meatmaster" );
				plr.stats.hunger_games.kills_meatmaster = json::get_int( "kills_meatmaster" );
				plr.stats.hunger_games.mobs_spawned_meatmaster = json::get_int( "mobs_spawned_meatmaster" );
				plr.stats.hunger_games.potions_drunk_meatmaster = json::get_int( "potions_drunk_meatmaster" );
				plr.stats.hunger_games.time_played_meatmaster = json::get_int( "time_played_meatmaster" );
				plr.stats.hunger_games.chosen_victorydance = json::get_string( "chosen_victorydance" );
				plr.stats.hunger_games.arrows_hit_jockey = json::get_int( "arrows_hit_jockey" );
				plr.stats.hunger_games.chests_opened_jockey = json::get_int( "chests_opened_jockey" );
				plr.stats.hunger_games.damage_jockey = json::get_int( "damage_jockey" );
				plr.stats.hunger_games.damage_taken_jockey = json::get_int( "damage_taken_jockey" );
				plr.stats.hunger_games.exp_jockey = json::get_int( "exp_jockey" );
				plr.stats.hunger_games.games_played_jockey = json::get_int( "games_played_jockey" );
				plr.stats.hunger_games.kills_jockey = json::get_int( "kills_jockey" );
				plr.stats.hunger_games.mobs_spawned_jockey = json::get_int( "mobs_spawned_jockey" );
				plr.stats.hunger_games.potions_drunk_jockey = json::get_int( "potions_drunk_jockey" );
				plr.stats.hunger_games.potions_thrown_jockey = json::get_int( "potions_thrown_jockey" );
				plr.stats.hunger_games.time_played_jockey = json::get_int( "time_played_jockey" );
				plr.stats.hunger_games.wins_jockey = json::get_int( "wins_jockey" );

			}
			auto skywars( hypixel_player& plr ) -> void {
				json::temp_obj = json::set_obj[ "player" ][ "stats" ][ "SkyWars" ];
				plr.stats.skywars.level_formatted = json::get_string( "levelFormatted" );
				plr.stats.skywars.souls = json::get_int( "souls" );

				try {
					for ( auto& t : json::temp_obj[ "packages" ] )
						plr.stats.skywars.packages.push_back( t );
				}
				catch ( ... ) { }

				plr.stats.skywars.active_kit_TEAMS_random = json::get_bool( "activeKit_TEAMS_random" );
				plr.stats.skywars.active_kit_TEAMS = json::get_string( "activeKit_TEAMS" );
				plr.stats.skywars.games_played_skywars = json::get_int( "games_played_skywars" );
				plr.stats.skywars.skywars_experience = json::get_int( "skywars_experience" );
				plr.stats.skywars.blocks_placed = json::get_int( "blocks_placed" );
				plr.stats.skywars.chests_opened = json::get_int( "chests_opened" );
				plr.stats.skywars.chests_opened_kit_mining_team_default = json::get_int( "chests_opened_kit_mining_team_default" );
				plr.stats.skywars.chests_opened_solo = json::get_int( "chests_opened_solo" );
				plr.stats.skywars.coins = json::get_int( "coins" );
				plr.stats.skywars.deaths = json::get_int( "deaths" );
				plr.stats.skywars.deaths_kit_mining_team_default = json::get_int( "deaths_kit_mining_team_default" );
				plr.stats.skywars.deaths_solo = json::get_int( "deaths_solo" );
				plr.stats.skywars.deaths_solo_insane = json::get_int( "deaths_solo_insane" );
				plr.stats.skywars.games = json::get_int( "games" );
				plr.stats.skywars.games_kit_mining_team_default = json::get_int( "games_kit_mining_team_default" );
				plr.stats.skywars.games_solo = json::get_int( "games_solo" );
				plr.stats.skywars.kills = json::get_int( "kills" );
				plr.stats.skywars.kills_kit_mining_team_default = json::get_int( "kills_kit_mining_team_default" );
				plr.stats.skywars.kills_monthly_a = json::get_int( "kills_monthly_a" );
				plr.stats.skywars.kills_solo = json::get_int( "kills_solo" );
				plr.stats.skywars.kills_solo_insane = json::get_int( "kills_solo_insane" );
				plr.stats.skywars.kills_weekly_b = json::get_int( "kills_weekly_b" );
				plr.stats.skywars.last_mode = json::get_string( "lastMode" );
				plr.stats.skywars.longest_bow_kill = json::get_int( "longest_bow_kill" );
				plr.stats.skywars.longest_bow_kill_kit_mining_team_default = json::get_int( "longest_bow_kill_kit_mining_team_default" );
				plr.stats.skywars.longest_bow_kill_solo = json::get_int( "longest_bow_kill_solo" );
				plr.stats.skywars.losses = json::get_int( "losses" );
				plr.stats.skywars.losses_kit_mining_team_default = json::get_int( "losses_kit_mining_team_default" );
				plr.stats.skywars.losses_solo = json::get_int( "losses_solo" );
				plr.stats.skywars.losses_solo_insane = json::get_int( "losses_solo_insane" );
				plr.stats.skywars.melee_kills = json::get_int( "melee_kills" );
				plr.stats.skywars.melee_kills_kit_mining_team_default = json::get_int( "melee_kills_kit_mining_team_default" );
				plr.stats.skywars.melee_kills_solo = json::get_int( "melee_kills_solo" );
				plr.stats.skywars.most_kills_game = json::get_int( "most_kills_game" );
				plr.stats.skywars.most_kills_game_kit_mining_team_default = json::get_int( "most_kills_game_kit_mining_team_default" );
				plr.stats.skywars.most_kills_game_solo = json::get_int( "most_kills_game_solo" );
				plr.stats.skywars.souls_gathered = json::get_int( "souls_gathered" );
				plr.stats.skywars.survived_players = json::get_int( "survived_players" );
				plr.stats.skywars.survived_players_kit_mining_team_default = json::get_int( "survived_players_kit_mining_team_default" );
				plr.stats.skywars.survived_players_solo = json::get_int( "survived_players_solo" );
				plr.stats.skywars.time_played = json::get_int( "time_played" );
				plr.stats.skywars.time_played_kit_mining_team_default = json::get_int( "time_played_kit_mining_team_default" );
				plr.stats.skywars.time_played_solo = json::get_int( "time_played_solo" );
				plr.stats.skywars.void_kills = json::get_int( "void_kills" );
				plr.stats.skywars.void_kills_kit_mining_team_default = json::get_int( "void_kills_kit_mining_team_default" );
				plr.stats.skywars.void_kills_solo = json::get_int( "void_kills_solo" );
				plr.stats.skywars.win_streak = json::get_int( "win_streak" );
				plr.stats.skywars.activeKit_SOLO = json::get_string( "activeKit_SOLO" );
				plr.stats.skywars.activeKit_SOLO_random = json::get_bool( "activeKit_SOLO_random" );
				plr.stats.skywars.quits = json::get_int( "quits" );
				plr.stats.skywars.chests_opened_team = json::get_int( "chests_opened_team" );
				plr.stats.skywars.deaths_team = json::get_int( "deaths_team" );
				plr.stats.skywars.deaths_team_insane = json::get_int( "deaths_team_insane" );
				plr.stats.skywars.egg_thrown = json::get_int( "egg_thrown" );
				plr.stats.skywars.kills_team = json::get_int( "kills_team" );
				plr.stats.skywars.kills_team_insane = json::get_int( "kills_team_insane" );
				plr.stats.skywars.longest_bow_kill_team = json::get_int( "longest_bow_kill_team" );
				plr.stats.skywars.losses_team = json::get_int( "losses_team" );
				plr.stats.skywars.losses_team_insane = json::get_int( "losses_team_insane" );
				plr.stats.skywars.melee_kills_team = json::get_int( "melee_kills_team" );
				plr.stats.skywars.survived_players_team = json::get_int( "survived_players_team" );
				plr.stats.skywars.time_played_team = json::get_int( "time_played_team" );
				plr.stats.skywars.chests_opened_kit_basic_solo_default = json::get_int( "chests_opened_kit_basic_solo_default" );
				plr.stats.skywars.deaths_kit_basic_solo_default = json::get_int( "deaths_kit_basic_solo_default" );
				plr.stats.skywars.deaths_team_normal = json::get_int( "deaths_team_normal" );
				plr.stats.skywars.losses_kit_basic_solo_default = json::get_int( "losses_kit_basic_solo_default" );
				plr.stats.skywars.losses_team_normal = json::get_int( "losses_team_normal" );
				plr.stats.skywars.survived_players_kit_basic_solo_default = json::get_int( "survived_players_kit_basic_solo_default" );
				plr.stats.skywars.time_played_kit_basic_solo_default = json::get_int( "time_played_kit_basic_solo_default" );
				plr.stats.skywars.kills_kit_basic_solo_default = json::get_int( "kills_kit_basic_solo_default" );
				plr.stats.skywars.kills_team_normal = json::get_int( "kills_team_normal" );
				plr.stats.skywars.most_kills_game_kit_basic_solo_default = json::get_int( "most_kills_game_kit_basic_solo_default" );
				plr.stats.skywars.most_kills_game_team = json::get_int( "most_kills_game_team" );
				plr.stats.skywars.skywars_chests = json::get_int( "skywars_chests" );
				plr.stats.skywars.team_bulldozer = json::get_int( "team_bulldozer" );
				plr.stats.skywars.toggle_team_bulldozer = json::get_bool( "toggle_team_bulldozer" );
				plr.stats.skywars.team_savior = json::get_int( "team_savior" );
				plr.stats.skywars.blocks_broken = json::get_int( "blocks_broken" );
				plr.stats.skywars.deaths_solo_normal = json::get_int( "deaths_solo_normal" );
				plr.stats.skywars.losses_solo_normal = json::get_int( "losses_solo_normal" );
				plr.stats.skywars.deaths_kit_supporting_team_rookie = json::get_int( "deaths_kit_supporting_team_rookie" );
				plr.stats.skywars.losses_kit_supporting_team_rookie = json::get_int( "losses_kit_supporting_team_rookie" );
				plr.stats.skywars.time_played_kit_supporting_team_rookie = json::get_int( "time_played_kit_supporting_team_rookie" );
				plr.stats.skywars.chests_opened_kit_supporting_team_rookie = json::get_int( "chests_opened_kit_supporting_team_rookie" );
				plr.stats.skywars.fastest_win = json::get_int( "fastest_win" );
				plr.stats.skywars.fastest_win_kit_supporting_team_rookie = json::get_int( "fastest_win_kit_supporting_team_rookie" );
				plr.stats.skywars.fastest_win_solo = json::get_int( "fastest_win_solo" );
				plr.stats.skywars.games_kit_supporting_team_rookie = json::get_int( "games_kit_supporting_team_rookie" );
				plr.stats.skywars.kills_kit_supporting_team_rookie = json::get_int( "kills_kit_supporting_team_rookie" );
				plr.stats.skywars.killstreak = json::get_int( "killstreak" );
				plr.stats.skywars.killstreak_kit_supporting_team_rookie = json::get_int( "killstreak_kit_supporting_team_rookie" );
				plr.stats.skywars.killstreak_solo = json::get_int( "killstreak_solo" );
				plr.stats.skywars.longest_bow_kill_kit_supporting_team_rookie = json::get_int( "longest_bow_kill_kit_supporting_team_rookie" );
				plr.stats.skywars.melee_kills_kit_supporting_team_rookie = json::get_int( "melee_kills_kit_supporting_team_rookie" );
				plr.stats.skywars.most_kills_game_kit_supporting_team_rookie = json::get_int( "most_kills_game_kit_supporting_team_rookie" );
				plr.stats.skywars.survived_players_kit_supporting_team_rookie = json::get_int( "survived_players_kit_supporting_team_rookie" );
				plr.stats.skywars.void_kills_kit_supporting_team_rookie = json::get_int( "void_kills_kit_supporting_team_rookie" );
				plr.stats.skywars.wins = json::get_int( "wins" );
				plr.stats.skywars.wins_kit_supporting_team_rookie = json::get_int( "wins_kit_supporting_team_rookie" );
				plr.stats.skywars.wins_solo = json::get_int( "wins_solo" );
				plr.stats.skywars.wins_solo_insane = json::get_int( "wins_solo_insane" );
				plr.stats.skywars.team_resistance_boost = json::get_int( "team_resistance_boost" );
				plr.stats.skywars.team_lucky_charm = json::get_int( "team_lucky_charm" );
				plr.stats.skywars.chests_opened_kit_attacking_team_knight = json::get_int( "chests_opened_kit_attacking_team_knight" );
				plr.stats.skywars.deaths_kit_attacking_team_knight = json::get_int( "deaths_kit_attacking_team_knight" );
				plr.stats.skywars.games_kit_attacking_team_knight = json::get_int( "games_kit_attacking_team_knight" );
				plr.stats.skywars.kills_kit_attacking_team_knight = json::get_int( "kills_kit_attacking_team_knight" );
				plr.stats.skywars.longest_bow_kill_kit_attacking_team_knight = json::get_int( "longest_bow_kill_kit_attacking_team_knight" );
				plr.stats.skywars.losses_kit_attacking_team_knight = json::get_int( "losses_kit_attacking_team_knight" );
				plr.stats.skywars.melee_kills_kit_attacking_team_knight = json::get_int( "melee_kills_kit_attacking_team_knight" );
				plr.stats.skywars.most_kills_game_kit_attacking_team_knight = json::get_int( "most_kills_game_kit_attacking_team_knight" );
				plr.stats.skywars.survived_players_kit_attacking_team_knight = json::get_int( "survived_players_kit_attacking_team_knight" );
				plr.stats.skywars.time_played_kit_attacking_team_knight = json::get_int( "time_played_kit_attacking_team_knight" );
				plr.stats.skywars.void_kills_kit_attacking_team_knight = json::get_int( "void_kills_kit_attacking_team_knight" );
				plr.stats.skywars.cosmetic_tokens = json::get_int( "cosmetic_tokens" );
				plr.stats.skywars.arrows_hit = json::get_int( "arrows_hit" );
				plr.stats.skywars.arrows_hit_kit_attacking_team_knight = json::get_int( "arrows_hit_kit_attacking_team_knight" );
				plr.stats.skywars.arrows_hit_solo = json::get_int( "arrows_hit_solo" );
				plr.stats.skywars.arrows_shot = json::get_int( "arrows_shot" );
				plr.stats.skywars.arrows_shot_kit_attacking_team_knight = json::get_int( "arrows_shot_kit_attacking_team_knight" );
				plr.stats.skywars.arrows_shot_solo = json::get_int( "arrows_shot_solo" );
				plr.stats.skywars.longest_bow_shot = json::get_int( "longest_bow_shot" );
				plr.stats.skywars.longest_bow_shot_kit_attacking_team_knight = json::get_int( "longest_bow_shot_kit_attacking_team_knight" );
				plr.stats.skywars.longest_bow_shot_solo = json::get_int( "longest_bow_shot_solo" );
				plr.stats.skywars.fastest_win_kit_attacking_team_knight = json::get_int( "fastest_win_kit_attacking_team_knight" );
				plr.stats.skywars.killstreak_kit_attacking_team_knight = json::get_int( "killstreak_kit_attacking_team_knight" );
				plr.stats.skywars.wins_kit_attacking_team_knight = json::get_int( "wins_kit_attacking_team_knight" );
				plr.stats.skywars.assists = json::get_int( "assists" );
				plr.stats.skywars.assists_kit_attacking_team_knight = json::get_int( "assists_kit_attacking_team_knight" );
				plr.stats.skywars.assists_solo = json::get_int( "assists_solo" );
				plr.stats.skywars.enderpearls_thrown = json::get_int( "enderpearls_thrown" );
				plr.stats.skywars.fall_kills = json::get_int( "fall_kills" );
				plr.stats.skywars.fall_kills_kit_attacking_team_knight = json::get_int( "fall_kills_kit_attacking_team_knight" );
				plr.stats.skywars.fall_kills_solo = json::get_int( "fall_kills_solo" );
				plr.stats.skywars.mob_kills = json::get_int( "mob_kills" );
				plr.stats.skywars.mob_kills_kit_attacking_team_knight = json::get_int( "mob_kills_kit_attacking_team_knight" );
				plr.stats.skywars.mob_kills_solo = json::get_int( "mob_kills_solo" );
				plr.stats.skywars.team_nourishment = json::get_int( "team_nourishment" );
				plr.stats.skywars.solo_bridger = json::get_int( "solo_bridger" );
				plr.stats.skywars.soul_well = json::get_int( "soul_well" );
				plr.stats.skywars.used_soul_well = json::get_bool( "usedSoulWell" );
				plr.stats.skywars.skywars_opened_chests = json::get_int( "SkyWars_openedChests" );
				plr.stats.skywars.skywars_opened_rares = json::get_int( "SkyWars_openedRares" );
				plr.stats.skywars.skywars_opened_commons = json::get_int( "SkyWars_openedCommons" );

				try {
					for ( auto& t : json::temp_obj[ "skywars_chest_history" ] )
						plr.stats.skywars.skywars_chest_history.push_back( t );
				}
				catch ( ... ) { }

				plr.stats.skywars.skywars_opened_epics = json::get_int( "SkyWars_openedEpics" );
				plr.stats.skywars.heads = json::get_int( "heads" );
				plr.stats.skywars.heads_divine = json::get_int( "heads_divine" );
				plr.stats.skywars.heads_divine_kit_attacking_team_knight = json::get_int( "heads_divine_kit_attacking_team_knight" );
				plr.stats.skywars.heads_divine_solo = json::get_int( "heads_divine_solo" );
				plr.stats.skywars.heads_kit_attacking_team_knight = json::get_int( "heads_kit_attacking_team_knight" );
				plr.stats.skywars.heads_solo = json::get_int( "heads_solo" );
				plr.stats.skywars.chests_opened_kit_ranked_ranked_default = json::get_int( "chests_opened_kit_ranked_ranked_default" );
				plr.stats.skywars.chests_opened_ranked = json::get_int( "chests_opened_ranked" );
				plr.stats.skywars.deaths_kit_ranked_ranked_default = json::get_int( "deaths_kit_ranked_ranked_default" );
				plr.stats.skywars.deaths_ranked = json::get_int( "deaths_ranked" );
				plr.stats.skywars.deaths_ranked_normal = json::get_int( "deaths_ranked_normal" );
				plr.stats.skywars.games_kit_ranked_ranked_default = json::get_int( "games_kit_ranked_ranked_default" );
				plr.stats.skywars.games_ranked = json::get_int( "games_ranked" );
				plr.stats.skywars.kills_kit_ranked_ranked_default = json::get_int( "kills_kit_ranked_ranked_default" );
				plr.stats.skywars.kills_ranked = json::get_int( "kills_ranked" );
				plr.stats.skywars.kills_ranked_normal = json::get_int( "kills_ranked_normal" );
				plr.stats.skywars.longest_bow_kill_kit_ranked_ranked_default = json::get_int( "longest_bow_kill_kit_ranked_ranked_default" );
				plr.stats.skywars.longest_bow_kill_ranked = json::get_int( "longest_bow_kill_ranked" );
				plr.stats.skywars.losses_kit_ranked_ranked_default = json::get_int( "losses_kit_ranked_ranked_default" );
				plr.stats.skywars.losses_ranked = json::get_int( "losses_ranked" );
				plr.stats.skywars.losses_ranked_normal = json::get_int( "losses_ranked_normal" );
				plr.stats.skywars.melee_kills_kit_ranked_ranked_default = json::get_int( "melee_kills_kit_ranked_ranked_default" );
				plr.stats.skywars.melee_kills_ranked = json::get_int( "melee_kills_ranked" );
				plr.stats.skywars.most_kills_game_kit_ranked_ranked_default = json::get_int( "most_kills_game_kit_ranked_ranked_default" );
				plr.stats.skywars.most_kills_game_ranked = json::get_int( "most_kills_game_ranked" );
				plr.stats.skywars.survived_players_kit_ranked_ranked_default = json::get_int( "survived_players_kit_ranked_ranked_default" );
				plr.stats.skywars.survived_players_ranked = json::get_int( "survived_players_ranked" );
				plr.stats.skywars.time_played_kit_ranked_ranked_default = json::get_int( "time_played_kit_ranked_ranked_default" );
				plr.stats.skywars.time_played_ranked = json::get_int( "time_played_ranked" );
				plr.stats.skywars.void_kills_kit_ranked_ranked_default = json::get_int( "void_kills_kit_ranked_ranked_default" );
				plr.stats.skywars.void_kills_ranked = json::get_int( "void_kills_ranked" );
				plr.stats.skywars.heads_kit_supporting_team_rookie = json::get_int( "heads_kit_supporting_team_rookie" );
				plr.stats.skywars.heads_tasty = json::get_int( "heads_tasty" );
				plr.stats.skywars.heads_tasty_kit_supporting_team_rookie = json::get_int( "heads_tasty_kit_supporting_team_rookie" );
				plr.stats.skywars.heads_tasty_solo = json::get_int( "heads_tasty_solo" );
				plr.stats.skywars.void_kills_team = json::get_int( "void_kills_team" );
				plr.stats.skywars.assists_kit_supporting_team_rookie = json::get_int( "assists_kit_supporting_team_rookie" );
				plr.stats.skywars.assists_team = json::get_int( "assists_team" );
				plr.stats.skywars.fastest_win_kit_ranked_ranked_default = json::get_int( "fastest_win_kit_ranked_ranked_default" );
				plr.stats.skywars.fastest_win_ranked = json::get_int( "fastest_win_ranked" );
				plr.stats.skywars.killstreak_kit_ranked_ranked_default = json::get_int( "killstreak_kit_ranked_ranked_default" );
				plr.stats.skywars.killstreak_ranked = json::get_int( "killstreak_ranked" );
				plr.stats.skywars.wins_kit_ranked_ranked_default = json::get_int( "wins_kit_ranked_ranked_default" );
				plr.stats.skywars.wins_ranked = json::get_int( "wins_ranked" );
				plr.stats.skywars.wins_ranked_normal = json::get_int( "wins_ranked_normal" );
				plr.stats.skywars.assists_kit_ranked_ranked_default = json::get_int( "assists_kit_ranked_ranked_default" );
				plr.stats.skywars.assists_ranked = json::get_int( "assists_ranked" );
				plr.stats.skywars.active_kit_RANKED = json::get_string( "activeKit_RANKED" );
				plr.stats.skywars.activeKit_SOLO_random = json::get_bool( "activeKit_RANKED_random" );
				plr.stats.skywars.fastest_win_kit_ranked_ranked_scout = json::get_int( "fastest_win_kit_ranked_ranked_scout" );
				plr.stats.skywars.games_kit_ranked_ranked_scout = json::get_int( "games_kit_ranked_ranked_scout" );
				plr.stats.skywars.kills_kit_ranked_ranked_scout = json::get_int( "kills_kit_ranked_ranked_scout" );
				plr.stats.skywars.killstreak_kit_ranked_ranked_scout = json::get_int( "killstreak_kit_ranked_ranked_scout" );
				plr.stats.skywars.longest_bow_kill_kit_ranked_ranked_scout = json::get_int( "longest_bow_kill_kit_ranked_ranked_scout" );
				plr.stats.skywars.melee_kills_kit_ranked_ranked_scout = json::get_int( "melee_kills_kit_ranked_ranked_scout" );
				plr.stats.skywars.most_kills_game_kit_ranked_ranked_scout = json::get_int( "most_kills_game_kit_ranked_ranked_scout" );
				plr.stats.skywars.refill_chest_destroy = json::get_int( "refill_chest_destroy" );
				plr.stats.skywars.survived_players_kit_ranked_ranked_scout = json::get_int( "survived_players_kit_ranked_ranked_scout" );
				plr.stats.skywars.time_played_kit_ranked_ranked_scout = json::get_int( "time_played_kit_ranked_ranked_scout" );
				plr.stats.skywars.void_kills_kit_ranked_ranked_scout = json::get_int( "void_kills_kit_ranked_ranked_scout" );
				plr.stats.skywars.wins_kit_ranked_ranked_scout = json::get_int( "wins_kit_ranked_ranked_scout" );
				plr.stats.skywars.chests_opened_kit_ranked_ranked_scout = json::get_int( "chests_opened_kit_ranked_ranked_scout" );
				plr.stats.skywars.opals = json::get_int( "opals" );
				plr.stats.skywars.deaths_kit_ranked_ranked_scout = json::get_int( "deaths_kit_ranked_ranked_scout" );
				plr.stats.skywars.losses_kit_ranked_ranked_scout = json::get_int( "losses_kit_ranked_ranked_scout" );
				plr.stats.skywars.xezbeth_luck = json::get_int( "xezbeth_luck" );
				plr.stats.skywars.extra_wheels = json::get_int( "extra_wheels" );
				plr.stats.skywars.mega_bridger = json::get_int( "mega_bridger" );
				plr.stats.skywars.solo_mining_expertise = json::get_int( "solo_mining_expertise" );
				plr.stats.skywars.paid_souls = json::get_int( "paid_souls" );
				plr.stats.skywars.mega_rusher = json::get_int( "mega_rusher" );
				plr.stats.skywars.soul_well_rares = json::get_int( "soul_well_rares" );
				plr.stats.skywars.soul_well_legendaries = json::get_int( "soul_well_legendaries" );
				plr.stats.skywars.SkyWars_openedLegendaries = json::get_int( "SkyWars_openedLegendaries" );
				plr.stats.skywars.kills_weekly_a = json::get_int( "kills_weekly_a" );
				plr.stats.skywars.heads_heavenly = json::get_int( "heads_heavenly" );
				plr.stats.skywars.heads_heavenly_kit_attacking_team_knight = json::get_int( "heads_heavenly_kit_attacking_team_knight" );
				plr.stats.skywars.heads_heavenly_solo = json::get_int( "heads_heavenly_solo" );
				plr.stats.skywars.heads_meh = json::get_int( "heads_meh" );
				plr.stats.skywars.heads_meh_kit_attacking_team_knight = json::get_int( "heads_meh_kit_attacking_team_knight" );
				plr.stats.skywars.heads_meh_solo = json::get_int( "heads_meh_solo" );
				plr.stats.skywars.heads_salty = json::get_int( "heads_salty" );
				plr.stats.skywars.heads_salty_kit_attacking_team_knight = json::get_int( "heads_salty_kit_attacking_team_knight" );
				plr.stats.skywars.heads_salty_solo = json::get_int( "heads_salty_solo" );
				plr.stats.skywars.heads_tasty_kit_attacking_team_knight = json::get_int( "heads_tasty_kit_attacking_team_knight" );
				plr.stats.skywars.heads_yucky = json::get_int( "heads_yucky" );
				plr.stats.skywars.heads_yucky_kit_attacking_team_knight = json::get_int( "heads_yucky_kit_attacking_team_knight" );
				plr.stats.skywars.heads_yucky_solo = json::get_int( "heads_yucky_solo" );
				plr.stats.skywars.fall_kills_team = json::get_int( "fall_kills_team" );
				plr.stats.skywars.games_team = json::get_int( "games_team" );
				plr.stats.skywars.heads_decent = json::get_int( "heads_decent" );
				plr.stats.skywars.heads_decent_kit_attacking_team_knight = json::get_int( "heads_decent_kit_attacking_team_knight" );
				plr.stats.skywars.heads_decent_team = json::get_int( "heads_decent_team" );
				plr.stats.skywars.heads_divine_team = json::get_int( "heads_divine_team" );
				plr.stats.skywars.heads_meh_team = json::get_int( "heads_meh_team" );
				plr.stats.skywars.heads_salty_team = json::get_int( "heads_salty_team" );
				plr.stats.skywars.heads_tasty_team = json::get_int( "heads_tasty_team" );
				plr.stats.skywars.heads_team = json::get_int( "heads_team" );
				plr.stats.skywars.heads_yucky_team = json::get_int( "heads_yucky_team" );
				plr.stats.skywars.killstreak_team = json::get_int( "killstreak_team" );
				plr.stats.skywars.wins_team = json::get_int( "wins_team" );
				plr.stats.skywars.wins_team_insane = json::get_int( "wins_team_insane" );
				plr.stats.skywars.arrows_hit_team = json::get_int( "arrows_hit_team" );
				plr.stats.skywars.arrows_shot_team = json::get_int( "arrows_shot_team" );
				plr.stats.skywars.bow_kills = json::get_int( "bow_kills" );
				plr.stats.skywars.bow_kills_kit_attacking_team_knight = json::get_int( "bow_kills_kit_attacking_team_knight" );
				plr.stats.skywars.bow_kills_team = json::get_int( "bow_kills_team" );
				plr.stats.skywars.team_juggernaut = json::get_int( "team_juggernaut" );
				plr.stats.skywars.rush_explained_last = json::get_long_long( "rush_explained_last" );
				plr.stats.skywars.rush_explained = json::get_int( "rush_explained" );
				plr.stats.skywars.chests_opened_lab = json::get_int( "chests_opened_lab" );
				plr.stats.skywars.chests_opened_lab_kit_attacking_team_knight = json::get_int( "chests_opened_lab_kit_attacking_team_knight" );
				plr.stats.skywars.chests_opened_lab_solo = json::get_int( "chests_opened_lab_solo" );
				plr.stats.skywars.coins_gained_lab = json::get_int( "coins_gained_lab" );
				plr.stats.skywars.deaths_lab = json::get_int( "deaths_lab" );
				plr.stats.skywars.deaths_lab_kit_attacking_team_knight = json::get_int( "deaths_lab_kit_attacking_team_knight" );
				plr.stats.skywars.deaths_lab_solo = json::get_int( "deaths_lab_solo" );
				plr.stats.skywars.enderpearls_thrown_lab = json::get_int( "enderpearls_thrown_lab" );
				plr.stats.skywars.losses_lab = json::get_int( "losses_lab" );
				plr.stats.skywars.losses_lab_kit_attacking_team_knight = json::get_int( "losses_lab_kit_attacking_team_knight" );
				plr.stats.skywars.losses_lab_solo = json::get_int( "losses_lab_solo" );
				plr.stats.skywars.quits_lab = json::get_int( "quits_lab" );
				plr.stats.skywars.time_played_lab = json::get_int( "time_played_lab" );
				plr.stats.skywars.time_played_lab_kit_attacking_team_knight = json::get_int( "time_played_lab_kit_attacking_team_knight" );
				plr.stats.skywars.time_played_lab_solo = json::get_int( "time_played_lab_solo" );
				plr.stats.skywars.win_streak_lab = json::get_int( "win_streak_lab" );
				plr.stats.skywars.arrows_hit_kit_defending_team_armorer = json::get_int( "arrows_hit_kit_defending_team_armorer" );
				plr.stats.skywars.arrows_shot_kit_defending_team_armorer = json::get_int( "arrows_shot_kit_defending_team_armorer" );
				plr.stats.skywars.assists_kit_defending_team_armorer = json::get_int( "assists_kit_defending_team_armorer" );
				plr.stats.skywars.chests_opened_kit_defending_team_armorer = json::get_int( "chests_opened_kit_defending_team_armorer" );
				plr.stats.skywars.fastest_win_kit_defending_team_armorer = json::get_int( "fastest_win_kit_defending_team_armorer" );
				plr.stats.skywars.fastest_win_team = json::get_int( "fastest_win_team" );
				plr.stats.skywars.games_kit_defending_team_armorer = json::get_int( "games_kit_defending_team_armorer" );
				plr.stats.skywars.heads_eww = json::get_int( "heads_eww" );
				plr.stats.skywars.heads_eww_kit_defending_team_armorer = json::get_int( "heads_eww_kit_defending_team_armorer" );
				plr.stats.skywars.heads_eww_team = json::get_int( "heads_eww_team" );
				plr.stats.skywars.heads_kit_defending_team_armorer = json::get_int( "heads_kit_defending_team_armorer" );
				plr.stats.skywars.heads_meh_kit_defending_team_armorer = json::get_int( "heads_meh_kit_defending_team_armorer" );
				plr.stats.skywars.heads_salty_kit_defending_team_armorer = json::get_int( "heads_salty_kit_defending_team_armorer" );
				plr.stats.skywars.kills_kit_defending_team_armorer = json::get_int( "kills_kit_defending_team_armorer" );
				plr.stats.skywars.killstreak_kit_defending_team_armorer = json::get_int( "killstreak_kit_defending_team_armorer" );
				plr.stats.skywars.longest_bow_kill_kit_defending_team_armorer = json::get_int( "longest_bow_kill_kit_defending_team_armorer" );
				plr.stats.skywars.longest_bow_shot_kit_defending_team_armorer = json::get_int( "longest_bow_shot_kit_defending_team_armorer" );
				plr.stats.skywars.longest_bow_shot_team = json::get_int( "longest_bow_shot_team" );
				plr.stats.skywars.melee_kills_kit_defending_team_armorer = json::get_int( "melee_kills_kit_defending_team_armorer" );
				plr.stats.skywars.most_kills_game_kit_defending_team_armorer = json::get_int( "most_kills_game_kit_defending_team_armorer" );
				plr.stats.skywars.survived_players_kit_defending_team_armorer = json::get_int( "survived_players_kit_defending_team_armorer" );
				plr.stats.skywars.time_played_kit_defending_team_armorer = json::get_int( "time_played_kit_defending_team_armorer" );
				plr.stats.skywars.wins_kit_defending_team_armorer = json::get_int( "wins_kit_defending_team_armorer" );
				plr.stats.skywars.deaths_kit_defending_team_armorer = json::get_int( "deaths_kit_defending_team_armorer" );
				plr.stats.skywars.losses_kit_defending_team_armorer = json::get_int( "losses_kit_defending_team_armorer" );
				plr.stats.skywars.heads_decent_kit_defending_team_armorer = json::get_int( "heads_decent_kit_defending_team_armorer" );
				plr.stats.skywars.kills_monthly_b = json::get_int( "kills_monthly_b" );
				plr.stats.skywars.skywars_easter_boxes = json::get_int( "skywars_easter_boxes" );
			}
			auto tntgames( hypixel_player& plr ) -> void {
				json::temp_obj = json::set_obj[ "player" ][ "stats" ][ "TNTGames" ];

				try {
					for ( auto& t : json::temp_obj[ "packages" ] )
						plr.stats.tntgames.packages.push_back( t );
				}
				catch ( ... ) { }

				plr.stats.tntgames.wins = json::get_int( "wins" );
				plr.stats.tntgames.new_spleef_double_jumps = json::get_int( "new_spleef_double_jumps" );
				plr.stats.tntgames.new_pvprun_double_jumps = json::get_int( "new_pvprun_double_jumps" );
				plr.stats.tntgames.new_spleef_repulsor = json::get_int( "new_spleef_repulsor" );
				plr.stats.tntgames.new_spleef_tripleshot = json::get_int( "new_spleef_tripleshot" );
				plr.stats.tntgames.new_tntag_speedy = json::get_int( "new_tntag_speedy" );
				plr.stats.tntgames.new_tntrun_double_jumps = json::get_int( "new_tntrun_double_jumps" );
				plr.stats.tntgames.new_firewizard_regen = json::get_int( "new_firewizard_regen" );
				plr.stats.tntgames.new_icewizard_explode = json::get_int( "new_icewizard_explode" );
				plr.stats.tntgames.new_bloodwizard_regen = json::get_int( "new_bloodwizard_regen" );
				plr.stats.tntgames.new_firewizard_explode = json::get_int( "new_firewizard_explode" );
				plr.stats.tntgames.new_bloodwizard_explode = json::get_int( "new_bloodwizard_explode" );
				plr.stats.tntgames.new_icewizard_regen = json::get_int( "new_icewizard_regen" );
				plr.stats.tntgames.new_kineticwizard_regen = json::get_int( "new_kineticwizard_regen" );
				plr.stats.tntgames.new_kineticwizard_explode = json::get_int( "new_kineticwizard_explode" );
				plr.stats.tntgames.new_witherwizard_regen = json::get_int( "new_witherwizard_regen" );
				plr.stats.tntgames.new_witherwizard_explode = json::get_int( "new_witherwizard_explode" );
				plr.stats.tntgames.kills_tntag = json::get_int( "kills_tntag" );
				plr.stats.tntgames.coins = json::get_int( "coins" );
				plr.stats.tntgames.winstreak = json::get_int( "winstreak" );
				plr.stats.tntgames.wins_tntag = json::get_int( "wins_tntag" );
				plr.stats.tntgames.points_capture = json::get_int( "points_capture" );
				plr.stats.tntgames.kinetic_healing_capture = json::get_int( "kinetic_healing_capture" );
				plr.stats.tntgames.air_time_capture = json::get_int( "air_time_capture" );
				plr.stats.tntgames.tag_blastprotection = json::get_int( "tag_blastprotection" );
				plr.stats.tntgames.tag_slowitdown = json::get_int( "tag_slowitdown" );
				plr.stats.tntgames.tag_speeditup = json::get_int( "tag_speeditup" );
				plr.stats.tntgames.deaths_tntag = json::get_int( "deaths_tntag" );
				plr.stats.tntgames.run_potions_splashed_on_players = json::get_int( "run_potions_splashed_on_players" );
				plr.stats.tntgames.record_tntrun = json::get_int( "record_tntrun" );
				plr.stats.tntgames.deaths_tntrun = json::get_int( "deaths_tntrun" );
				plr.stats.tntgames.deaths_bowspleef = json::get_int( "deaths_bowspleef" );
				plr.stats.tntgames.tags_bowspleef = json::get_int( "tags_bowspleef" );

			}
			auto battleground( hypixel_player& plr ) -> void {
				json::temp_obj = json::set_obj[ "player" ][ "stats" ][ "Battleground" ];
				plr.stats.battleground.mage_spec = json::get_string( "mage_spec" );
				plr.stats.battleground.warrior_spec = json::get_string( "warrior_spec" );
				plr.stats.battleground.paladin_spec = json::get_string( "paladin_spec" );
				plr.stats.battleground.selected_mount = json::get_string( "selected_mount" );
				plr.stats.battleground.chosen_class = json::get_string( "chosen_class" );
				plr.stats.battleground.shaman_spec = json::get_string( "shaman_spec" );


				try {
					for ( auto& t : json::temp_obj[ "packages" ] )
						plr.stats.battleground.packages.push_back( t );
				}
				catch ( ... ) { }

				plr.stats.battleground.coins = json::get_int( "coins" );
			}
			auto walls3( hypixel_player& plr )  -> void {
				json::temp_obj = json::set_obj[ "player" ][ "stats" ][ "Walls3" ];

				try {
					for ( auto& t : json::temp_obj[ "packages" ] )
						plr.stats.walls3.packages.push_back( t );
				}
				catch ( ... ) { }

				plr.stats.walls3.coins = json::get_int( "coins" );
			}
			auto murdermystery( hypixel_player& plr )  -> void {
				json::temp_obj = json::set_obj[ "player" ][ "stats" ][ "MurderMystery" ];

				try {
					for ( auto& t : json::temp_obj[ "murdermystery_books" ] )
						plr.stats.murder_mystery.murdermystery_books.push_back( t );
				}
				catch ( ... ) { }

				try {
					for ( auto& t : json::temp_obj[ "packages" ] )
						plr.stats.murder_mystery.packages.push_back( t );
				}
				catch ( ... ) { }

				plr.stats.murder_mystery.mm_chests = json::get_int( "mm_chests" );
				plr.stats.murder_mystery.detective_chance = json::get_int( "detective_chance" );
				plr.stats.murder_mystery.murderer_chance = json::get_int( "murderer_chance" );
				plr.stats.murder_mystery.coins = json::get_int( "coins" );
				plr.stats.murder_mystery.games = json::get_int( "games" );
				plr.stats.murder_mystery.games_MURDER_CLASSIC = json::get_int( "games_MURDER_CLASSIC" );
				plr.stats.murder_mystery.games_gold_rush = json::get_int( "games_gold_rush" );
				plr.stats.murder_mystery.games_gold_rush_MURDER_CLASSIC = json::get_int( "games_gold_rush_MURDER_CLASSIC" );
				plr.stats.murder_mystery.wins = json::get_int( "wins" );
				plr.stats.murder_mystery.wins_MURDER_CLASSIC = json::get_int( "wins_MURDER_CLASSIC" );
				plr.stats.murder_mystery.wins_gold_rush = json::get_int( "wins_gold_rush" );
				plr.stats.murder_mystery.wins_gold_rush_MURDER_CLASSIC = json::get_int( "wins_gold_rush_MURDER_CLASSIC" );
				plr.stats.murder_mystery.coins_pickedup = json::get_int( "coins_pickedup" );
				plr.stats.murder_mystery.coins_pickedup_MURDER_CLASSIC = json::get_int( "coins_pickedup_MURDER_CLASSIC" );
				plr.stats.murder_mystery.coins_pickedup_library = json::get_int( "coins_pickedup_library" );
				plr.stats.murder_mystery.coins_pickedup_library_MURDER_CLASSIC = json::get_int( "coins_pickedup_library_MURDER_CLASSIC" );
				plr.stats.murder_mystery.games_library = json::get_int( "games_library" );
				plr.stats.murder_mystery.games_library_MURDER_CLASSIC = json::get_int( "games_library_MURDER_CLASSIC" );
				plr.stats.murder_mystery.wins_library = json::get_int( "wins_library" );
				plr.stats.murder_mystery.wins_library_MURDER_CLASSIC = json::get_int( "wins_library_MURDER_CLASSIC" );
				plr.stats.murder_mystery.coins_pickedup_transport = json::get_int( "coins_pickedup_transport" );
				plr.stats.murder_mystery.coins_pickedup_transport_MURDER_CLASSIC = json::get_int( "coins_pickedup_transport_MURDER_CLASSIC" );
				plr.stats.murder_mystery.games_transport = json::get_int( "games_transport" );
				plr.stats.murder_mystery.games_transport_MURDER_CLASSIC = json::get_int( "games_transport_MURDER_CLASSIC" );
				plr.stats.murder_mystery.wins_transport = json::get_int( "wins_transport" );
				plr.stats.murder_mystery.wins_transport_MURDER_CLASSIC = json::get_int( "wins_transport_MURDER_CLASSIC" );
				plr.stats.murder_mystery.coins_pickedup_mountain = json::get_int( "coins_pickedup_mountain" );
				plr.stats.murder_mystery.coins_pickedup_mountain_MURDER_CLASSIC = json::get_int( "coins_pickedup_mountain_MURDER_CLASSIC" );
				plr.stats.murder_mystery.deaths = json::get_int( "deaths" );
				plr.stats.murder_mystery.deaths_MURDER_CLASSIC = json::get_int( "deaths_MURDER_CLASSIC" );
				plr.stats.murder_mystery.deaths_mountain = json::get_int( "deaths_mountain" );
				plr.stats.murder_mystery.deaths_mountain_MURDER_CLASSIC = json::get_int( "deaths_mountain_MURDER_CLASSIC" );
				plr.stats.murder_mystery.games_mountain = json::get_int( "games_mountain" );
				plr.stats.murder_mystery.games_mountain_MURDER_CLASSIC = json::get_int( "games_mountain_MURDER_CLASSIC" );
				plr.stats.murder_mystery.wins_mountain = json::get_int( "wins_mountain" );
				plr.stats.murder_mystery.wins_mountain_MURDER_CLASSIC = json::get_int( "wins_mountain_MURDER_CLASSIC" );
				plr.stats.murder_mystery.games_spooky_mansion = json::get_int( "games_spooky_mansion" );
				plr.stats.murder_mystery.games_spooky_mansion_MURDER_CLASSIC = json::get_int( "games_spooky_mansion_MURDER_CLASSIC" );
				plr.stats.murder_mystery.wins_spooky_mansion = json::get_int( "wins_spooky_mansion" );
				plr.stats.murder_mystery.wins_spooky_mansion_MURDER_CLASSIC = json::get_int( "wins_spooky_mansion_MURDER_CLASSIC" );
				plr.stats.murder_mystery.coins_pickedup_snowglobe = json::get_int( "coins_pickedup_snowglobe" );
				plr.stats.murder_mystery.coins_pickedup_snowglobe_MURDER_CLASSIC = json::get_int( "coins_pickedup_snowglobe_MURDER_CLASSIC" );
				plr.stats.murder_mystery.deaths_snowglobe = json::get_int( "deaths_snowglobe" );
				plr.stats.murder_mystery.deaths_snowglobe_MURDER_CLASSIC = json::get_int( "deaths_snowglobe_MURDER_CLASSIC" );
				plr.stats.murder_mystery.games_snowglobe = json::get_int( "games_snowglobe" );
				plr.stats.murder_mystery.games_snowglobe_MURDER_CLASSIC = json::get_int( "games_snowglobe_MURDER_CLASSIC" );
				plr.stats.murder_mystery.bow_kills = json::get_int( "bow_kills" );
				plr.stats.murder_mystery.bow_kills_MURDER_CLASSIC = json::get_int( "bow_kills_MURDER_CLASSIC" );
				plr.stats.murder_mystery.bow_kills_transport = json::get_int( "bow_kills_transport" );
				plr.stats.murder_mystery.bow_kills_transport_MURDER_CLASSIC = json::get_int( "bow_kills_transport_MURDER_CLASSIC" );
				plr.stats.murder_mystery.detective_wins = json::get_int( "detective_wins" );
				plr.stats.murder_mystery.detective_wins_MURDER_CLASSIC = json::get_int( "detective_wins_MURDER_CLASSIC" );
				plr.stats.murder_mystery.detective_wins_transport = json::get_int( "detective_wins_transport" );
				plr.stats.murder_mystery.detective_wins_transport_MURDER_CLASSIC = json::get_int( "detective_wins_transport_MURDER_CLASSIC" );
				plr.stats.murder_mystery.kills = json::get_int( "kills" );
				plr.stats.murder_mystery.kills_MURDER_CLASSIC = json::get_int( "kills_MURDER_CLASSIC" );
				plr.stats.murder_mystery.kills_transport = json::get_int( "kills_transport" );
				plr.stats.murder_mystery.kills_transport_MURDER_CLASSIC = json::get_int( "kills_transport_MURDER_CLASSIC" );
				plr.stats.murder_mystery.quickest_detective_win_time_seconds = json::get_int( "quickest_detective_win_time_seconds" );
				plr.stats.murder_mystery.quickest_detective_win_time_seconds_MURDER_CLASSIC = json::get_int( "quickest_detective_win_time_seconds_MURDER_CLASSIC" );
				plr.stats.murder_mystery.quickest_detective_win_time_seconds_transport = json::get_int( "quickest_detective_win_time_seconds_transport" );
				plr.stats.murder_mystery.quickest_detective_win_time_seconds_transport_MURDER_CLASSIC = json::get_int( "quickest_detective_win_time_seconds_transport_MURDER_CLASSIC" );
				plr.stats.murder_mystery.was_hero = json::get_int( "was_hero" );
				plr.stats.murder_mystery.was_hero_MURDER_CLASSIC = json::get_int( "was_hero_MURDER_CLASSIC" );
				plr.stats.murder_mystery.was_hero_transport = json::get_int( "was_hero_transport" );
				plr.stats.murder_mystery.was_hero_transport_MURDER_CLASSIC = json::get_int( "was_hero_transport_MURDER_CLASSIC" );
				plr.stats.murder_mystery.mm_christmas_chests = json::get_int( "mm_christmas_chests" );
				plr.stats.murder_mystery.deaths_subway = json::get_int( "deaths_subway" );
				plr.stats.murder_mystery.deaths_subway_MURDER_CLASSIC = json::get_int( "deaths_subway_MURDER_CLASSIC" );
				plr.stats.murder_mystery.games_subway = json::get_int( "games_subway" );
				plr.stats.murder_mystery.games_subway_MURDER_CLASSIC = json::get_int( "games_subway_MURDER_CLASSIC" );
				plr.stats.murder_mystery.kills_as_murderer = json::get_int( "kills_as_murderer" );
				plr.stats.murder_mystery.kills_as_murderer_MURDER_CLASSIC = json::get_int( "kills_as_murderer_MURDER_CLASSIC" );
				plr.stats.murder_mystery.kills_as_murderer_subway = json::get_int( "kills_as_murderer_subway" );
				plr.stats.murder_mystery.kills_as_murderer_subway_MURDER_CLASSIC = json::get_int( "kills_as_murderer_subway_MURDER_CLASSIC" );
				plr.stats.murder_mystery.kills_subway = json::get_int( "kills_subway" );
				plr.stats.murder_mystery.kills_subway_MURDER_CLASSIC = json::get_int( "kills_subway_MURDER_CLASSIC" );
				plr.stats.murder_mystery.knife_kills = json::get_int( "knife_kills" );
				plr.stats.murder_mystery.knife_kills_MURDER_CLASSIC = json::get_int( "knife_kills_MURDER_CLASSIC" );
				plr.stats.murder_mystery.knife_kills_subway = json::get_int( "knife_kills_subway" );
				plr.stats.murder_mystery.knife_kills_subway_MURDER_CLASSIC = json::get_int( "knife_kills_subway_MURDER_CLASSIC" );
				plr.stats.murder_mystery.coins_pickedup_MURDER_DOUBLE_UP = json::get_int( "coins_pickedup_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.coins_pickedup_mountain_MURDER_DOUBLE_UP = json::get_int( "coins_pickedup_mountain_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.deaths_MURDER_DOUBLE_UP = json::get_int( "deaths_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.deaths_mountain_MURDER_DOUBLE_UP = json::get_int( "deaths_mountain_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.detective_wins_MURDER_DOUBLE_UP = json::get_int( "detective_wins_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.detective_wins_mountain = json::get_int( "detective_wins_mountain" );
				plr.stats.murder_mystery.detective_wins_mountain_MURDER_DOUBLE_UP = json::get_int( "detective_wins_mountain_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.games_MURDER_DOUBLE_UP = json::get_int( "games_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.games_mountain_MURDER_DOUBLE_UP = json::get_int( "games_mountain_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.quickest_detective_win_time_seconds_MURDER_DOUBLE_UP = json::get_int( "quickest_detective_win_time_seconds_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.quickest_detective_win_time_seconds_mountain = json::get_int( "quickest_detective_win_time_seconds_mountain" );
				plr.stats.murder_mystery.quickest_detective_win_time_seconds_mountain_MURDER_DOUBLE_UP = json::get_int( "quickest_detective_win_time_seconds_mountain_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.was_hero_MURDER_DOUBLE_UP = json::get_int( "was_hero_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.was_hero_mountain = json::get_int( "was_hero_mountain" );
				plr.stats.murder_mystery.was_hero_mountain_MURDER_DOUBLE_UP = json::get_int( "was_hero_mountain_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.wins_MURDER_DOUBLE_UP = json::get_int( "wins_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.wins_mountain_MURDER_DOUBLE_UP = json::get_int( "wins_mountain_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.deaths_subway_MURDER_DOUBLE_UP = json::get_int( "deaths_subway_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.games_subway_MURDER_DOUBLE_UP = json::get_int( "games_subway_MURDER_DOUBLE_UP" );
				plr.stats.murder_mystery.coins_pickedup_gold_rush = json::get_int( "coins_pickedup_gold_rush" );
				plr.stats.murder_mystery.coins_pickedup_gold_rush_MURDER_CLASSIC = json::get_int( "coins_pickedup_gold_rush_MURDER_CLASSIC" );
				plr.stats.murder_mystery.kills_as_murderer_gold_rush = json::get_int( "kills_as_murderer_gold_rush" );
				plr.stats.murder_mystery.kills_as_murderer_gold_rush_MURDER_CLASSIC = json::get_int( "kills_as_murderer_gold_rush_MURDER_CLASSIC" );
				plr.stats.murder_mystery.kills_gold_rush = json::get_int( "kills_gold_rush" );
				plr.stats.murder_mystery.kills_gold_rush_MURDER_CLASSIC = json::get_int( "kills_gold_rush_MURDER_CLASSIC" );
				plr.stats.murder_mystery.knife_kills_gold_rush = json::get_int( "knife_kills_gold_rush" );
				plr.stats.murder_mystery.knife_kills_gold_rush_MURDER_CLASSIC = json::get_int( "knife_kills_gold_rush_MURDER_CLASSIC" );
				plr.stats.murder_mystery.murderer_wins = json::get_int( "murderer_wins" );
				plr.stats.murder_mystery.murderer_wins_MURDER_CLASSIC = json::get_int( "murderer_wins_MURDER_CLASSIC" );
				plr.stats.murder_mystery.murderer_wins_gold_rush = json::get_int( "murderer_wins_gold_rush" );
				plr.stats.murder_mystery.murderer_wins_gold_rush_MURDER_CLASSIC = json::get_int( "murderer_wins_gold_rush_MURDER_CLASSIC" );
				plr.stats.murder_mystery.quickest_murderer_win_time_seconds = json::get_int( "quickest_murderer_win_time_seconds" );
				plr.stats.murder_mystery.quickest_murderer_win_time_seconds_MURDER_CLASSIC = json::get_int( "quickest_murderer_win_time_seconds_MURDER_CLASSIC" );
				plr.stats.murder_mystery.quickest_murderer_win_time_seconds_gold_rush = json::get_int( "quickest_murderer_win_time_seconds_gold_rush" );
				plr.stats.murder_mystery.quickest_murderer_win_time_seconds_gold_rush_MURDER_CLASSIC = json::get_int( "quickest_murderer_win_time_seconds_gold_rush_MURDER_CLASSIC" );
				plr.stats.murder_mystery.thrown_knife_kills = json::get_int( "thrown_knife_kills" );
				plr.stats.murder_mystery.thrown_knife_kills_MURDER_CLASSIC = json::get_int( "thrown_knife_kills_MURDER_CLASSIC" );
				plr.stats.murder_mystery.thrown_knife_kills_gold_rush = json::get_int( "thrown_knife_kills_gold_rush" );
				plr.stats.murder_mystery.thrown_knife_kills_gold_rush_MURDER_CLASSIC = json::get_int( "thrown_knife_kills_gold_rush_MURDER_CLASSIC" );


			}
			auto gingerbread( hypixel_player& plr )  -> void {
				json::temp_obj = json::set_obj[ "player" ][ "stats" ][ "GingerBread" ];
				plr.stats.gingerbread.coins = json::get_int( "coins" );

				try {
					for ( auto& t : json::temp_obj[ "packages" ] )
						plr.stats.gingerbread.packages.push_back( t );
				}
				catch ( ... ) { }
			}
			auto paintball( hypixel_player& plr )  -> void {
				json::temp_obj = json::set_obj[ "player" ][ "stats" ][ "Paintball" ];

				try {
					for ( auto& t : json::temp_obj[ "packages" ] )
						plr.stats.paintball.packages.push_back( t );
				}
				catch ( ... ) { }

				plr.stats.paintball.coins = json::get_int( "coins" );
				plr.stats.paintball.kills = json::get_int( "kills" );
				plr.stats.paintball.showKillPrefix = json::get_bool( "showKillPrefix" );
				plr.stats.paintball.favorite_slots = json::get_string( "favorite_slots" );
			}
			auto arena( hypixel_player& plr )   -> void {
				json::set_obj = json::set_obj[ "player" ][ "stats" ][ "Arena" ];
				plr.stats.arcade.coins = json::get_int( "coins" );
			}
			auto quake( hypixel_player& plr )  -> void {
				json::set_obj = json::set_obj[ "player" ][ "stats" ][ "Quake" ];
				plr.stats.quake.coins = json::get_int( "coins" );

				try {
					for ( auto& t : json::temp_obj[ "packages" ] )
						plr.stats.quake.packages.push_back( t );
				}
				catch ( ... ) { }

				plr.stats.quake.kills = json::get_int( "kills" );
				plr.stats.quake.headshots = json::get_int( "headshots" );
				plr.stats.quake.distance_travelled = json::get_int( "distance_travelled" );
				plr.stats.quake.shots_fired = json::get_int( "shots_fired" );
				plr.stats.quake.deaths = json::get_int( "deaths" );
				plr.stats.quake.kills_teams = json::get_int( "kills_teams" );
				plr.stats.quake.kills_timeattack = json::get_int( "kills_timeattack" );
				plr.stats.quake.kills_dm = json::get_int( "kills_dm" );
				plr.stats.quake.kills_dm_teams = json::get_int( "kills_dm_teams" );
				plr.stats.quake.kills_tourney_unknown = json::get_int( "kills_tourney_unknown" );

			}
			auto vampire( hypixel_player& plr )  -> void {
				json::set_obj = json::set_obj[ "player" ][ "stats" ][ "VampireZ" ];
				plr.stats.vampire_z.coins = json::get_int( "coins" );
				plr.stats.vampire_z.updated_status = json::get_bool( "updated_stats" );
			}
			auto walls( hypixel_player& plr )  -> void {
				json::set_obj = json::set_obj[ "player" ][ "stats" ][ "Walls" ];
				plr.stats.walls.coins = json::get_int( "coins" );
			}
			auto MCGO( hypixel_player& plr )  -> void {
				json::set_obj = json::set_obj[ "player" ][ "stats" ][ "MCGO" ];
				plr.stats.mcgo.coins = json::get_int( "coins" );
				plr.stats.mcgo.kills = json::get_int( "kills" );
				plr.stats.mcgo.game_wins_deathmatch = json::get_int( "game_wins_deathmatch" );
				plr.stats.mcgo.game_wins = json::get_int( "game_wins" );
				plr.stats.mcgo.kills_deathmatch = json::get_int( "kills_deathmatch" );
				plr.stats.mcgo.headshot_kills = json::get_int( "headshot_kills" );
				plr.stats.mcgo.grenade_kills = json::get_int( "grenade_kills" );
				plr.stats.mcgo.grenadeKills = json::get_int( "grenadeKills" );
				plr.stats.mcgo.pocket_change = json::get_int( "pocket_change" );
				plr.stats.mcgo.bombs_planted = json::get_int( "bombs_planted" );
				plr.stats.mcgo.bombs_defused = json::get_int( "bombs_defused" );

				try {
					for ( auto& t : json::temp_obj[ "packages" ] )
						plr.stats.mcgo.packages.push_back( t );
				}
				catch ( ... ) { }
			}
			auto supersmash( hypixel_player& plr )  -> void {
				json::set_obj = json::set_obj[ "player" ][ "stats" ][ "SuperSmash" ];
				plr.stats.supersmash.coins = json::get_int( "coins" );
			}
			auto uhc( hypixel_player& plr ) -> void {
				json::set_obj = json::set_obj[ "player" ][ "stats" ][ "UHC" ];
				plr.stats.uhc.coins = json::get_int( "coins" );
				plr.stats.uhc.clearup_achievement = json::get_bool( "clearup_achievement" );
				plr.stats.uhc.saved_stats = json::get_bool( "saved_stats" );
				plr.stats.uhc.deaths = json::get_int( "deaths" );
				plr.stats.uhc.kit_WORKING_TOOLS = json::get_int( "kit_WORKING_TOOLS" );
				plr.stats.uhc.equippedKit = json::get_string( "equippedKit" );
			}
		}
	}
}

// main class
class hypixel {
public:
	hypixel( std::string api_key ) {
		this->api_key = api_key;
	}

	auto get_player( std::string data, bool uuid = false ) -> hypixel_player {
		hypixel_player plr;
		std::string t_uuid = uuid == false ? get_uuid( data ) : data;
		std::string req = get_hypixel( "player", t_uuid );

		if ( req == "NULL" )
			return plr;

		auto t_json = nlohmann::json::parse( req );
		json::set_obj = t_json;

		get::player::player( plr );
		get::player::challenges_all_time( plr );
		get::player::pet_consumables( plr );
		get::player::player_achievements( plr );

		get::player::stats::bedwars( plr );
		get::player::stats::arcade( plr );
		get::player::stats::duels( plr );
		get::player::stats::hungergames( plr );
		get::player::stats::skywars( plr );
		get::player::stats::tntgames( plr );
		get::player::stats::battleground( plr );
		get::player::stats::walls3( plr );
		get::player::stats::murdermystery( plr );
		get::player::stats::gingerbread( plr );
		get::player::stats::paintball( plr );
		get::player::stats::arena( plr );
		get::player::stats::quake( plr );
		get::player::stats::vampire( plr );
		get::player::stats::walls( plr );
		get::player::stats::MCGO( plr );
		get::player::stats::supersmash( plr );
		get::player::stats::uhc( plr );

		return plr;
	}
	auto get_friends( std::string data, bool uuid = false ) -> std::vector<hypixel_friend> {
		std::vector<hypixel_friend> friends_list = std::vector<hypixel_friend>( );
		std::string t_uuid = uuid == false ? get_uuid( data ) : data;
		std::string req = get_hypixel( "friends", t_uuid );

		if ( req == "NULL" )
			return friends_list;

		auto t_json = nlohmann::json::parse( req );
		try {
			for ( auto& t : t_json[ "records" ] ) {
				hypixel_friend friend_t;

				try {
					friend_t._id = t[ "_id" ];
				}
				catch ( ... ) { }

				try {
					friend_t.uuidSender = t[ "uuidSender" ];
				}
				catch ( ... ) { }

				try {
					friend_t.uuidReceiver = t[ "uuidReceiver" ];
				}
				catch ( ... ) { }

				try {
					friend_t.started = t[ "started" ];
				}
				catch ( ... ) { }

				friends_list.push_back( friend_t );
			}
		}
		catch ( ... ) { }

		return friends_list;
	}
	auto get_recentgames( std::string data, bool uuid = false ) -> std::vector<hypixel_recent_game> {
		std::vector<hypixel_recent_game> games_list = std::vector<hypixel_recent_game>( );
		std::string t_uuid = uuid == false ? get_uuid( data ) : data;
		std::string req = get_hypixel( "recentgames", t_uuid );

		if ( req == "NULL" )
			return games_list;

		auto t_json = nlohmann::json::parse( req );

		try {
			for ( auto& t : t_json[ "games" ] ) {
				hypixel_recent_game game_t;

				try {
					game_t.date = t[ "date" ];
				}
				catch ( ... ) { }

				try {
					game_t.gameType = t[ "gameType" ];
				}
				catch ( ... ) { }

				try {
					game_t.mode = t[ "mode" ];
				}
				catch ( ... ) { }

				try {
					game_t.map = t[ "map" ];
				}
				catch ( ... ) { }

				games_list.push_back( game_t );
			}
		}
		catch ( ... ) { }

		return games_list;
	}
	auto get_games( ) -> std::vector<hypixel_game> {
		std::vector<hypixel_game> games_list = std::vector<hypixel_game>( );
		std::string req = get_hypixel( "resources/games", "" );

		if ( req == "NULL" )
			return games_list;

		auto t_json = nlohmann::json::parse( req );

		try {
			for ( auto& t : t_json[ "games" ] ) {
				hypixel_game game_t;

				try {
					game_t.databaseName = t[ "databaseName" ];
				}
				catch ( ... ) { }

				try {
					game_t.id = t[ "id" ];
				}
				catch ( ... ) { }

				try {
					game_t.name = t[ "name" ];
				}
				catch ( ... ) { }

				try {
					for ( auto& j : t[ "modeNames" ] ) {
						game_t.modeNames.push_back( j );
					}
				}
				catch ( ... ) { }

				games_list.push_back( game_t );
			}
		}
		catch ( ... ) { }

		return games_list;
	}
	auto get_player_count( ) -> int {
		std::string req = get_hypixel( "counts", "" );

		if ( req == "NULL" )
			return NULL;

		auto t_json = nlohmann::json::parse( req );
		try {
			return t_json[ "playerCount" ];
		}
		catch ( ... ) {
			return NULL;
		}
	}
	auto get_punishment_stats( ) -> hypixel_punishments {
		hypixel_punishments punishments;
		std::string req = get_hypixel( "punishmentstats", "" );

		if ( req == "NULL" )
			return punishments;

		auto t_json = nlohmann::json::parse( req );

		try {
			punishments.watchdog_lastMinute = t_json[ "watchdog_lastMinute" ];
		}
		catch ( ... ) { }
		try {
			punishments.staff_rollingDaily = t_json[ "staff_rollingDaily" ];
		}
		catch ( ... ) { }
		try {
			punishments.watchdog_total = t_json[ "watchdog_total" ];
		}
		catch ( ... ) { }
		try {
			punishments.watchdog_rollingDaily = t_json[ "watchdog_rollingDaily" ];
		}
		catch ( ... ) { }
		try {
			punishments.staff_total = t_json[ "staff_total" ];
		}
		catch ( ... ) { }

		return punishments;
	}
	auto is_online( std::string data, bool uuid = false ) -> bool {
		std::string t_uuid = uuid == false ? get_uuid( data ) : data;
		std::string req = get_hypixel( "status", t_uuid );

		if ( req == "NULL" )
			return false;

		auto t_json = nlohmann::json::parse( req );
		try {
			return t_json[ "session" ][ "online" ];
		}
		catch ( ... ) {
			return false;
		}
	}
private:
	std::string url = "https://api.hypixel.net";
	std::string api_key = "";

	auto get_uuid( std::string username ) -> std::string {
		std::string v = get( "https://api.mojang.com/users/profiles/minecraft/" + username );
		try {
			auto t_json = nlohmann::json::parse( v );
			return t_json[ "id" ];
		}
		catch ( ... ) {
			std::cout << "[hypixel] user was not found." << std::endl;
			return "NULL";
		}
	}
	auto get_hypixel( std::string endpoint, std::string uuid ) -> std::string {
		if ( uuid == "NULL" )
			return "NULL";

		std::string req = get( "https://api.hypixel.net/" + endpoint + "?key=" + api_key + "&uuid=" + uuid );
		auto t_json = nlohmann::json::parse( req );

		if ( t_json[ "success" ] == false ) {
			printf( "[hypixel] something went wrong\n" );
			return "NULL";
		}

		return req;
	}
	auto get( std::string data ) -> std::string {
		HINTERNET in = InternetOpenA( "Mozilla/5.0", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, NULL );
		HINTERNET url_file;
		std::string result;

		if ( !in )
			return "";

		url_file = InternetOpenUrlA( in, data.c_str( ), NULL, NULL, NULL, NULL );

		if ( !url_file )
			return "";

		char buffer[ 2000 ];
		DWORD bytes;

		do {
			InternetReadFile( url_file, buffer, 2000, &bytes );
			result.append( buffer, bytes );
			memset( buffer, 0, 2000 );
		} while ( bytes );

		InternetCloseHandle( in );
		InternetCloseHandle( url_file );

		std::string search = "|n";
		std::string replace = "\r\n";

		size_t pos = 0;
		while ( ( pos = result.find( search, pos ) ) != std::string::npos ) {
			result.replace( pos, search.length( ), "" );
			pos += replace.length( );
		}

		return result;
	}
};