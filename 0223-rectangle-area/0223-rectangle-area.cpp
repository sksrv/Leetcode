class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int w1=abs(ay1-ay2);
        int l1=abs(ax1-ax2);
        int w2=abs(by1-by2);
        int l2=abs(bx1-bx2);
        int area1=l1*w1;
        int area2=l2*w2;
        int totalArea=area1+area2;

        int cx1=max(ax1,bx1);
        int cy1=max(ay1,by1);
        int cx2=min(ax2,bx2);
        int cy2=min(ay2,by2);
        int cArea=0;
        if(cx1<cx2 && cy1<cy2){
            cArea=abs(cx1-cx2)*abs(cy1-cy2);
        }
        return totalArea-cArea;
    }
};