#ifndef STUDENTTABLEMODEL_H
#define STUDENTTABLEMODEL_H

#include <QAbstractTableModel>
#include "student.h"

class StudentTableModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit StudentTableModel(QObject *parent = nullptr);

    // Header:
    QVariant headerData(int section,
                        Qt::Orientation orientation,
                        int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    bool setData(const Student& stu);

private:
    QList<QString> m_head;
    QList<Student> m_data;
};

#endif // STUDENTTABLEMODEL_H
