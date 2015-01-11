// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_status_code.proto

#ifndef PROTOBUF_msg_5fstatus_5fcode_2eproto__INCLUDED
#define PROTOBUF_msg_5fstatus_5fcode_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
void protobuf_AssignDesc_msg_5fstatus_5fcode_2eproto();
void protobuf_ShutdownFile_msg_5fstatus_5fcode_2eproto();


enum StatusCode {
  OK = 0,
  ERR_UNKNOW = 1,
  ERR_ROLE_CREATE = 2,
  ERR_ROLENAME_REPEAT = 3,
  ERR_ROLE_DELETE = 4,
  ERR_USERNAME_NULL = 5,
  ERR_PASSWORD_NULL = 6,
  ERR_USERNAME_NONEXISTENT = 7,
  ERR_PASSWORD = 8,
  ERR_USERNAME_REPEAT = 9,
  ERR_REGISTER = 10,
  ERR_SELLEQUIP = 11,
  ERR_BAG_GRID_NOT_ENOUGH = 12,
  ERR_COPPER_NOT_ENOUGH = 13,
  ERR_GOLD_NOT_ENOUGH = 14,
  ERR_JADE_NOT_ENOUGH = 15,
  ERR_EQUIPGOODS = 16,
  ERR_ITEM_TYPE = 17,
  ERR_ITEM_NUM_ENOUGH = 18,
  ERR_FILLIN_SAME_GEM = 19,
  ERR_SELL_GEM = 20,
  ERR_BAD_ROLE_ID = 21,
  ERR_BUY_GEM = 22,
  ERR_BAD_DUNGEON_STATE_ID = 23,
  ERR_BAD_GIFTINBAG_ID = 24,
  ERR_BAD_GOODS_ID = 25,
  ERR_COOLDOWN_STATUS = 26,
  ERR_COOLDOWN_NOT_FINISH = 27,
  ERR_ROLE_LEVEL_OR_VIPLEVEL = 28,
  ERR_GUAXIANG_COUNT_IS_MAX = 29,
  ERR_GUAXIANG_BAG_IS_FULL = 30,
  ERR_BAD_SKILL_ID = 31,
  ERR_SKILL_ALREADY_OPENED = 32,
  ERR_BAD_SKILL_BOOK = 33,
  ERR_BAD_SKILL_SEGMENT = 34,
  ERR_SEGMENT_NOT_OPEN = 35,
  ERR_SEGMENT_REACH_MAX_LV = 36,
  ERR_HONOUR_NOT_ENOUGH = 37,
  ERR_CREDIT_NOT_ENOUGH = 38,
  ERR_SKILL_NOT_OPEN = 39,
  ERR_SKILL_REACH_ROLE_LV = 40,
  ERR_SKILL_REACH_MAX_LV = 41,
  ERR_ROLE_LEVEL_NOT_ENOUGH = 42,
  ERR_JUNIOR_SKILL_LV0 = 43,
  ERR_BAD_SKILL_SLOT = 44,
  ERR_SLOT_NOT_EMPTY = 45,
  ERR_VIP_NOT_DIVIED = 46,
  ERR_ROLE_REACH_MAX_LV = 47,
  ERR_BAD_GOODS_TYPE = 48,
  ERR_BAD_GUAXIANG_PLACE = 49,
  ERR_BAD_GUAXIANG_STATUS = 50,
  ERR_MONEY_TREE_LEFT_SHAKE_COUNT = 51,
  ERR_YIJUN_NAME_REPEATED = 52,
  ERR_YIJUN_NAME_EMPTY = 53,
  ERR_ALREADY_JOINED_YIJUN = 54,
  ERR_NO_YIJUN_AUTHORITY = 55,
  ERR_INVALID_APPLICATION = 56,
  ERR_BAD_YIJUN_ID = 57,
  ERR_BAD_YIJUN_LEVEL = 58,
  ERR_YIJUN_IS_FULL = 59,
  ERR_PRAY_LIMIT = 60,
  ERR_EXIT_YIJUN = 61,
  ERR_CONTRIBUTION = 62,
  ERR_ROLE_OFFLINE = 63,
  ERR_TRANSFER_MARSHAL = 64,
  ERR_YIJUN_REACH_MAX_LV = 65,
  ERR_WEALTH_NOT_ENOUGH = 66,
  ERR_NOT_JOIN_YIJUN = 67,
  ERR_PROMOTION = 68,
  ERR_DEMOTION = 69,
  ERR_NOT_YIJUN_MEMBER = 70,
  ERR_YIJUN_BUILDING_ID = 71,
  ERR_BUILDING_REACH_MAX_LV = 72,
  ERR_SKILL_REACH_BUILDING_LV = 73,
  ERR_CONTRIBUTION_NOT_ENOUGH = 74,
  ERR_YIJUN_IN_OPERATION = 75,
  ERR_ALREADY_APPROVED = 76,
  ERR_EQUIP_CANNOT_BUY = 77,
  ERR_DUNGEON_FRONT_UNCOMPLETE = 78,
  ERR_MISSION_FRONT_UNCOMPLETE = 79,
  ERR_REWARDED = 80,
  ERR_NOT_ENOUGH_STAR = 81,
  ERR_MISSION_COMPLETEED = 82,
  ERR_MISSION_CANNOT_FIND = 83,
  ERR_STAR_NUM = 84,
  ERR_EXP_NOT_ENOUGH = 85,
  ERR_ROLE_LEVEL_UP = 86,
  ERR_GOODS_NOT_IN_BAG = 87,
  ERR_GOODS_NOT_ON_SLOT = 88,
  ERR_FRIEND_NAME = 89,
  ERR_FRIEND_STATUS = 90,
  ERR_SLOT_IS_EMPTY = 91,
  ERR_GOODS_NOT_ENOUGH = 92,
  ERR_GEM_NOT_IN_BAG = 93,
  ERR_GEM_NOT_ENOUGH = 94,
  ERR_GIFTINBAG_CANNOT_TRADE = 95,
  ERR_MISSION_REACH_MAX_STAR = 96,
  ERR_GUAXIANG_REACH_MAX_LV = 97,
  ERR_OFFLINE_EXP = 98,
  ERR_CHECK_PROPERTIES = 99,
  ERR_BUY_POWER = 100,
  ERR_BUY_POWER_COUNT = 101,
  ERR_POWER_IS_FULL = 102,
  ERR_POWER_NOT_ENOUGH = 103,
  ERR_MONEY = 104,
  ERR_BAG_GUAXIANG_NOT_ENOUFH = 105,
  ERR_DIVINER_NOT_LIT = 106,
  ERR_GET_ARENA_INFO = 107,
  ERR_ARENA_ATTACKER_LOCKED = 108,
  ERR_ARENA_ATTACKER_RANK_CHANGED = 109,
  ERR_ARENA_TARGET_LOCKED = 110,
  ERR_ARENA_TARGET_RANK_CHANGED = 111,
  ERR_GET_RANK_REWARD = 112,
  ERR_NO_PK_COUNT = 113,
  ERR_END_PK = 114,
  ERR_NOT_VIP = 115,
  ERR_OVER_MAX_BUY_PK_COUNT_TODAY = 116,
  ERR_ARENA_RANK_STAET = 117,
  ERR_ADD_EXP = 118,
  ERR_ROLE_NAME_NOT_LEGAL = 119,
  ERR_HAS_NOT_FINISH_DUNGEON = 120,
  ERR_HAS_FINSH_ALL_SWEEP_DUNGEON = 121,
  ERR_HAS_NOT_BEEN_FINISH_TIME = 122,
  ERR_HAS_ON_SWEPP_DUNGEON = 123,
  ERR_YIJUN_NAME_NOT_LEGAL = 124,
  ERR_YIJUN_PUBLISH_NOTICE_NOT_LEGAL = 125,
  ERR_EQUIP_SKILL_SAME = 126,
  ERR_ROLE_LOCKED = 127,
  ERR_CHAT_FORBIDDEN = 128,
  ERR_ACCOUNT_LOCKED = 129,
  ERR_ENOUGH_VIP_LEVEL_ONE_KEY_COMPOSE_GEM = 130,
  ERR_OPENED_GIFT = 131,
  ERR_NOT_IN_THE_PERIOD_OF_VALIDITY = 132,
  ERR_ROLE_NONEXISTENT = 133,
  ERR_CANT_ACCEPT_VIP_NOT_ENOUGH = 134,
  ERR_SIGNED_RECORD = 135,
  ERR_SIGNED_RECORD_FULL = 136,
  ERR_SIGNED_OPEND_REWARD = 137,
  ERR_ACTIVATION_CODE_INVALID = 138,
  ERR_ACTIVATION_CODE_EXPIRED = 139,
  ERR_GIFT_NOT_EXIST = 140,
  ERR_GIFT_EXPIRED = 141,
  ERR_EXPAND_BAG_GRID_IS_MAX = 142,
  ERR_NO_ENHANCEED_GUAXIANG = 143,
  ERR_NO_YIJUN = 144,
  ERR_LOGIN_FAILURE = 145,
  ERR_LOGIN_AVLIDATE_ERROR = 146,
  ERR_LEVEL_UP_KUNGFU_SKILL = 147,
  ERR_EQUIP_KUNGFU_SKILL = 148,
  ERR_ONE_KEY_UNEQUIP_KUNGFU_SKILLS = 149,
  ERR_UNLOCK_KUNGFU_BUTTON = 150,
  ERR_UNLOCK_KUNGFU_SLOT = 151,
  ERR_INIT_KUNGFU_INFO = 152,
  ERR_OPEN_KUNGFU_MAX = 153,
  ERR_NOT_KUNGFU_BOOK = 154,
  ERR_PAY = 155,
  ERR_PAY_SLL360 = 156,
  ERR_CREATE_ROLE_COUNT_MAX = 157,
  ERR_KUNGFU_LOCK = 158,
  ERR_KUNGFU_REPLACE = 159,
  ERR_KUNGFU_GET = 160,
  ERR_MISSION_HAVE = 161,
  ERR_WORSIP = 163,
  ERR_INIT_WORSHIP = 164,
  ERR_RE_START_GAME = 165,
  ERR_WORLDBOSS_CANT_ENTER_DUNGEON = 166,
  ERR_WORLDBOSS_CANT_QUIT_DUNGEON = 167,
  ERR_WORLDBOSS_CANT_ATTACK = 168,
  ERR_WORLDBOSS_CANT_BUY_BUFF = 169,
  ERR_WORLDBOSS_CANT_ENTER_CITY = 170,
  ERR_WORLDBOSS_CANT_QUIT_CITY = 171,
  ERR_WORLDBOSS_END = 172,
  ERR_YIJUNBOSS_END = 173,
  ERR_SHOP_SALE_BEGIN = 178,
  ERR_SHOP_SALE_END = 179,
  ERR_SHOP_GOODS_SALE = 180,
  ERR_SPECIALDUNGEON_BUY_COUNT = 181,
  ERR_SPECIALDUNGEON_ENTER_COUNT = 182,
  ERR_SPECIALDUNGEON_ENTER_ALREADY = 183,
  ERR_SPECIALDUNGEON_END = 184,
  ERR_APPROVE_FRIEND = 185,
  ERR_ADD_FRIEND_COUNT = 186,
  ERR_ADD_FRIEND_TARGET_COUNT = 187,
  ERR_FRIEND_HAS = 188,
  ERR_FRIENDSHIP_NOT_ENOUGH = 189,
  ERR_SEND_CHAT_SELF = 190,
  ERR_UPDATE_ACHIEVEMENT = 191,
  ERR_GET_ACHIEVEMENT_REWARD_NO = 192,
  ERR_GET_ACHIEVEMENT_REWARD_ALREADY = 193,
  ERR_USE_ACHIEVEMENT_TITLE = 194,
  ERR_GET_ACHIEVEMENT_REWARD_STEP = 195,
  ERR_YIJUN_HAS_CAPTURED = 196,
  ERR_YIJUN_CAPTURED = 197,
  ERR_YIJUN_WEATHPD_POOR = 198,
  ERR_YIJUN_HAS_DISMISSION = 199,
  ERR_YIJUN_DEFENSE_FAILURE_NOT_ROLE = 200,
  ERR_YIJUN_CAPTURE_SUCCESS = 201,
  ERR_YIJUN_CAPTURE_DEFENSE_FAIL = 202,
  ERR_YIJUN_CAPTURE_PROTECTED_ING = 203,
  ERR_YIJUN_NOT_EXIST_INVALID = 204,
  ERR_NO_FIGHT = 205,
  ERR_MAIL_NOT_EXITS = 206,
  ERR_MAIL_MARKED_READ = 207,
  ERR_MAIL_KIT_OPENED = 208,
  ERR_KUNGFU_STAR_MAX = 209,
  ERR_LEVEL_UP_KUNGFU_MAX = 210,
  ERR_NO_HAS_STATIC_DATA = 220,
  ERR_NO_REFRESH = 221,
  ERR_NO_NEWBIE_REWARD = 222,
  ERR_VIP_LEVEL_TOO_HIGHER = 223,
  ERR__VIP_LEVEL_TOO_HIGHER_NOT_BUY = 224,
  ERR__VIP_EXPIENCED_CARD_EXPIRED = 225,
  ERR_MONTH_CARD_EXPIRED = 226,
  ERR_MONTH_CARD_OPENED = 227,
  ERR_HAS_MONTH_CARD = 228,
  ERR_CHAT_SWITCH_CLOSED = 229,
  ERR_FRIEND_SWITCH_CLOSED = 230,
  ERR_SERVER_FIX_STATUS = 231,
  ERR_BORN_PET = 234,
  ERR_BORN_PET_NOT_END = 235,
  ERR_BORN_PET_NOT_ENOUGH_BAG_COUNT = 236,
  ERR_TONGTIAN_TOWER_FLOOR = 237,
  ERR_RESET_TONGTIAN_TOWER = 238,
  ERR_KUNGFU_SLOT_CHILD_LEVEL_MAX = 239,
  ERR_ACCOUNTGIFT_HADGOT = 240,
  ERR_BORNING_PET = 241,
  ERR_LEVELUP_STAR = 242,
  ERR_PET_FIGHTING_STATUS = 243,
  ERR_LEVELUP = 244,
  ERR_YIJUN_BOSS_STARTED = 245,
  ERR_YIJUN_EXIST_CD_NO_END = 246,
  ERR_YIJUN_BOSS_STARTED_CANT_OPERATE = 247
};
bool StatusCode_IsValid(int value);
const StatusCode StatusCode_MIN = OK;
const StatusCode StatusCode_MAX = ERR_YIJUN_BOSS_STARTED_CANT_OPERATE;
const int StatusCode_ARRAYSIZE = StatusCode_MAX + 1;

// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_5fstatus_5fcode_2eproto__INCLUDED
