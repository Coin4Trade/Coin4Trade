// Copyright (c) 2017-2018 The PIVX developers
// Copyright (c) 2020 The C4T developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZC4TCONTROLDIALOG_H
#define ZC4TCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "primitives/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZC4TControlDialog;
}

class ZC4TControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZC4TControlDialog(QWidget *parent);
    ~ZC4TControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZC4TControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZC4TCONTROLDIALOG_H
