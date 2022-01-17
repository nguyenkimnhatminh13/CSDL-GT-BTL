#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <vector>
#include <tuple>
#include "LinkedIn.h"
#include "Weight.h"
#include "Node.h"

tuple <LinkedIn, vector<Node>> fetchData(LinkedIn g, vector<Node> a) {
    Node man;
    Weight w;
    g.addNode();
    man.id = 0;
    man.name = "Tran Ngoc Thanh";
    man.dob = "22/11/2000";
    man.email = "thanhtranngoc2211@gmail.com";
    man.number = "0822455477";
    man.field = "AI";
    man.work = "NAVER";
    a.push_back(man);

    g.addNode();
    man.id = 1;
    man.name = "Tran Mai Linh";
    man.dob = "10/11/2003";
    man.email = "linh.ngu@gmail.com";
    man.number = "0915273456";
    man.field = "law";
    man.work = "NAVER";
    a.push_back(man);

    g.addNode();
    man.id = 2;
    man.name = "Dao Thi Huyen";
    man.dob = "17/09/2000";
    man.email = "huyen.dt@gmail.com";
    man.number = "0335428632";
    man.field = "Marketing";
    man.work = "Samsing";
    a.push_back(man);

    g.addNode();
    man.id = 3;
    man.name = "Nguyen Ngoc Mai Van";
    man.dob = "30/10/1996";
    man.email = "van@gmail.com";
    man.number = "0915874352";
    man.field = "Accountance";
    man.work = "Samsing";
    a.push_back(man);

    g.addNode();
    man.id = 4;
    man.name = "La Viet Hai";
    man.dob = "1/10/2000";
    man.email = "laviethai@gmail.com";
    man.number = "0912514567";
    man.field = "developer";
    man.work = "NAVER";
    a.push_back(man);

    g.addNode();
    man.id = 5;
    man.name = "Nguyen Ngoc An";
    man.dob = "1/10/2000";
    man.email = "annn@gmail.com";
    man.number = "0912514567";
    man.field = "Education";
    man.work = "Pineapple";
    a.push_back(man);
    
    g.addNode();
    man.id = 6;
    man.name = "Tran Manh Thang";
    man.dob = "1/10/2000";
    man.email = "thangtm@gmail.com";
    man.number = "0912514567";
    man.field = "developer";
    man.work = "Pineapple";
    a.push_back(man);

    g.addNode();
    man.id = 7;
    man.name = "Tran Thi Kim Que";
    man.dob = "1/10/2000";
    man.email = "quettk@gmail.com";
    man.number = "0912514567";
    man.field = "host";
    man.work = "Pineapple";
    a.push_back(man);

    g.addNode();
    man.id = 8;
    man.name = "Tran Van Cac";
    man.dob = "1/10/2000";
    man.email = "cactv@gmail.com";
    man.number = "0912514567";
    man.field = "host";
    man.work = "Samsing";
    a.push_back(man);

    g.addNode();
    man.id = 9;
    man.name = "Nguyen Thi Kim Dung";
    man.dob = "1/10/2000";
    man.email = "dungntk@gmail.com";
    man.number = "0912514567";
    man.field = "host";
    man.work = "Samsing";
    a.push_back(man);

    g.addNode();
    man.id = 10;
    man.name = "Hoang Duc Viet";
    man.dob = "1/10/2000";
    man.email = "viethd@gmail.com";
    man.number = "0912514567";
    man.field = "AI";
    man.work = "Samsing";
    a.push_back(man);

    g.addNode();
    man.id = 11;
    man.name = "Nguyen Tuan Hung";
    man.dob = "1/10/2000";
    man.email = "hungnt@gmail.com";
    man.number = "0912514567";
    man.field = "host";
    man.work = "Samsing";
    a.push_back(man);

    g.addNode();
    man.id = 12;
    man.name = "Do Duc Viet";
    man.dob = "1/10/2000";
    man.email = "vietdd@gmail.com";
    man.number = "0912514567";
    man.field = "developer";
    man.work = "Samsing";
    a.push_back(man);

    g.addNode();
    man.id = 13;
    man.name = "Nguyen Lam Tung";
    man.dob = "1/10/2000";
    man.email = "tungnl@gmail.com";
    man.number = "0912514567";
    man.field = "host";
    man.work = "NAVER";
    a.push_back(man);

    g.addNode();
    man.id = 14;
    man.name = "Do Phuong Trinh";
    man.dob = "1/10/2000";
    man.email = "trinhdp@gmail.com";
    man.number = "0912514567";
    man.field = "Accountance";
    man.work = "NAVER";
    a.push_back(man);

    g.addNode();
    man.id = 15;
    man.name = "Nguyen Hai Long";
    man.dob = "1/10/2000";
    man.email = "longnh@gmail.com";
    man.number = "0912514567";
    man.field = "developer";
    man.work = "Samsing";
    a.push_back(man);

    g.addNode();
    man.id = 16;
    man.name = "Tran Bien";
    man.dob = "1/10/2000";
    man.email = "bient@gmail.com";
    man.number = "0912514567";
    man.field = "developer";
    man.work = "Samsing";
    a.push_back(man);

    g.addNode();
    man.id = 17;
    man.name = "Vu Thi Trang";
    man.dob = "1/10/2000";
    man.email = "trangvt@gmail.com";
    man.number = "0912514567";
    man.field = "host";
    man.work = "Samsing";
    a.push_back(man);

    g.addNode();
    man.id = 18;
    man.name = "Pham Ngoc Thien";
    man.dob = "1/10/2000";
    man.email = "thienpn@gmail.com";
    man.number = "0912514567";
    man.field = "developer";
    man.work = "Pineapple";
    a.push_back(man);

    g.addNode();
    man.id = 19;
    man.name = "Pham Van Dung";
    man.dob = "1/10/2000";
    man.email = "dungvp@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "Pineapple";
    a.push_back(man);
    
    g.addNode();
    man.id = 19;
    man.name = "Pham Van Dung";
    man.dob = "1/10/2000";
    man.email = "dungvp@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "Pineapple";
    a.push_back(man);
    
    //Minh's data
    g.addNode();
    man.id = 40;
    man.name = "Nguyen Kim Nhat Minh";
    man.dob = "1/10/2000";
    man.email = "nknm@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "Pineapple";
    a.push_back(man);
    
    g.addNode();
    man.id = 41;
    man.name = "Pham Anh Dung";
    man.dob = "1/10/2000";
    man.email = "padp@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "NAVER";
    a.push_back(man);
    
    g.addNode();
    man.id = 42;
    man.name = "Vu Duc Bac";
    man.dob = "1/10/2000";
    man.email = "dungvp@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "Samsing";
    a.push_back(man);
    
    g.addNode();
    man.id = 43;
    man.name = "Mai Xuan Ninh";
    man.dob = "1/10/2000";
    man.email = "mxninh@gmail.com";
    man.number = "0912514567";
    man.field = "AI";
    man.work = "Pineapple";
    a.push_back(man);
    
    g.addNode();
    man.id = 44;
    man.name = "Hoa Thanh Dat";
    man.dob = "1/10/2000";
    man.email = "htdat@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "Pineapple";
    a.push_back(man);
    
    g.addNode();
    man.id = 45;
    man.name = "Nguyen Tuan Minh";
    man.dob = "1/10/2000";
    man.email = "ntminh@gmail.com";
    man.number = "0912514567";
    man.field = "Maketting";
    man.work = "NAVER";
    a.push_back(man);
    
    g.addNode();
    man.id = 46;
    man.name = "Mai Quoc Khanh";
    man.dob = "1/10/2000";
    man.email = "mqkhanh@gmail.com";
    man.number = "0912514567";
    man.field = "Cleaner";
    man.work = "Samsing";
    a.push_back(man);
    
    g.addNode();
    man.id = 47;
    man.name = "Cao Thanh Lam";
    man.dob = "1/10/2000";
    man.email = "ctlamp@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "Pineapple";
    a.push_back(man);
    
    g.addNode();
    man.id = 48;
    man.name = "Tu Lam Phuong";
    man.dob = "1/10/2000";
    man.email = "tlphuong@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "Samsing";
    a.push_back(man);
    
    g.addNode();
    man.id = 49;
    man.name = "Hoang Dang Y";
    man.dob = "1/10/2000";
    man.email = "hdy@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "NAVER";
    a.push_back(man);
    
    g.addNode();
    man.id = 50;
    man.name = "Hoang Thi Chien";
    man.dob = "1/10/2000";
    man.email = "htchien@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "Samsing";
    a.push_back(man);
    
    g.addNode();
    man.id = 51;
    man.name = "Nguyen Thai An";
    man.dob = "1/10/2000";
    man.email = "ntan@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "Pineapple";
    a.push_back(man);
    
    g.addNode();
    man.id = 52;
    man.name = "Dinh Tien Do";
    man.dob = "1/10/2000";
    man.email = "dtdo@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "NAVER";
    a.push_back(man);
    
    g.addNode();
    man.id = 53;
    man.name = "Pham Bich Phuong";
    man.dob = "1/10/2000";
    man.email = "pbphuong@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "NAVER";
    a.push_back(man);
    
    g.addNode();
    man.id = 54;
    man.name = "Phan Tien Duc";
    man.dob = "1/10/2000";
    man.email = "ptduc@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "Samsing";
    a.push_back(man);
    
    g.addNode();
    man.id = 55;
    man.name = "Dinh Thi Minh";
    man.dob = "1/10/2000";
    man.email = "dtminh@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "Samsing";
    a.push_back(man);
    
    g.addNode();
    man.id = 56;
    man.name = "Vu Huong Giang";
    man.dob = "1/10/2000";
    man.email = "vhgiang@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "NAVER";
    a.push_back(man);
    
    g.addNode();
    man.id = 57;
    man.name = "Vu Dai Minh";
    man.dob = "1/10/2000";
    man.email = "vdminh@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "Samsing";
    a.push_back(man);
    
    g.addNode();
    man.id = 58;
    man.name = "Mai Thanh Cong";
    man.dob = "1/10/2000";
    man.email = "mtcong@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "NAVER";
    a.push_back(man);
    
    g.addNode();
    man.id = 59;
    man.name = "Pham Van Tai";
    man.dob = "1/10/2000";
    man.email = "pvtai@gmail.com";
    man.number = "0912514567";
    man.field = "Engineer";
    man.work = "Pineapple";
    a.push_back(man);
    
    w.papers = 10;
    w.years = 18;
    g.addEdge("Tran Ngoc Thanh","Tran Mai Linh",a,w);
    w.papers = 15;
    w.years = 3;
    g.addEdge("Tran Ngoc Thanh","Dao Thi Huyen",a,w);
    w.papers = 0;
    w.years = 3;
    g.addEdge("Tran Mai Linh","Nguyen Ngoc Mai Van",a,w);
    w.papers = 3;
    w.years = 3;
    g.addEdge("La Viet Hai","Dao Thi Huyen",a,w);
    w.papers = 0;
    w.years = 3;
    g.addEdge("Tran Ngoc Thanh","Nguyen Ngoc Mai Van",a,w);
    w.papers = 0;
    w.years = 2;
    g.addEdge("La Viet Hai","Nguyen Ngoc Mai Van",a,w);
    
    //Minh
    w.papers = 10;
    w.years = 18;
    g.addEdge("Nguyen Kim Nhat Minh","Pham Anh Dung",a,w);
    w.papers = 15;
    w.years = 3;
    g.addEdge("Mai Xuan Ninh","Nguyen Tuan Minh",a,w);
    w.papers = 0;
    w.years = 3;
    g.addEdge("Hoa Thanh Dat","Nguyen Kim Nhat Minh",a,w);
    w.papers = 3;
    w.years = 3;
    g.addEdge("Cao Thanh Lam","Mai Quoc Khanh",a,w);
    w.papers = 1;
    w.years = 3;
    g.addEdge("Hoang Dang Y","Hoang Thi Chien",a,w);
    w.papers = 3;
    w.years = 2;
    g.addEdge("Pham Bich Phuong","Phan Tien Duc",a,w);
    w.papers = 0;
    w.years = 5;
    g.addEdge("Dinh Tien Do","Phan Tien Duc",a,w);
    w.papers = 3;
    w.years = 5;
    g.addEdge("Vu Huong Giang","Nguyen Kim Nhat Minh",a,w);
    w.papers = 1;
    w.years = 3;
    g.addEdge("Hoang Dang Y","Pham Van Tai",a,w);
    w.papers = 4;
    w.years = 2;
    g.addEdge("Pham Bich Phuong","Mai Thanh Cong",a,w);


    return make_tuple(g, a);
}

#endif
