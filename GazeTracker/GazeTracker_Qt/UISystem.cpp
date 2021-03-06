#include "stdafx.h"
#include "UISystem.h"

using namespace gt;

UISystem::UISystem()
{
}


UISystem::~UISystem()
{
	delete m_StartUI;
	delete m_ConfigurationUI;
	delete m_CornerConfigurationUI;
	delete m_EyeTemplateConfigurationUI;
	delete m_TemplateMatchingMethodConfigUI;
	delete m_GazeTrackerUI;
}

StartUI* UISystem::GetStartUI()
{
	if (m_StartUI == nullptr)
		m_StartUI = new StartUI();
	return static_cast<StartUI*>(m_StartUI);
}

ConfigurationUI* UISystem::GetConfigurationUI()
{
	if (m_ConfigurationUI == nullptr)
		m_ConfigurationUI = new ConfigurationUI();
	return static_cast<ConfigurationUI*>(m_ConfigurationUI);
}

TemplateConfigUI* UISystem::GetEyeTemplateConfigurationUI()
{
	if (m_EyeTemplateConfigurationUI == nullptr)
		m_EyeTemplateConfigurationUI = new TemplateConfigUI();
	return static_cast<TemplateConfigUI*>(m_EyeTemplateConfigurationUI);
}

CornerConfigurationUI* UISystem::GetCornerConfigurationUI()
{
	if (m_CornerConfigurationUI == nullptr)
		m_CornerConfigurationUI = new CornerConfigurationUI();
	return static_cast<CornerConfigurationUI*>(m_CornerConfigurationUI);
}

TemplateMatchingMethodConfigUI* UISystem::GetTemplateMatchingMethodConfigUI()
{
	if (m_TemplateMatchingMethodConfigUI == nullptr)
		m_TemplateMatchingMethodConfigUI = new TemplateMatchingMethodConfigUI();
	return static_cast<TemplateMatchingMethodConfigUI*>(m_TemplateMatchingMethodConfigUI);
}

GazeVisualizationUI* UISystem::GetGazeTrackerUI()
{
	if (m_GazeTrackerUI == nullptr)
		m_GazeTrackerUI = new GazeVisualizationUI();
	return static_cast<GazeVisualizationUI*>(m_GazeTrackerUI);
}