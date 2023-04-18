{
    "Defaults": [
        {
            "Options": [
                { "env_reset": true }
            ]
        },
        {
            "Options": [
                { "mail_badpass": true }
            ]
        },
        {
            "Options": [
                { "secure_path": "/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin" }
            ]
        }
    ],
    "User_Specs": [
        {
            "User_List": [
                { "username": "root" }
            ],
            "Host_List": [
                { "hostalias": "ALL" }
            ],
            "Cmnd_Specs": [
                {
                    "runasusers": [
                        { "runasalias": "ALL" }
                    ],
                    "runasgroups": [
                        { "runasalias": "ALL" }
                    ],
                    "Options": [
                        { "setenv": true }
                    ],
                    "Commands": [
                        { "cmndalias": "ALL" }
                    ]
                }
            ]
        },
        {
            "User_List": [
                { "usergroup": "admin" }
            ],
            "Host_List": [
                { "hostalias": "ALL" }
            ],
            "Cmnd_Specs": [
                {
                    "runasusers": [
                        { "runasalias": "ALL" }
                    ],
                    "Options": [
                        { "setenv": true }
                    ],
                    "Commands": [
                        { "cmndalias": "ALL" }
                    ]
                }
            ]
        },
        {
            "User_List": [
                { "usergroup": "sudo" }
            ],
            "Host_List": [
                { "hostalias": "ALL" }
            ],
            "Cmnd_Specs": [
                {
                    "runasusers": [
                        { "runasalias": "ALL" }
                    ],
                    "runasgroups": [
                        { "runasalias": "ALL" }
                    ],
                    "Options": [
                        { "setenv": true }
                    ],
                    "Commands": [
                        { "cmndalias": "ALL" }
                    ]
                }
            ]
        }
    ]
}
