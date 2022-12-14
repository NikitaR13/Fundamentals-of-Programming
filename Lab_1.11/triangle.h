
#ifndef LAB_FOP_1_11_C_TRIANGLE_H
#define LAB_FOP_1_11_C_TRIANGLE_H

struct Triangle {
    int a_x, a_y, b_x, b_y, c_x, c_y;
    int square;
};

void CalcSquare(struct Triangle *tmp);
#endif //LAB_FOP_1_11_C_TRIANGLE_H