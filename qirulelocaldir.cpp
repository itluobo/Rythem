#include "qirulelocaldir.h"

QiRuleLocalDir::QiRuleLocalDir(QString name, int type, QString pattern, QString replacement, bool enable, bool remote) :
	QiRule2(name, type, pattern, replacement, enable, remote)
{

}

bool QiRuleLocalDir::match(ConnectionData_ptr conn) const{
	return (conn->fullUrl.indexOf(pattern()) != -1);
}

void QiRuleLocalDir::replace(ConnectionData_ptr conn) const{

}