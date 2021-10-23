namespace Interfaces {

    class IBase {
        private:
            virtual void do_something () = 0;
        public:
            IBase();
            ~IBase();
    };

    class CDerivedA : IBase {
        public:
            CDerivedA();
            ~CDerivedA();
    };


}