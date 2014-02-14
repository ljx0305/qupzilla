/* ============================================================
* QupZilla - WebKit based browser
* Copyright (C) 2010-2014  David Rosca <nowrep@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */
#ifndef BOOKMARKSIMPORTDIALOG_H
#define BOOKMARKSIMPORTDIALOG_H

#include <QDialog>

#include "qz_namespace.h"

namespace Ui
{
class BookmarksImportDialog;
}

class BookmarkItem;
class BookmarksImporter;

class QT_QUPZILLA_EXPORT BookmarksImportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BookmarksImportDialog(QWidget* parent = 0);
    ~BookmarksImportDialog();

private slots:
    void nextPage();
    void setFile();

private:
    enum Browser {
        Firefox = 0,
        Chrome = 1,
        Opera = 2,
        IE = 3,
        Html = 4
    };

    void showExportedBookmarks();
    void addExportedBookmarks();

    Ui::BookmarksImportDialog* ui;

    int m_currentPage;
    BookmarksImporter* m_importer;
    BookmarkItem* m_importedFolder;
};

#endif // BOOKMARKSIMPORTDIALOG_H
