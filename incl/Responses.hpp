#pragma once

enum Res {
    NOT_ENOUGH_PARAMS,
    ENOUGH_PARAMS,
    PROVIDE_PASS,
    REGISTER_FIRST,
    USER_ALREADY_REGISTERED,
    USER_ALREADY_AUTHENTICATED,
    INCORRERCT_PASSWORD,
    NO_NICKNAME_GIVEN,
    NICKNAME_IN_USE,
    ERRONEOUS_NICKNAME,
    RPL_WELCOME,
    RPL_YOURHOST,
    RPL_CREATED,
    NICKNAME_REGISTERED,
    SEND_PRIVATE_MESSAGE,
    UNKNWON_COMMAND,
    ERR_NORECIPIENT,
    NO_TEXT_TO_SEND,
    ERR_NOSUCHNICK,
    JOIN_CHANNEL,
    WHO_CHANNEL,
    TOPIC_SET,
    BAD_CHANNEL_STRUCTURE,
    ERR_UNKNOWNMODE,
    ERR_USERNOTINCHANNEL,
    ERR_CHANOPRIVSNEEDED,
    ERR_CHANOPRIVSNEEDED_INVITE,
    ERR_NOTREGISTERED,
    ERR_NOTONCHANNEL,
    ERR_USERONCHANNEL,
    ERR_CHANNELISFULL,
    ERR_INVITEONLYCHAN,
    ERR_USERSDONTMATCH,
    RPL_CHANNELMODEIS,
    RPL_KICKED,
    RPL_INVITING,
    RPL_NOTOPIC,
    ERR_BADCHANNELKEY,
    ERR_NOSUCHCHANNEL,
    RPL_PARTED,
    ERR_CHANNELNAME_LENGTH,
    ERR_NICKNAME_FOR_BOT,
    ERR_NICKNAME_TOO_LONG,
    ERR_USERNAME_TOO_LONG,
    BOT_USAGE,
    PONG_RESPONSE,
    ERR_BAD_TOPIC
};