[Uno.Compiler.UxGenerated]
public partial class HomePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    static HomePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public HomePage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.PageControl();
        var temp1 = new global::Fuse.Controls.Page();
        var temp2 = new global::Fuse.Controls.Text();
        var temp3 = new global::Fuse.Effects.DropShadow();
        var temp4 = new global::Fuse.Controls.Panel();
        var temp5 = new global::Fuse.Controls.Text();
        var temp6 = new global::Fuse.Controls.Text();
        var temp7 = new global::LensyV2.iPhone_7.Exit_Button.Oval();
        var temp8 = new global::Fuse.Gestures.WhilePressed();
        var temp9 = new global::Fuse.Triggers.Actions.Hide();
        var temp10 = new global::Fuse.Controls.Rectangle();
        var temp11 = new global::Fuse.Controls.Panel();
        var temp12 = new global::Fuse.Controls.Text();
        var temp13 = new global::LensyV2.iPhone_7.Base_Buttons.Line();
        var temp14 = new global::LensyV2.iPhone_7.Base_Buttons.Line_0();
        var temp15 = new global::GetSettingsButton();
        var temp16 = new global::LensyV2.iPhone_7.Enlight4();
        var temp17 = new global::LensyV2.iPhone_7.Background();
        var temp18 = new global::LensyV2.Background();
        temp.Children.Add(temp1);
        temp.Children.Add(temp18);
        temp1.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        temp1.ClipToBounds = true;
        temp1.Children.Add(temp2);
        temp1.Children.Add(temp4);
        temp1.Children.Add(temp11);
        temp1.Children.Add(temp15);
        temp1.Children.Add(temp16);
        temp1.Children.Add(temp17);
        temp2.Value = "Lensy";
        temp2.FontSize = 100f;
        temp2.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp2.TextColor = float4(1f, 1f, 1f, 1f);
        temp2.X = new Uno.UX.Size(22.93333f, Uno.UX.Unit.Percent);
        temp2.Y = new Uno.UX.Size(10.04498f, Uno.UX.Unit.Percent);
        temp2.Font = global::LensyV2.GeneratedClasses.Miciana_Regular;
        temp2.Children.Add(temp3);
        temp3.Size = 4f;
        temp3.Distance = 2f;
        temp3.Spread = 0f;
        temp3.Color = float4(0f, 0f, 0f, 1f);
        temp4.Width = new Uno.UX.Size(84f, Uno.UX.Unit.Percent);
        temp4.Height = new Uno.UX.Size(22.48876f, Uno.UX.Unit.Percent);
        temp4.X = new Uno.UX.Size(8f, Uno.UX.Unit.Percent);
        temp4.Y = new Uno.UX.Size(62f, Uno.UX.Unit.Percent);
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp6);
        temp4.Children.Add(temp7);
        temp4.Children.Add(temp8);
        temp4.Children.Add(temp10);
        temp5.Value = "Hello and welcome to Lensy! Get started by pressing New Settings to take a picture with your phone camera of your set. After the photo is taken, your recemmended settings will be displayed!";
        temp5.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp5.FontSize = 16f;
        temp5.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp5.TextColor = float4(0f, 0f, 0f, 1f);
        temp5.Width = new Uno.UX.Size(95f, Uno.UX.Unit.Percent);
        temp5.Alignment = Fuse.Elements.Alignment.Default;
        temp5.Margin = float4(0f, 0f, 0f, 0f);
        temp5.X = new Uno.UX.Size(3f, Uno.UX.Unit.Percent);
        temp5.Y = new Uno.UX.Size(9f, Uno.UX.Unit.Percent);
        temp5.Font = global::LensyV2.GeneratedClasses.SFUIText_Medium;
        temp6.Value = "X";
        temp6.FontSize = 24f;
        temp6.TextColor = float4(0.8509804f, 0.1411765f, 0.1411765f, 1f);
        temp6.X = new Uno.UX.Size(95.4f, Uno.UX.Unit.Percent);
        temp6.Y = new Uno.UX.Size(-4f, Uno.UX.Unit.Percent);
        temp6.Font = global::LensyV2.GeneratedClasses.SFUIDisplay_Bold;
        temp7.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp7.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Percent);
        temp7.X = new Uno.UX.Size(48f, Uno.UX.Unit.Percent);
        temp7.Y = new Uno.UX.Size(-8f, Uno.UX.Unit.Percent);
        temp8.Actions.Add(temp9);
        temp10.Color = float4(0.8470588f, 0.8470588f, 0.8470588f, 1f);
        temp10.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp10.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp10.X = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp10.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp10.Opacity = 0.7f;
        temp11.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp11.Height = new Uno.UX.Size(70.6f, Uno.UX.Unit.Unspecified);
        temp11.Alignment = Fuse.Elements.Alignment.BottomCenter;
        temp11.X = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp11.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp13);
        temp11.Children.Add(temp14);
        temp12.Value = "Home";
        temp12.FontSize = 20f;
        temp12.TextColor = float4(0.5137255f, 0.5137255f, 0.5137255f, 1f);
        temp12.Alignment = Fuse.Elements.Alignment.CenterLeft;
        temp12.X = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp12.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        temp12.Font = global::LensyV2.GeneratedClasses.SFUIDisplay_Medium;
        temp13.Width = new Uno.UX.Size(0.2666667f, Uno.UX.Unit.Percent);
        temp13.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp13.X = new Uno.UX.Size(49.86666f, Uno.UX.Unit.Percent);
        temp13.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp14.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp14.Height = new Uno.UX.Size(1.408451f, Uno.UX.Unit.Percent);
        temp14.X = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp14.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp15.X = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        temp15.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        temp15.Text = "New Settings";
        temp16.Width = new Uno.UX.Size(84.26667f, Uno.UX.Unit.Percent);
        temp16.Height = new Uno.UX.Size(50.37481f, Uno.UX.Unit.Percent);
        temp16.X = new Uno.UX.Size(15.73333f, Uno.UX.Unit.Percent);
        temp16.Y = new Uno.UX.Size(26.08696f, Uno.UX.Unit.Percent);
        temp16.Opacity = 0.5f;
        temp17.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp17.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp17.X = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp17.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp18.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp18.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp18.X = new Uno.UX.Size(194.9333f, Uno.UX.Unit.Percent);
        temp18.Y = new Uno.UX.Size(-3.148426f, Uno.UX.Unit.Percent);
        this.Children.Add(temp);
    }
}
