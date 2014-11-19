!include nsDialogs.nsh
!include LogicLib.nsh

Var Dialog
Var FirstTime

Var Label

Var CheckboxRPCDDSHOME
Var CheckboxRPCDDSHOME_State

Var CheckboxScripts
Var CheckboxScripts_State

Var CheckboxX64VS2010
Var CheckboxX64VS2010_State

Var CheckboxI86VS2010
Var CheckboxI86VS2010_State

Var CheckboxX64VS2013
Var CheckboxX64VS2013_State

Var CheckboxI86VS2013
Var CheckboxI86VS2013_State

LangString PAGE_TITLE ${LANG_ENGLISH} "Environment variables setting"
LangString PAGE_SUBTITLE ${LANG_ENGLISH} "Choose which environment variables you want to set."

Function VariablesEntornoPage

    !insertmacro MUI_HEADER_TEXT $(PAGE_TITLE) $(PAGE_SUBTITLE)

    nsDialogs::Create 1018
    
    Pop $Dialog

    ${If} $Dialog == error
        Abort
    ${EndIf}
       
    ### Creación de los elementos gráficos    
    ${NSD_CreateLabel} 0 0 100% 20u "Check the environment variables you want to set and uncheck the environment variables you don't want to set. Click Next to continue."
    Pop $Label

    ${NSD_CreateCheckbox} 10 20u 100% 12u "Set the RPCDDSHOME environment variable."
    Pop $CheckboxRPCDDSHOME
    ${If} $CheckboxRPCDDSHOME_State == ${BST_CHECKED}
        ${NSD_Check} $CheckboxRPCDDSHOME
    ${EndIf}
        
    ${NSD_CreateCheckbox} 10 32u 100% 12u "&Add to the PATH environment variable the location of eProsima RPCDDS scripts"
    Pop $CheckboxScripts
    ${If} $CheckboxScripts_State == ${BST_CHECKED}
        ${NSD_Check} $CheckboxScripts
    ${EndIf}

    ${NSD_CreateCheckbox} 10 44u 100% 24u "&Add to the PATH environment variable the location of eProsima RPCDDS target$\r$\nlibraries for platform i86Win32VS2010"
    Pop $CheckboxI86VS2010

    ${NSD_CreateCheckbox} 10 66u 100% 24u "&Add to the PATH environment variable the location of eProsima RPCDDS target$\r$\nlibraries for platform i86Win32VS2013"
    Pop $CheckboxI86VS2013

    ${If} ${SectionIsSelected} ${SEC_LIB_i86VS2010}
        ${If} $CheckboxI86VS2010_State == ${BST_CHECKED}
            ${NSD_Check} $CheckboxI86VS2010
        ${EndIf}
    ${Else}
        ${NSD_AddStyle} $CheckboxI86VS2010 ${WS_DISABLED}
    ${EndIf}

    ${If} ${SectionIsSelected} ${SEC_LIB_i86VS2013}
        ${If} $CheckboxI86VS2013_State == ${BST_CHECKED}
            ${NSD_Check} $CheckboxI86VS2013
        ${EndIf}
    ${Else}
        ${NSD_AddStyle} $CheckboxI86VS2013 ${WS_DISABLED}
    ${EndIf}
    
    ${If} ${RunningX64}
        ${NSD_CreateCheckbox} 10 88u 100% 24u "&Add to the PATH environment variable the location of eProsima RPCDDS target$\r$\nlibraries for platform x64Win64VS2010"
        Pop $CheckboxX64VS2010  
        ${If} ${SectionIsSelected} ${SEC_LIB_x64VS2010}
            ${If} $CheckboxX64VS2010_State == ${BST_CHECKED}
                ${NSD_Check} $CheckboxX64VS2010
            ${EndIf}
        ${Else}
            ${NSD_AddStyle} $CheckboxX64VS2010 ${WS_DISABLED}
        ${EndIf}

        ### Fijamos los callbacks para cuando se haga click en los CheckBoxes
        ${NSD_OnClick} $CheckboxX64VS2010 ClickX64VS2010  
    ${EndIf}

    ${If} ${RunningX64}
        ${NSD_CreateCheckbox} 10 110u 100% 24u "&Add to the PATH environment variable the location of eProsima RPCDDS target$\r$\nlibraries for platform x64Win64VS2013"
        Pop $CheckboxX64VS2013  
        ${If} ${SectionIsSelected} ${SEC_LIB_x64VS2013}
            ${If} $CheckboxX64VS2013_State == ${BST_CHECKED}
                ${NSD_Check} $CheckboxX64VS2013
            ${EndIf}
        ${Else}
            ${NSD_AddStyle} $CheckboxX64VS2013 ${WS_DISABLED}
        ${EndIf}

        ### Fijamos los callbacks para cuando se haga click en los CheckBoxes
        ${NSD_OnClick} $CheckboxX64VS2013 ClickX64VS2013  
    ${EndIf}

    ### La primera vez que lanzamos el instalador, el checkbox de RPCDDSHOME
    ### y el de SCRIPTS deben estar marcados. 
    StrCmp $FirstTime "FirstTime" +5 0 ### Si son iguales las cadenas, GOTO +5, si no, GOTO 0
        ${NSD_Check} $CheckboxRPCDDSHOME
        ${NSD_Check} $CheckboxScripts
        ${NSD_GetState} $CheckboxRPCDDSHOME $CheckboxRPCDDSHOME_State
        ${NSD_GetState} $CheckboxScripts $CheckboxScripts_State
        StrCpy $FirstTime "FirstTime"
        
    ### Fijamos los callbacks para cuando se haga click en los CheckBoxes
    ${NSD_OnClick} $CheckboxRPCDDSHOME ClickRPCDDSHOME 
    ${NSD_OnClick} $CheckboxScripts ClickScripts
    ${NSD_OnClick} $CheckboxI86VS2010 ClickI86VS2010  
    ${NSD_OnClick} $CheckboxI86VS2013 ClickI86VS2013  

    nsDialogs::Show
