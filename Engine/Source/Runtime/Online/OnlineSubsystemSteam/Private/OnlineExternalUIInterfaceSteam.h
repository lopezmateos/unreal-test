// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "OnlineExternalUIInterface.h"
#include "OnlineSubsystemTypes.h"
#include "OnlineAsyncTaskManagerSteam.h"
#include "OnlineSubsystemSteamPackage.h"

/**
 *	Async event that notifies when the STEAM external UI has been activated
 */
class FOnlineAsyncEventSteamExternalUITriggered : public FOnlineAsyncEvent<FOnlineSubsystemSteam>
{
	/** Is the External UI activating */
	bool bIsActive;

	/** Hidden on purpose */
	FOnlineAsyncEventSteamExternalUITriggered() :
		FOnlineAsyncEvent(NULL),
		bIsActive(false)
	{
	}

public:

	FOnlineAsyncEventSteamExternalUITriggered(FOnlineSubsystemSteam* InSteamSubsystem, bool bInIsActive) :
		FOnlineAsyncEvent(InSteamSubsystem),
		bIsActive(bInIsActive)
	{
	}

	virtual ~FOnlineAsyncEventSteamExternalUITriggered()
	{
	}

	/**
	 *	Get a human readable description of task
	 */
	virtual FString ToString() const override;

	/**
	 *	Async task is given a chance to trigger it's delegates
	 */
	virtual void TriggerDelegates() override;
};

/** 
 * Implementation for the STEAM external UIs
 */
class FOnlineExternalUISteam : public IOnlineExternalUI
{

private:
	/** Reference to the main Steam subsystem */
	class FOnlineSubsystemSteam* SteamSubsystem;

	/** Hidden on purpose */
	FOnlineExternalUISteam() :
		SteamSubsystem(NULL)
	{
	}

PACKAGE_SCOPE:

	FOnlineExternalUISteam(class FOnlineSubsystemSteam* InSteamSubsystem) :
		SteamSubsystem(InSteamSubsystem)
	{
	}

	/** Triggered when the steam overlay is closed if it was opened via ShowProfileUI. Delegate will be unbound after it is executed. */
	FOnProfileUIClosedDelegate ProfileUIClosedDelegate;
	FOnShowWebUrlClosedDelegate ShowWebUrlClosedDelegate;

public:

	virtual ~FOnlineExternalUISteam()
	{
	}

	// IOnlineExternalUI
	virtual bool ShowLoginUI(const int ControllerIndex, bool bShowOnlineOnly, const FOnLoginUIClosedDelegate& Delegate = FOnLoginUIClosedDelegate()) override;
	virtual bool ShowFriendsUI(int32 LocalUserNum) override;
	virtual bool ShowInviteUI(int32 LocalUserNum, FName SessionMame = GameSessionName) override;
	virtual bool ShowAchievementsUI(int32 LocalUserNum) override;
	virtual bool ShowLeaderboardUI(const FString& LeaderboardName) override;
	virtual bool ShowWebURL(const FString& Url, const FShowWebUrlParams& ShowParams, const FOnShowWebUrlClosedDelegate& Delegate = FOnShowWebUrlClosedDelegate()) override;
	virtual bool CloseWebURL() override;
	virtual bool ShowProfileUI(const FUniqueNetId& Requestor, const FUniqueNetId& Requestee, const FOnProfileUIClosedDelegate& Delegate = FOnProfileUIClosedDelegate()) override;
	virtual bool ShowAccountUpgradeUI(const FUniqueNetId& UniqueId) override;
};

typedef TSharedPtr<FOnlineExternalUISteam, ESPMode::ThreadSafe> FOnlineExternalUISteamPtr;

