[Uno.Compiler.UxGenerated]
public partial class HomePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
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
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new global::Fuse.Controls.PageControl();
        var temp2 = new global::Fuse.Controls.Page();
        var temp3 = new global::Fuse.Controls.Text();
        var temp4 = new global::Fuse.Effects.DropShadow();
        var temp5 = new global::Fuse.Controls.Panel();
        var temp6 = new global::Fuse.Controls.Text();
        var temp7 = new global::Fuse.Controls.Text();
        var temp8 = new global::LensyV2.iPhone_7.Exit_Button.Oval();
        var temp9 = new global::Fuse.Gestures.WhilePressed();
        var temp10 = new global::Fuse.Triggers.Actions.Hide();
        var temp11 = new global::Fuse.Controls.Rectangle();
        var temp12 = new global::Fuse.Controls.Panel();
        var temp13 = new global::Fuse.Controls.Text();
        var temp14 = new global::LensyV2.iPhone_7.Base_Buttons.Line();
        var temp15 = new global::LensyV2.iPhone_7.Base_Buttons.Line_0();
        var temp16 = new global::GetSettingsButton();
        var temp17 = new global::LensyV2.iPhone_7.Enlight4();
        var temp18 = new global::LensyV2.iPhone_7.Background();
        var temp19 = new global::LensyV2.Background();
        temp.Code = "\n\t\tfunction goToCamera(){\n\t\t\trouter.push(\"Camera\");\n\t\t}\n\t\tmodule.exports ={\n\t\t    goToCamera: goToCamera\n\t\t}\n\t";
        temp.LineNumber = 4;
        temp.FileName = "Home.ux";
        temp1.Children.Add(temp2);
        temp1.Children.Add(temp19);
        temp2.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        temp2.ClipToBounds = true;
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp5);
        temp2.Children.Add(temp12);
        temp2.Children.Add(temp16);
        temp2.Children.Add(temp17);
        temp2.Children.Add(temp18);
        temp3.Value = "Lensy";
        temp3.FontSize = 100f;
        temp3.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp3.TextColor = float4(1f, 1f, 1f, 1f);
        temp3.X = new Uno.UX.Size(22.93333f, Uno.UX.Unit.Percent);
        temp3.Y = new Uno.UX.Size(10.04498f, Uno.UX.Unit.Percent);
        temp3.Font = global::LensyV2.GeneratedClasses.Miciana_Regular;
        temp3.Children.Add(temp4);
        temp4.Size = 4f;
        temp4.Distance = 2f;
        temp4.Spread = 0f;
        temp4.Color = float4(0f, 0f, 0f, 1f);
        temp5.Width = new Uno.UX.Size(84f, Uno.UX.Unit.Percent);
        temp5.Height = new Uno.UX.Size(22.48876f, Uno.UX.Unit.Percent);
        temp5.X = new Uno.UX.Size(8f, Uno.UX.Unit.Percent);
        temp5.Y = new Uno.UX.Size(62f, Uno.UX.Unit.Percent);
        temp5.Children.Add(temp6);
        temp5.Children.Add(temp7);
        temp5.Children.Add(temp8);
        temp5.Children.Add(temp9);
        temp5.Children.Add(temp11);
        temp6.Value = "Hello and welcome to Lensy! Get started by pressing New Settings to take a picture with your phone camera of your set. After the photo is taken, your recemmended settings will be displayed!";
        temp6.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp6.FontSize = 16f;
        temp6.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp6.TextColor = float4(0f, 0f, 0f, 1f);
        temp6.Width = new Uno.UX.Size(95f, Uno.UX.Unit.Percent);
        temp6.Alignment = Fuse.Elements.Alignment.Default;
        temp6.Margin = float4(0f, 0f, 0f, 0f);
        temp6.X = new Uno.UX.Size(3f, Uno.UX.Unit.Percent);
        temp6.Y = new Uno.UX.Size(9f, Uno.UX.Unit.Percent);
        temp6.Font = global::LensyV2.GeneratedClasses.SFUIText_Medium;
        temp7.Value = "X";
        temp7.FontSize = 24f;
        temp7.TextColor = float4(0.8509804f, 0.1411765f, 0.1411765f, 1f);
        temp7.X = new Uno.UX.Size(95.4f, Uno.UX.Unit.Percent);
        temp7.Y = new Uno.UX.Size(-4f, Uno.UX.Unit.Percent);
        temp7.Font = global::LensyV2.GeneratedClasses.SFUIDisplay_Bold;
        temp8.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp8.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Percent);
        temp8.X = new Uno.UX.Size(48f, Uno.UX.Unit.Percent);
        temp8.Y = new Uno.UX.Size(-8f, Uno.UX.Unit.Percent);
        temp9.Actions.Add(temp10);
        temp11.Color = float4(0.8470588f, 0.8470588f, 0.8470588f, 1f);
        temp11.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp11.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp11.X = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp11.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp11.Opacity = 0.7f;
        temp12.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp12.Height = new Uno.UX.Size(70.6f, Uno.UX.Unit.Unspecified);
        temp12.Alignment = Fuse.Elements.Alignment.BottomCenter;
        temp12.X = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp12.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp14);
        temp12.Children.Add(temp15);
        temp13.Value = "Home";
        temp13.FontSize = 20f;
        temp13.TextColor = float4(0.5137255f, 0.5137255f, 0.5137255f, 1f);
        temp13.Alignment = Fuse.Elements.Alignment.CenterLeft;
        temp13.X = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp13.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        temp13.Font = global::LensyV2.GeneratedClasses.SFUIDisplay_Medium;
        temp14.Width = new Uno.UX.Size(0.2666667f, Uno.UX.Unit.Percent);
        temp14.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp14.X = new Uno.UX.Size(49.86666f, Uno.UX.Unit.Percent);
        temp14.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp15.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp15.Height = new Uno.UX.Size(1.408451f, Uno.UX.Unit.Percent);
        temp15.X = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp15.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp16.X = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        temp16.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        temp16.Text = "New Settings";
        temp17.Width = new Uno.UX.Size(84.26667f, Uno.UX.Unit.Percent);
        temp17.Height = new Uno.UX.Size(50.37481f, Uno.UX.Unit.Percent);
        temp17.X = new Uno.UX.Size(15.73333f, Uno.UX.Unit.Percent);
        temp17.Y = new Uno.UX.Size(26.08696f, Uno.UX.Unit.Percent);
        temp17.Opacity = 0.5f;
        temp18.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp18.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp18.X = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp18.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        temp19.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp19.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp19.X = new Uno.UX.Size(194.9333f, Uno.UX.Unit.Percent);
        temp19.Y = new Uno.UX.Size(-3.148426f, Uno.UX.Unit.Percent);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}