FunctionEnd

### Callback invocado cuando se pulsa el CheckBox RPCDDSHOME
### Guardamos el estado en la variable _state
Function ClickRPCDDSHOME
    ${NSD_GetState} $CheckboxRPCDDSHOME $CheckboxRPCDDSHOME_State
FunctionEnd

### Callback invocado cuando se pulsa el CheckBox Scripts
### Guardamos el estado en la variable _state
Function ClickScripts
    ${NSD_GetState} $CheckboxScripts $CheckboxScripts_State
FunctionEnd

### Callback invocado cuando se pulsa el CheckBox x64
### Sirve para deshabilitar el i86, pues no pueden aparecer a la vez
### También guardamos el estado en la variable _state
Function ClickX64VS2010
    Pop $CheckboxX64VS2010
    ${NSD_GetState} $CheckboxX64VS2010 $0
    ${If} $0 == 1
        ${NSD_SetState} $CheckboxI86VS2010 0
        ${NSD_GetState} $CheckboxI86VS2010 $CheckboxI86VS2010_State
        ${NSD_SetState} $CheckboxI86VS2013 0
        ${NSD_GetState} $CheckboxI86VS2013 $CheckboxI86VS2013_State
        ${NSD_SetState} $CheckboxX64VS2013 0
        ${NSD_GetState} $CheckboxX64VS2013 $CheckboxX64VS2013_State
    ${EndIf}
    ${NSD_GetState} $CheckboxX64VS2010 $CheckboxX64VS2010_State
FunctionEnd

### Callback invocado cuando se pulsa el CheckBox i86
### Sirve para deshabilitar el x64, pues no pueden aparecer a la vez
### También guardamos el estado en la variable _state
Function ClickI86VS2010
    Pop $CheckboxI86VS2010
    ${NSD_GetState} $CheckboxI86VS2010 $0
    ${If} $0 == 1
        ${NSD_SetState} $CheckboxX64VS2010 0
        ${NSD_GetState} $CheckboxX64VS2010 $CheckboxX64VS2010_State
        ${NSD_SetState} $CheckboxI86VS2013 0
        ${NSD_GetState} $CheckboxI86VS2013 $CheckboxX64VS2013_State
        ${NSD_SetState} $CheckboxX64VS2013 0
        ${NSD_GetState} $CheckboxX64VS2013 $CheckboxX64VS2013_State
    ${EndIf}
    ${NSD_GetState} $CheckboxI86VS2010 $CheckboxI86VS2010_State
FunctionEnd

### Callback invocado cuando se pulsa el CheckBox x64
### Sirve para deshabilitar el i86, pues no pueden aparecer a la vez
### También guardamos el estado en la variable _state
Function ClickX64VS2013
    Pop $CheckboxX64VS2013
    ${NSD_GetState} $CheckboxX64VS2013 $0
    ${If} $0 == 1
        ${NSD_SetState} $CheckboxI86VS2010 0
        ${NSD_GetState} $CheckboxI86VS2010 $CheckboxI86VS2010_State
        ${NSD_SetState} $CheckboxX64VS2010 0
        ${NSD_GetState} $CheckboxX64VS2010 $CheckboxX64VS2010_State
        ${NSD_SetState} $CheckboxI86VS2013 0
        ${NSD_GetState} $CheckboxI86VS2013 $CheckboxI86VS2013_State
    ${EndIf}
    ${NSD_GetState} $CheckboxX64VS2013 $CheckboxX64VS2013_State
FunctionEnd

### Callback invocado cuando se pulsa el CheckBox i86
### Sirve para deshabilitar el x64, pues no pueden aparecer a la vez
### También guardamos el estado en la variable _state
Function ClickI86VS2013
    Pop $CheckboxI86VS2013
    ${NSD_GetState} $CheckboxI86VS2013 $0
    ${If} $0 == 1
        ${NSD_SetState} $CheckboxI86VS2010 0
        ${NSD_GetState} $CheckboxI86VS2010 $CheckboxX64VS2010_State
        ${NSD_SetState} $CheckboxX64VS2010 0
        ${NSD_GetState} $CheckboxX64VS2010 $CheckboxX64VS2010_State
        ${NSD_SetState} $CheckboxI86VS2013 0
        ${NSD_GetState} $CheckboxI86VS2013 $CheckboxX64VS2013_State
        ${NSD_SetState} $CheckboxX64VS2013 0
        ${NSD_GetState} $CheckboxX64VS2013 $CheckboxX64VS2013_State
    ${EndIf}
    ${NSD_GetState} $CheckboxI86VS2013 $CheckboxI86VS2013_State
FunctionEnd
