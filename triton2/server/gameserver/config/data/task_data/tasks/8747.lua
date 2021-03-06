task = {
  id = 8747,    --任务ID
  kind = 0,    --任务种类
  color = 0,    --任务颜色
  name = "#td_8747_name",  
  desc = "#td_8747_desc",  
  dest = "#td_8747_dest",  
  section = "#td_8747_section",  
  give_npc = 40198,    --发放NPC
  give_map_id = 62,    --发放NPC所在的地图ID
  recv_npc = 40098,    --回收NPC
  recv_map_id = 62,    --回收NPC所在的地图ID
  hard = 0,    --任务难度
  timer = 0,    --任务时限(秒)
  cancelable = 1,    --任务能否被放弃
  repeatable = 0,    --任务成功后可否重做
  retryable = 1,    --任务失败后可否重试
  fail_on_killed = 0,    --玩家被杀死后，是否认为任务失败
  after_task = 0,    --后置任务(自动弹出)
  direct_complete = 0,    --任务是否直接完成(不用找NPC交)
  get_metier_task = 0,    --是否任职任务
  task_level = 22,    --任务适应玩家等级
  send_npc_id = 40196,    --要护送的NPC
  max_gird = 10,    --玩家与护送NPC的最大格子数
  is_open_npc = 0,    --是否在接任务时保持和NPC连接(升级任务用)
  is_fetch = 0,    --是否辅助任务(默认否)
  task_type = 8,    --任务类型
  task_hard = 4,    --任务类型及难度
  trace={ 
	"#td_8747_trace1",
  }; 
  max_send_time = 10,    --玩家离开护送NPC的最长时间(秒)
  offline_fail = 0,    --是否玩家下线任务就失败
  group_id = 0,    --任务子类别
  is_fail_auto_abort = 0,    --是否失败时自动放弃
  is_share_complete = 0,    --同屏玩家是否分享任务成功
  task_map_id = 62,    --任务所属的地图ID
  can_invite = 0,    --是否可以邀请
  timeout_action = 0,    --限时任务到时间后任务状态
  time_lmt_type = 0,    --限时任务类型
  is_redirect_fail = 0,    --是否跨地图任务失败
  is_day_clear = 0,    --是否每天清除完成记录
  give_camp = 0,    --发放NPC阵营
  recv_camp = 0,    --回收NPC阵营
  is_day_fail = 0,    --是否隔天失败
  loop_type = 0,    --环任务类型
  team_member_lmt = 0,    --要求组队人数
  finish_delay_time = 0,    --玩家需要过多久才能交任务（秒）
  refresh_award_able = 0,    --任务是否可以刷新奖励
  task_reaccept_time = 0,    --任务完成后多久可以再接相同任务（秒）
  publish_type = 0,    --发布任务类型
  give_items = {};   --发放道具
  --护送NPC路径
  npc_waypoints = {{x=227,y=51,map=62},{x=227,y=59,map=62},{x=210,y=59,map=62},{x=210,y=70,map=62},{x=188,y=70,map=62},{x=188,y=83,map=62},{x=175,y=83,map=62},{x=175,y=107,map=62},{x=147,y=107,map=62}};
  drop_items = {};   --掉落道具
  --接任务条件
  accept_cond = 
  {
	{func=check_before_task, args={task_id = 8746}},
  };
  --发布任务条件
  publish_cond = 
  {
  };
  --任务显示条件
  show_cond = 
  {
  };
  --完成条件
  complete_cond = 
  {
	{func=check_send_npc, args={id = 40196}},
  };
  --任务完成奖励
  awards = 
  {
	{func=award_expr, args={expr = 48900}},
	{func=award_money, args={money = 1956,is_free = 0}},
	{func=award_telant, args={money = 0}},
};
  --接受任务奖励
  accept_awards = 
  {
};
  --对话
  dialog =   {
  --接任务对话
	[1] = {
	parent_id = 0,
	window_type = 1,
	npc_talk ="#td_8747_dialog_accept_npctalk_1",
	buttons = {
        { player_talk = "#td_8747_dialog_accept_player_talk_1_1" ,dest_type = 1 ,dest_window_id = 9 ,func_code = 0},

	  }
	},
	[9] = {
	parent_id = 1,
	window_type = 3,
	npc_talk ="#td_8747_dialog_accept_npctalk_9",
	buttons = {

	  }
	},
  --任务进行对话
	[2] = {
	parent_id = 0,
	window_type = 1,
	npc_talk ="#td_8747_dialog_doing_npctalk_2",
	buttons = {

  }
},
  --完成任务对话
	[3] = {
	parent_id = 0,
	window_type = 1,
	npc_talk ="#td_8747_dialog_end_npctalk_3",
	buttons = {
        { player_talk = "#td_8747_dialog_end_player_talk_3_1" ,dest_type = 1 ,dest_window_id = 7 ,func_code = 0},

  }
},
	[7] = {
	parent_id = 3,
	window_type = 1,
	npc_talk ="#td_8747_dialog_end_npctalk_7",
	buttons = {
        { player_talk = "#td_8747_dialog_end_player_talk_7_1" ,dest_type = 1 ,dest_window_id = 8 ,func_code = 0},

  }
},
	[8] = {
	parent_id = 7,
	window_type = 2,
	npc_talk ="#td_8747_dialog_end_npctalk_8",
	buttons = {

  }
},
};
  --对话NPC
  dialog_with_npc = {
[40198] = {
	[1] = {
	parent_id = 0,
	window_type = 1,
	npc_talk ="#td_8747_dialog_npc_40198npctalk_1",
	buttons = {
        { player_talk = "#td_8747_dialog_npc_40198player_talk_1_1" ,dest_type = 1 ,dest_window_id = 2 ,func_code = 0},

  }
},
	[2] = {
	parent_id = 1,
	window_type = 4,
	npc_talk ="#td_8747_dialog_npc_40198npctalk_2",
	buttons = {
        { player_talk = "#td_8747_dialog_npc_40198player_talk_2_1" ,dest_type = 2 ,dest_window_id = 3 ,func_code = 10},

  }
},
	[3] = {
	parent_id = 2,
	window_type = 4,
	npc_talk ="#td_8747_dialog_npc_40198npctalk_3",
	buttons = {

  }
},
actions = 
{
	{func=start_send_npc, args={buff_time = 0,buff_id = 0}},
};

};
};
}