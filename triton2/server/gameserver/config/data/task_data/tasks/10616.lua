task = {
  id = 10616,    --����ID
  kind = 7,    --��������
  color = 0,    --������ɫ
  name = "#td_10616_name",  
  desc = "#td_10616_desc",  
  dest = "#td_10616_dest",  
  section = "#td_10616_section",  
  give_npc = 75722,    --����NPC
  give_map_id = 157,    --����NPC���ڵĵ�ͼID
  recv_npc = 75723,    --����NPC
  recv_map_id = 157,    --����NPC���ڵĵ�ͼID
  hard = 0,    --�����Ѷ�
  timer = 0,    --����ʱ��(��)
  cancelable = 1,    --�����ܷ񱻷���
  repeatable = 0,    --����ɹ���ɷ�����
  retryable = 1,    --����ʧ�ܺ�ɷ�����
  fail_on_killed = 0,    --��ұ�ɱ�����Ƿ���Ϊ����ʧ��
  after_task = 10625,    --��������(�Զ�����)
  direct_complete = 0,    --�����Ƿ�ֱ�����(������NPC��)
  get_metier_task = 0,    --�Ƿ���ְ����
  task_level = 90,    --������Ӧ��ҵȼ�
  send_npc_id = 0,    --Ҫ���͵�NPC
  max_gird = 0,    --����뻤��NPC����������
  is_open_npc = 0,    --�Ƿ��ڽ�����ʱ���ֺ�NPC����(����������)
  is_fetch = 0,    --�Ƿ�������(Ĭ�Ϸ�)
  task_type = 8,    --��������
  task_hard = 7,    --�������ͼ��Ѷ�
  trace={ 
	"#td_10616_trace1",
	"#td_10616_trace2",
  }; 
  max_send_time = 0,    --����뿪����NPC���ʱ��(��)
  offline_fail = 0,    --�Ƿ�������������ʧ��
  group_id = 0,    --���������
  is_fail_auto_abort = 0,    --�Ƿ�ʧ��ʱ�Զ�����
  is_share_complete = 0,    --ͬ������Ƿ��������ɹ�
  task_map_id = 157,    --���������ĵ�ͼID
  can_invite = 0,    --�Ƿ�������루Ĭ��0Ϊ�������룩
  timeout_action = 0,    --��ʱ����ʱ�������״̬
  time_lmt_type = 0,    --��ʱ��������
  is_redirect_fail = 0,    --�Ƿ���ͼ����ʧ��
  is_day_clear = 0,    --�Ƿ�ÿ�������ɼ�¼
  give_camp = 0,    --����NPC��Ӫ
  recv_camp = 0,    --����NPC��Ӫ
  is_day_fail = 0,    --�Ƿ����ʧ��
  loop_type = 0,    --����������
  team_member_lmt = 0,    --Ҫ���������
  finish_delay_time = 0,    --�����Ҫ����ò��ܽ������룩
  refresh_award_able = 0,    --�����Ƿ����ˢ�½���
  task_reaccept_time = 0,    --������ɺ��ÿ����ٽ���ͬ�����룩
  publish_type = 0,    --������������
  give_items = {};   --���ŵ���
  --����NPC·��
  npc_waypoints = {};
  drop_items = {{npc_id=55721 ,item_id=77357 ,n=1 ,p=10000, mapid=57}};   --�������
  --����������
  accept_cond = 
  {
	{func=check_before_task, args={task_id = 10615}},
  };
  --������������
  publish_cond = 
  {
  };
  --������ʾ����
  show_cond = 
  {
  };
  --�������
  complete_cond = 
  {
	{func=check_items_of_bag, args={id = 77357,n = 1}},
  };
  --������ɽ���
  awards = 
  {
	{func=award_telant, args={money = 0}},
	{func=award_expr, args={expr = 0}},
	{func=award_money, args={money = 0,is_free = 0}},
};
  --����������
  accept_awards = 
  {
};
  --�Ի�
  dialog =   {
  --������Ի�
	[1] = {
	parent_id = 0,
	window_type = 1,
	npc_talk ="#td_10616_dialog_accept_npctalk_1",
	buttons = {
        { player_talk = "#td_10616_dialog_accept_player_talk_1_1" ,dest_type = 1 ,dest_window_id = 4 ,func_code = 0},

	  }
	},
	[4] = {
	parent_id = 1,
	window_type = 1,
	npc_talk ="#td_10616_dialog_accept_npctalk_4",
	buttons = {
        { player_talk = "#td_10616_dialog_accept_player_talk_4_1" ,dest_type = 1 ,dest_window_id = 5 ,func_code = 0},

	  }
	},
	[5] = {
	parent_id = 4,
	window_type = 1,
	npc_talk ="#td_10616_dialog_accept_npctalk_5",
	buttons = {
        { player_talk = "#td_10616_dialog_accept_player_talk_5_1" ,dest_type = 1 ,dest_window_id = 6 ,func_code = 0},

	  }
	},
	[6] = {
	parent_id = 5,
	window_type = 1,
	npc_talk ="#td_10616_dialog_accept_npctalk_6",
	buttons = {
        { player_talk = "#td_10616_dialog_accept_player_talk_6_1" ,dest_type = 1 ,dest_window_id = 16 ,func_code = 0},

	  }
	},
	[16] = {
	parent_id = 6,
	window_type = 3,
	npc_talk ="#td_10616_dialog_accept_npctalk_16",
	buttons = {

	  }
	},
  --������жԻ�
	[2] = {
	parent_id = 0,
	window_type = 1,
	npc_talk ="#td_10616_dialog_doing_npctalk_2",
	buttons = {

  }
},
  --�������Ի�
	[3] = {
	parent_id = 0,
	window_type = 1,
	npc_talk ="#td_10616_dialog_end_npctalk_3",
	buttons = {
        { player_talk = "#td_10616_dialog_end_player_talk_3_1" ,dest_type = 1 ,dest_window_id = 13 ,func_code = 0},

  }
},
	[13] = {
	parent_id = 3,
	window_type = 1,
	npc_talk ="#td_10616_dialog_end_npctalk_13",
	buttons = {
        { player_talk = "#td_10616_dialog_end_player_talk_13_1" ,dest_type = 1 ,dest_window_id = 14 ,func_code = 0},

  }
},
	[14] = {
	parent_id = 13,
	window_type = 2,
	npc_talk ="#td_10616_dialog_end_npctalk_14",
	buttons = {

  }
},
};
  --�Ի�NPC
  dialog_with_npc = {
};
}