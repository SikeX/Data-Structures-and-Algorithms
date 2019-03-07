#include <stdio.h>
#include <windows.h>
int main(){
        int shake_time = 5; //休眠的时间，为5毫秒
        int shake_distance = 10; //移动了10像素
        RECT rect; //RECT是一个矩形结构体，相当于保存了一个矩形的四条边的坐标
        HWND window = NULL,oldwindow = NULL; //两个窗口句柄
        int x,y,width,height; //用来保存窗口横纵坐标和宽度、高度的变量
        int i;
        //抖50次吧
        for(i = 0 ; i < 50 ; i++){
                window = GetForegroundWindow(); //拿到活动窗口
                if(window != oldwindow){
                        //获取指定窗口的位置
                        GetWindowRect(window,&rect);
                        x = rect.left;
                        y = rect.top;
                        width = rect.right - x;
                        height = rect.bottom - y;
                        oldwindow = window;
                }
                MoveWindow(window,x-shake_distance,y,width,height,TRUE); //移动窗口，向左移动了10像素，下同
                Sleep(shake_time);  //休眠time毫秒，线程休眠
                MoveWindow(window,x-shake_distance,y-shake_distance,width,height,TRUE);
                Sleep(shake_time);
                MoveWindow(window,x,y-shake_distance,width,height,TRUE);
                Sleep(shake_time);
                MoveWindow(window,x,y,width,height,TRUE);
                Sleep(shake_time);
        }
        return 0;
}
