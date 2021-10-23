#include <string>
#include <iostream>

namespace Inheritance {

    class CBase
    {
        public:
            CBase();
            ~CBase();
    };

    class CDerivedA : public CBase {
        public: 
            CDerivedA();
            ~CDerivedA();
    };

    class CDerivedB : public CBase {
        public:
            CDerivedB();
            ~CDerivedB();
    };

    class CDiamondProblem : CDerivedB, CDerivedA { 
        public:
            CDiamondProblem();
            ~CDiamondProblem();
    };

}