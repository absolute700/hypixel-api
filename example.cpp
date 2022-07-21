#include "src/hypixel.hpp"

int main( ) {
	hypixel hyp( "api_key" );
	hypixel_punishments punishments = hyp.get_punishment_stats( );

	printf( "player count: %i\n", hyp.get_player_count( ) );
	printf( "watchdog bans daily: %i\n", punishments.watchdog_rollingDaily );
	printf( "staff bans daily: %i\n", punishments.staff_rollingDaily );
	printf( "bans last minute: %i\n", punishments.watchdog_lastMinute );
	printf( "total staff bans: %i\n", punishments.staff_total );
	printf( "total watchdogs bans: %i\n", punishments.watchdog_total );

	hypixel_player plr = hyp.get_player( "username" );

	printf( "display name: %s\n", plr.display_name.c_str( ) );
	printf( "network xp: %lld\n", plr.network_exp );
	printf( "karma: %lld\n", plr.karma );

	printf( "bedwars level: %i\n", plr.achievements.bedwars_level );
	printf( "skywars kills: %i\n", plr.stats.skywars.kills );

	printf( "is online: %s\n", hyp.is_online( "username" ) ? "true" : "false" );

	std::vector<hypixel_game> games = hyp.get_games( );
	for ( auto game : games ) {
		printf( "name: %s\n", game.name.c_str( ) );
		for ( auto mode : game.modeNames ) {
			printf( "game mode: %s\n", mode.c_str( ) );
		}
	}

	std::vector<hypixel_friend> friends = hyp.get_friends( "username" );
	for ( auto friend_t : friends ) {
		printf( "started: %lld\n", friend_t.started );
		printf( "id: %s\n", friend_t._id.c_str( ) );
		printf( "receiver: %s\n", friend_t.uuidReceiver.c_str( ) );
		printf( "sender: %s\n", friend_t.uuidSender.c_str( ) );
	}

	std::vector<hypixel_recent_game> recent_games = hyp.get_recentgames( "username" );
	for ( auto game : recent_games ) {
		printf( "mode: %s\n", game.mode.c_str( ) );
		printf( "type: %s\n", game.gameType.c_str( ) );
		printf( "map: %s\n", game.map.c_str( ) );
		printf( "date: %lld\n", game.date );
	}

	return 0;
}