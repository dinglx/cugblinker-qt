#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>

class Settings : public QObject
{
public:
    Settings();

public:
    typedef struct {
        QString	username;		//�û���
        QString password;		//����
        int	range;                  //Ĭ�Ϸ��ʷ�Χ
        bool	savePwd;		//�Ƿ񱣴�����
        double	curTraffic;             //��ǰ����
        int	maxTraffic;             //����������ֵ
        bool	showTip;		//������ʱ�Ƿ���ʾ
        bool	autoDis;		//������ʱ�Ƿ��Զ�����
    } Account;

    QList<Account> accounts;

public:
    void addAccount(Account& account);
    void delAccount(QString username);
};

#endif // SETTINGS_H
