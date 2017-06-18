[Uno.Compiler.UxGenerated]
public partial class CameraPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static CameraPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public CameraPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.JavaScript(__g_nametable);
        temp.Code = "\n    var Observable = require('FuseJS/Observable');\n    var Camera = require('FuseJS/Camera');\n    var picture = Observable('Images/Camera.png');\n\n    function takePicture() {\n      Camera.takePicture(640, 480).then(function(image){\n        picture.value = image;\n      }).catch(function(error){\n        console.error(error);\n      })\n    }\n\n    module.exports = {\n      picture: picture,\n      takePicture: takePicture\n    }\n  ";
        temp.LineNumber = 4;
        temp.FileName = "Camera.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
    }
}
