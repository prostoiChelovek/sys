(add-to-list 'load-path (expand-file-name "packages/evil/" user-emacs-directory))
(add-to-list 'load-path (expand-file-name "packages/evil-org-mode/" user-emacs-directory))

(require 'evil)
(evil-mode 1)

(require 'evil-org)
(add-hook 'org-mode-hook 'evil-org-mode)
(evil-org-set-key-theme '(navigation insert textobjects additional calendar))
(require 'evil-org-agenda)
(evil-org-agenda-set-keys)

(menu-bar-mode -1)
(tool-bar-mode -1)
(scroll-bar-mode -1)

(load-theme 'manoj-dark)

