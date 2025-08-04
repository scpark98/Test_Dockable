- CDialog의 child로 생성한 CDialog를 동적 dockable로 구현해보려 했으나
  WS_CHILD, WS_POPUP은 동적으로 변경할 수 없으며 무조건 다시 Create해야 하고
  CDockablePane, CPaneDialog등을 사용하려면 parent가 CMainFrame일 경우에만 가능한 듯 하다.

- CDialog가 parent이고 child 또한 CDialog이므로 수동으로 구현한다.
  WS_POPUP으로 생성하고 위치 변경등의 이벤트 등에 대해 모두 수동으로 처리해줘야 한다.
  SC_MINIMIZE, SC_RESTORE, WM_WINDOWPOSCHANGED 등등.