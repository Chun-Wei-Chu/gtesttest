# XS

> 最終目標是改善我們專案的部屬架構，切割 libs 和 hosts，使 auto build 流程更順暢、快速。

> **目前暫時用來改善 XSHub 用**

# 目錄結構
```
/
  build
    exe[d][-64] 放置各專案、組態、平台建置出的 executables
    lib[d][-64] 放置各專案、組態、平台建置出的 librarys
    web 與 web 相關的產出檔案
  inc 共用的 include 檔案
  libs 共用的 library 專案
  XSHubSvc 參考 xshubsvc.md
```
