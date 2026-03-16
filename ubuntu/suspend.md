##### systemctl status

```
hongxin@deepDomain:~$ systemctl status sleep.target
○ sleep.target - Sleep
     Loaded: loaded (/usr/lib/systemd/system/sleep.target; static)
     Active: inactive (dead) since Thu 2026-02-26 12:55:09 CST; 1 day 4h ago
       Docs: man:systemd.special(7)

Feb 26 12:23:36 deepDomain systemd[1]: Reached target sleep.target - Sleep.
Feb 26 12:55:09 deepDomain systemd[1]: Stopped target sleep.target - Sleep.
```

##### systemctl mask

```
hongxin@deepDomain:~$ sudo systemctl mask sleep.target suspend.target hibernate.target hybrid-sleep.target
Created symlink /etc/systemd/system/sleep.target → /dev/null.
Created symlink /etc/systemd/system/suspend.target → /dev/null.
Created symlink /etc/systemd/system/hibernate.target → /dev/null.
Created symlink /etc/systemd/system/hybrid-sleep.target → /dev/null.
```



##### Access denied

```
hongxin@deepDomain:~$ systemctl suspend
Call to Suspend failed: Access denied
```



##### systemctl status

```
hongxin@deepDomain:~$ systemctl status sleep.target
○ sleep.target
     Loaded: masked (Reason: Unit sleep.target is masked.)
     Active: inactive (dead) since Thu 2026-02-26 12:55:09 CST; 1 day 4h ago

Feb 26 12:23:36 deepDomain systemd[1]: Reached target sleep.target - Sleep.
Feb 26 12:55:09 deepDomain systemd[1]: Stopped target sleep.target - Sleep.
```

