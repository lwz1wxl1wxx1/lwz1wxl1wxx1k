#include <stdio.h>

int main() {
    // 打开文件
    FILE *file = fopen("c:\\vc\\ckk.txt", "r");
    if (file == NULL) {
        printf("无法打开文件。\n");
        return 1;
    }

    // 读取自然数并显示坐标
    int x = 0;
    int y;
    while (fscanf(file, "%d", &y) != EOF) {
        printf("坐标 (X=%d, Y=%d)\n", x, y);
        x++;
    }

    // 关闭文件
    fclose(file);

    return 0;
}
