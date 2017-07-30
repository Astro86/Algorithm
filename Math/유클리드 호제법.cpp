// ������佺 ������
// ax+by=c
// (a,b)|c �� ��쿡�� �ذ� ���� (�ʿ��������)
// ax+by=(a,b)�� �ظ� x0,y0��� �ϰ�
// c=k*(a,b) ��� �� ��
// �ʱ��ش� k*x0, k*y0�̴�
// �Ϲ��ش� k*x0+b/(a,b), k*y0-a/(a,b) �̴�
//
// Ȯ��� ��Ŭ���� ȣ����
// ax+by=(a,b)��  {(a,b),{x0,y0}} ����
//
// ���� �յ� ������ ax=c(mod b)
// ax+by=c �� �ظ� ���ϸ� ��
pair<ll,pair<ll,ll> > gcd(ll a,ll b){
    deque<ll> r,s,t;
    r.push_back(a);
    r.push_back(b);
    s.push_back(1);
    s.push_back(0);
    t.push_back(0);
    t.push_back(1);
    while(r.back()){
        ll q=r[0]/r[1];
        r.push_back(r[0]-q*r[1]);
        s.push_back(s[0]-q*s[1]);
        t.push_back(t[0]-q*t[1]);
        r.pop_front();
        s.pop_front();
        t.pop_front();
    }
    return {r.front(),{s.front(),t.front()}};
}