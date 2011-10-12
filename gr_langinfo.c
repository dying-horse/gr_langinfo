#include <langinfo.h>
#include <lauxlib.h>
#include <lua.h>
#include <string.h>


static int
gr_langinfo_codeset(lua_State *L) {
 lua_pushstring(L, nl_langinfo(CODESET));

 return 1;
}

static int
gr_langinfo_translate(lua_State *L) {
 const char *translate_in = luaL_checkstring(L, -1);

 if (!strcmp(translate_in, "Sun"))
  lua_pushstring(L, nl_langinfo(DAY_1));
 else if (!strcmp(translate_in, "Mon"))
  lua_pushstring(L, nl_langinfo(DAY_2));
 else if (!strcmp(translate_in, "Tue"))
  lua_pushstring(L, nl_langinfo(DAY_3));
 else if (!strcmp(translate_in, "Wed"))
  lua_pushstring(L, nl_langinfo(DAY_4));
 else if (!strcmp(translate_in, "Thu"))
  lua_pushstring(L, nl_langinfo(DAY_5));
 else if (!strcmp(translate_in, "Fri"))
  lua_pushstring(L, nl_langinfo(DAY_6));
 else if (!strcmp(translate_in, "Sat"))
  lua_pushstring(L, nl_langinfo(DAY_7));

 else if (!strcmp(translate_in, "Jan"))
  lua_pushstring(L, nl_langinfo(MON_1));
 else if (!strcmp(translate_in, "Feb"))
  lua_pushstring(L, nl_langinfo(MON_2));
 else if (!strcmp(translate_in, "Mar"))
  lua_pushstring(L, nl_langinfo(MON_3));
 else if (!strcmp(translate_in, "Apr"))
  lua_pushstring(L, nl_langinfo(MON_4));
 else if (!strcmp(translate_in, "May"))
  lua_pushstring(L, nl_langinfo(MON_5));
 else if (!strcmp(translate_in, "Jun"))
  lua_pushstring(L, nl_langinfo(MON_6));
 else if (!strcmp(translate_in, "Jul"))
  lua_pushstring(L, nl_langinfo(MON_7));
 else if (!strcmp(translate_in, "Aug"))
  lua_pushstring(L, nl_langinfo(MON_8));
 else if (!strcmp(translate_in, "Sep"))
  lua_pushstring(L, nl_langinfo(MON_9));
 else if (!strcmp(translate_in, "Oct"))
  lua_pushstring(L, nl_langinfo(MON_10));
 else if (!strcmp(translate_in, "Nov"))
  lua_pushstring(L, nl_langinfo(MON_11));
 else if (!strcmp(translate_in, "Dec"))
  lua_pushstring(L, nl_langinfo(MON_12));

 else luaL_error(L, "Invalid arg to langinfo.translate");

 lua_remove(L, -2);

 return 1;
}

static int
gr_langinfo_abbreviate(lua_State *L) {
 const char *translate_in = luaL_checkstring(L, -1);

 if (!strcmp(translate_in, "Sun"))
  lua_pushstring(L, nl_langinfo(ABDAY_1));
 else if (!strcmp(translate_in, "Mon"))
  lua_pushstring(L, nl_langinfo(ABDAY_2));
 else if (!strcmp(translate_in, "Tue"))
  lua_pushstring(L, nl_langinfo(ABDAY_3));
 else if (!strcmp(translate_in, "Wed"))
  lua_pushstring(L, nl_langinfo(ABDAY_4));
 else if (!strcmp(translate_in, "Thu"))
  lua_pushstring(L, nl_langinfo(ABDAY_5));
 else if (!strcmp(translate_in, "Fri"))
  lua_pushstring(L, nl_langinfo(ABDAY_6));
 else if (!strcmp(translate_in, "Sat"))
  lua_pushstring(L, nl_langinfo(ABDAY_7));

 else if (!strcmp(translate_in, "Jan"))
  lua_pushstring(L, nl_langinfo(ABMON_1));
 else if (!strcmp(translate_in, "Feb"))
  lua_pushstring(L, nl_langinfo(ABMON_2));
 else if (!strcmp(translate_in, "Mar"))
  lua_pushstring(L, nl_langinfo(ABMON_3));
 else if (!strcmp(translate_in, "Apr"))
  lua_pushstring(L, nl_langinfo(ABMON_4));
 else if (!strcmp(translate_in, "May"))
  lua_pushstring(L, nl_langinfo(ABMON_5));
 else if (!strcmp(translate_in, "Jun"))
  lua_pushstring(L, nl_langinfo(ABMON_6));
 else if (!strcmp(translate_in, "Jul"))
  lua_pushstring(L, nl_langinfo(ABMON_7));
 else if (!strcmp(translate_in, "Aug"))
  lua_pushstring(L, nl_langinfo(ABMON_8));
 else if (!strcmp(translate_in, "Sep"))
  lua_pushstring(L, nl_langinfo(ABMON_9));
 else if (!strcmp(translate_in, "Oct"))
  lua_pushstring(L, nl_langinfo(ABMON_10));
 else if (!strcmp(translate_in, "Nov"))
  lua_pushstring(L, nl_langinfo(ABMON_11));
 else if (!strcmp(translate_in, "Dec"))
  lua_pushstring(L, nl_langinfo(ABMON_12));

 else luaL_error(L, "Invalid arg to langinfo.translate");

 lua_remove(L, -2);

 return 1;
}


/* General */

static luaL_Reg
gr_langinfo_funcs[] =  {
 { "codeset",    &gr_langinfo_codeset },
 { "translate",  &gr_langinfo_translate },
 { "abbreviate", &gr_langinfo_abbreviate },
 { NULL, NULL }
};
 
int
luaopen_gr_langinfo(lua_State *L) {
 luaL_register(L, "langinfo", gr_langinfo_funcs);

 return 0;
}
