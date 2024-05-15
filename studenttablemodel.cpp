#include "studenttablemodel.h"

const uint COLUNM_COUNT = 5;

StudentTableModel::StudentTableModel(QObject *parent)
    : QAbstractTableModel(parent)
{
    m_head={"id","name","age","math","gpa"};
}

QVariant StudentTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(orientation == Qt::Horizontal){
        if(role == Qt::DisplayRole){
            return m_head[section];
        }
    }
    return QVariant();
}

int StudentTableModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    return m_data.size();
}

int StudentTableModel::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    return COLUNM_COUNT;
}

QVariant StudentTableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if(role == Qt::DisplayRole){
        int row =index.row();
        int col = index.column();
        switch(col){
        case 0:
            return m_data[row].getId();
            break;
        case 1:
            return m_data[row].getName();
            break;
        case 2:
            return m_data[row].getAge();
            break;
        case 3:
            return m_data[row].getMath();
            break;
        case 4:
            return m_data[row].getGpa();
            break;
        }
    }
    return QVariant();
}

bool StudentTableModel::setData(const Student &stu)
{
    m_data.append(stu);
    return true;
}
