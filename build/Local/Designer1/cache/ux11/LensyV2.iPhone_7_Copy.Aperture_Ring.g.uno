namespace LensyV2.iPhone_7_Copy
{
    [Uno.Compiler.UxGenerated]
    public partial class Aperture_Ring: Fuse.Controls.Image
    {
        static Aperture_Ring()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Aperture_Ring()
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
            temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../LensyV2.sketch-assets/iPhone_7_Copy.Aperture_Ring@1x.png"));
            temp2.Density = 2f;
            temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../LensyV2.sketch-assets/iPhone_7_Copy.Aperture_Ring@2x.png"));
            this.Source = temp;
        }
    }
}
