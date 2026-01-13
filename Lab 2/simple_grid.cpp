#include<simplecpp>

main_program{
    initCanvas("Grid Drawing", 500, 500);

    Line v1(225, 175, 225, 325);
    v1.imprint();
    Line v2(275, 175, 275, 325);
    v2.imprint();

    Line h1(175, 225, 325, 225);
    h1.imprint();
    Line h2(175, 275, 325, 275);
    h2.imprint();

    wait(5);
    return 0;
}
