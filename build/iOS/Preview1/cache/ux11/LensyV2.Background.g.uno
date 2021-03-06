namespace LensyV2
{
    [Uno.Compiler.UxGenerated]
    public partial class Background: Fuse.Controls.Image
    {
        static Background()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Background()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Resources.MultiDensityImageSource();
            var temp1 = new global::Fuse.Resources.FileImageSource();
            var temp2 = new global::Fuse.Resources.FileImageSource();
            temp.Sources.Add(temp1);
            temp.Sources.Add(temp2);
            temp1.Density = 1f;
            temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../LensyV2.sketch-assets/Background@1x.png"));
            temp2.Density = 2f;
            temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../LensyV2.sketch-assets/Background@2x.png"));
            this.Source = temp;
        }
    }
}
