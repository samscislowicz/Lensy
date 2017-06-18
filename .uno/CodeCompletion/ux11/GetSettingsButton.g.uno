[Uno.Compiler.UxGenerated]
public partial class GetSettingsButton: Fuse.Controls.Panel
{
    string _field_Text;
    [global::Uno.UX.UXOriginSetter("SetText")]
    public string Text
    {
        get { return _field_Text; }
        set { SetText(value, null); }
    }
    public void SetText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Text)
        {
            _field_Text = value;
            OnPropertyChanged("Text", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> this_Color_inst;
    global::Uno.UX.Property<string> this_Text_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static GetSettingsButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public GetSettingsButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.This();
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new LensyFinal_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, LensyFinal_accessor_GetSettingsButton_Text.Singleton);
        this_Text_inst = new LensyFinal_GetSettingsButton_Text_Property(this, __selector1);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        this_Color_inst = new LensyFinal_FuseControlsPanel_Color_Property(this, __selector2);
        var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp4 = new global::Fuse.Gestures.WhilePressed();
        var temp5 = new global::Fuse.Animations.Change<float4>(this_Color_inst);
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        this.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
        this.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        this.Alignment = Fuse.Elements.Alignment.BottomRight;
        this.X = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        this.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        temp.FontSize = 20f;
        temp.TextColor = float4(1f, 0.9960784f, 0.9960784f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Margin = float4(30f, 15f, 30f, 15f);
        temp.Font = global::LensyV2.GeneratedClasses.SFUIDisplay_Medium;
        temp.Bindings.Add(temp3);
        temp4.Animators.Add(temp5);
        temp5.Value = float4(0.06666667f, 0.2f, 0.5333334f, 1f);
        temp5.Duration = 0.05;
        temp5.DurationBack = 0.2;
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_Text_inst);
        this.Children.Add(temp);
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Text";
    static global::Uno.UX.Selector __selector2 = "Color";
}
