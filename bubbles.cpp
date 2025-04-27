const Theme g_themeBubbles = {{
    ThemeTargetStyles{L"Rectangle#BackgroundFill", {
        L"Fill=#EE080810"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@RunningIndicatorStates > Border#BackgroundElement", {
        L"Background=#303030",
        L"CornerRadius=20",
        L"Background@NoRunningIndicator=#40303030"}},
    ThemeTargetStyles{L"Taskbar.TaskListButtonPanel@CommonStates > Border#BackgroundElement", {
        L"Background=#303030",
        L"CornerRadius=20",
        L"Background@ActivePointerOver=#202020",
        L"Background@InactivePointerOver=#202020",
        L"Background@ActivePressed=#101010",
        L"Background@InactivePressed=#101010"}},
    ThemeTargetStyles{L"Grid#SystemTrayFrameGrid", {
        L"Background=#303030",
        L"CornerRadius=20",
        L"Margin=0,5,4,5",
        L"Padding=10,0,0,0"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel@CommonStates > Rectangle#RunningIndicator", {
        L"Width=40",
        L"Height=40",
        L"Stroke@InactivePointerOver=#75A8E6",
        L"Stroke@InactivePressed=#7CB1F2",
        L"Stroke@ActiveNormal=#5F87B9",
        L"Stroke@ActivePointerOver=#75A8E6",
        L"Stroke@ActivePressed=#7CB1F2",
        L"Fill=Transparent",
        L"RadiusX=20",
        L"RadiusY=20",
        L"StrokeThickness=3",
        L"Margin=0",
        L"Stroke@MultiWindowPointerOver=#CCCCDD",
        L"Stroke@MultiWindowPressed=White",
        L"Stroke@MultiWindowActive=#BBBBCC",
        L"Fill@MultiWindowNormal=#88AAAABB",
        L"Fill@MultiWindowPointerOver=#88AAAABB",
        L"Fill@MultiWindowActive=#88AAAABB",
        L"Fill@MultiWindowPressed=#88AAAABB"}},
    ThemeTargetStyles{L"TextBlock#TimeInnerTextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"TextBlock#DateInnerTextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"SystemTray.TextIconContent > Grid > SystemTray.AdaptiveTextBlock#Base > TextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"Taskbar.TaskListLabeledButtonPanel > TextBlock#LabelControl", {
        L"Margin=4,0,0,0",
        L"Foreground=White"}},
    ThemeTargetStyles{L"Taskbar.SearchBoxButton", {
        L"Height=48",
        L"Margin=0,-2,0,0"}},
    ThemeTargetStyles{L"TextBlock#SearchBoxTextBlock", {
        L"Foreground=White"}},
    ThemeTargetStyles{L"Border#MultiWindowElement", {
        L"Height=0"}},
    ThemeTargetStyles{L"Grid#OverflowRootGrid > Border", {
        L"Background=#EE080810",
        L"BorderBrush=#303030",
        L"BorderThickness=2.5"}},
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.AutomationId=StartButton] > Taskbar.TaskListButtonPanel > Microsoft.UI.Xaml.Controls.AnimatedVisualPlayer#Icon", {
        L"Visibility=Collapsed"}}, 
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.AutomationId=StartButton] > Taskbar.TaskListButtonPanel > Border#BackgroundElement", {
        L"Background:=<ImageBrush Stretch=\"None\" ImageSource=\"B:\\pictures\\Untitled-1.png\" />"}}, // <- Added your custom icon
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.AutomationId=StartButton]", {
        L"MaxWidth=48",
        L"Margin=0,0,4,0",
        L"CornerRadius=0"}}, 
    ThemeTargetStyles{L"SystemTray.Stack#ShowDesktopStack", {
        L"Padding=5,0,5,0",
        L"Margin=2,0,10,0"}},
    ThemeTargetStyles{L"Windows.UI.Xaml.Shapes.Rectangle#ShowDesktopPipe", {
        L"MinWidth=4",
        L"RadiusX=2",
        L"RadiusY=2"}},
    ThemeTargetStyles{L"SystemTray.Stack#NotifyIconStack > Windows.UI.Xaml.Controls.Grid > SystemTray.StackListView > Windows.UI.Xaml.Controls.ItemsPresenter > Windows.UI.Xaml.Controls.StackPanel > Windows.UI.Xaml.Controls.ContentPresenter > SystemTray.ChevronIconView > Windows.UI.Xaml.Controls.Grid > Windows.UI.Xaml.Controls.Border#BackgroundBorder", {
        L"CornerRadius=16,5,5,16",
        L"Margin=-3,4,0,4"}},
}};
