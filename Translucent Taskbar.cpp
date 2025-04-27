const Theme g_themeTranslucentTaskbar = {{
    ThemeTargetStyles{L"Taskbar.TaskbarFrame > Grid#RootGrid > Taskbar.TaskbarBackground > Grid > Rectangle#BackgroundFill", {
        L"Fill:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0\" TintLuminosityOpacity=\"0.15\" Opacity=\"1\" FallbackColor=\"#70262626\"/>"}},
    ThemeTargetStyles{L"Taskbar.TaskbarBackground#HoverFlyoutBackgroundControl > Grid > Rectangle#BackgroundFill", {
        L"Fill=#C444"}},
    ThemeTargetStyles{L"Rectangle#BackgroundStroke", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"MenuFlyoutPresenter", {
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0\" TintLuminosityOpacity=\"0.12\" Opacity=\"1\" FallbackColor=\"#A0262626\"/>",
        L"BorderThickness=0,0,0,0",
        L"CornerRadius=14",
        L"Padding=3,4,3,4"}},
    ThemeTargetStyles{L"Border#OverflowFlyoutBackgroundBorder", {
        L"Background:=<AcrylicBrush TintColor=\"Black\" TintOpacity=\"0\" TintLuminosityOpacity=\"0.12\" Opacity=\"1\" FallbackColor=\"#A0262626\"/>",
        L"BorderThickness=0,0,0,0",
        L"CornerRadius=15",
        L"Margin=-2,-2,-2,-2"}},
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.AutomationId=StartButton] > Taskbar.TaskListButtonPanel > Microsoft.UI.Xaml.Controls.AnimatedVisualPlayer#Icon", {
        L"Visibility=Collapsed"}},
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.AutomationId=StartButton] > Taskbar.TaskListButtonPanel > Border#BackgroundElement", {
        L"Background:=<ImageBrush Stretch=\"None\" ImageSource=\"B:\\pictures\\Untitled-1.png\" />"}},
    ThemeTargetStyles{L"Taskbar.ExperienceToggleButton#LaunchListButton[AutomationProperties.AutomationId=StartButton]", {
        L"MaxWidth=48",
        L"Margin=0,0,4,0",
        L"CornerRadius=0"}},
}};
