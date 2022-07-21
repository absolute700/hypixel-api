# hypixel api wrapper
havent seen any made in c++, prob because automatic json deserialization doesn't seem to be possible i think.

the endpoints included are

`/player`

`/friends`

`/recentgames`

`/resources/games`

`/counts`

`/punishmentstats`

# installation
its a 'single' header lib, but sadly it requires a json library and i used (https://github.com/nlohmann/json);
so import `hypixel.hpp` && `json.hpp` in your project and ba da boom ur done.

includes: download

# usage

`initalization`
```c++
hypixel hypixel( "api_key" );
```

`/player`
```c++
hypixel_player plr = hypixel.get_player( "username" );

printf( "display name: %s\n", plr.display_name.c_str( ) );
printf( "network xp: %lld\n", plr.network_exp );
printf( "karma: %lld\n", plr.karma );

printf( "bedwars level: %i\n", plr.achievements.bedwars_level );
printf( "skywars kills: %i\n", plr.stats.skywars.kills );
```

`/friends`
```c++
std::vector<hypixel_friend> friends = hypixel.get_friends( "username" );
for ( auto friend_t : friends ) {
   printf( "started: %lld\n", friend_t.started );
   printf( "id: %s\n", friend_t._id.c_str( ) );
   printf( "receiver: %s\n", friend_t.uuidReceiver.c_str( ) );
   printf( "sender: %s\n", friend_t.uuidSender.c_str( ) );
}
```

`/recentgames`
```c++
std::vector<hypixel_recent_game> recent_games = hyp.get_recentgames( "username" );
for ( auto game : recent_games ) {
   printf( "mode: %s\n", game.mode.c_str( ) );
   printf( "type: %s\n", game.gameType.c_str( ) );
   printf( "map: %s\n", game.map.c_str( ) );
   printf( "date: %lld\n", game.date );
}
```

`/resources/games`
```c++
std::vector<hypixel_game> games = hypixel.get_games( );
for ( auto game : games ) {
   printf( "name: %s\n", game.name.c_str( ) );
   for ( auto mode : game.modeNames ) {
	 printf( "game mode: %s\n", mode.c_str( ) );
   }
}
```

`/counts`
```c++
printf( "player count: %i\n", hypixel.get_player_count( ) );
```

`/punishmentstats`
```c++
hypixel_punishments punishments = hyp.get_punishment_stats( );
printf( "watchdog bans daily: %i\n", punishments.watchdog_rollingDaily );
printf( "staff bans daily: %i\n", punishments.staff_rollingDaily );
printf( "bans last minute: %i\n", punishments.watchdog_lastMinute );
printf( "total staff bans: %i\n", punishments.staff_total );
printf( "total watchdogs bans: %i\n", punishments.watchdog_total );
```


  
