namespace LensyV2.iPhone_7
{
    [Uno.Compiler.UxGenerated]
    public partial class Rectangle_2: Fuse.Controls.Image
    {
        static Rectangle_2()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Rectangle_2()
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
            temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../LensyV2.sketch-assets/iPhone_7.Rectangle_2@1x.png"));
            temp2.Density = 2f;
            temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../LensyV2.sketch-assets/iPhone_7.Rectangle_2@2x.png"));
            this.Source = temp;
        }
    }
}
