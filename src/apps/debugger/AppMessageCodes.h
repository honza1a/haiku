/*
 * Copyright 2009, Ingo Weinhold, ingo_weinhold@gmx.de.
 * Copyright 2013-2016, Rene Gollent, rene@gollent.com.
 * Distributed under the terms of the MIT License.
 */
#ifndef APP_MESSAGE_CODES_H
#define APP_MESSAGE_CODES_H


enum {
	MSG_SETTINGS_MENU_IMPL_ITEM_SELECTED		= 'smii',
	MSG_SETTINGS_MENU_IMPL_OPTION_ITEM_SELECTED	= 'smio',

	MSG_TEXTVIEW_AUTOSCROLL						= 'tvas',

	MSG_VARIABLES_VIEW_CONTEXT_MENU_DONE		= 'ctxd',
	MSG_VARIABLES_VIEW_NODE_SETTINGS_CHANGED	= 'vvns',

	MSG_STACK_FRAME_VALUE_RETRIEVED				= 'sfvr',
	MSG_STOP_IMAGE_SETTINGS_CHANGED				= 'sisc',
	MSG_STOP_IMAGE_NAME_ADDED					= 'sina',
	MSG_STOP_IMAGE_NAME_REMOVED					= 'sinr',

	MSG_SHOW_TEAMS_WINDOW						= 'stew',
	MSG_TEAMS_WINDOW_CLOSED						= 'tewc',
	MSG_SHOW_TEAM_SETTINGS_WINDOW				= 'stsw',
	MSG_TEAM_SETTINGS_WINDOW_CLOSED				= 'tswc',
	MSG_SHOW_CONNECTION_CONFIG_WINDOW			= 'sccw',
	MSG_CONNECTION_CONFIG_WINDOW_CLOSED			= 'ccwc',
	MSG_SHOW_BREAKPOINT_EDIT_WINDOW				= 'sbew',
	MSG_BREAKPOINT_EDIT_WINDOW_CLOSED			= 'bewc',
	MSG_SHOW_SIGNAL_DISPOSITION_EDIT_WINDOW		= 'sdew',
	MSG_SIGNAL_DISPOSITION_EDIT_WINDOW_CLOSED	= 'sdec',
	MSG_SHOW_START_TEAM_WINDOW					= 'sstw',
	MSG_START_TEAM_WINDOW_CLOSED				= 'stwc',
	MSG_START_NEW_TEAM							= 'sttt',
	MSG_DEBUG_THIS_TEAM							= 'dbtt',
	MSG_LOAD_CORE_TEAM							= 'lcte',
	MSG_SHOW_INSPECTOR_WINDOW					= 'sirw',
	MSG_INSPECTOR_WINDOW_CLOSED					= 'irwc',
	MSG_SHOW_EXPRESSION_WINDOW					= 'seww',
	MSG_EXPRESSION_WINDOW_CLOSED				= 'ewwc',
	MSG_SHOW_EXPRESSION_PROMPT_WINDOW			= 'sepw',
	MSG_ADD_NEW_EXPRESSION						= 'anex',
	MSG_EXPRESSION_PROMPT_WINDOW_CLOSED			= 'epwc',
	MSG_SHOW_VARIABLE_EDIT_WINDOW				= 'svew',
	MSG_VARIABLE_EDIT_WINDOW_CLOSED				= 'vewc',
	MSG_EXPRESSION_EVALUATED					= 'exev',
	MSG_SHOW_TYPECAST_NODE_PROMPT				= 'stnp',
	MSG_TYPECAST_TO_ARRAY						= 'stta',
	MSG_TYPECAST_NODE							= 'tyno',
	MSG_SHOW_WATCH_VARIABLE_PROMPT				= 'swvp',
	MSG_SHOW_CONTAINER_RANGE_PROMPT				= 'scrp',
	MSG_SET_CONTAINER_RANGE						= 'chcr',
	MSG_WRITE_VARIABLE_VALUE					= 'wrvv',
};


#endif	// APP_MESSAGE_CODES_H