#include "prompt.h"
#include "context.h"

#include "mere/utils/merestringutils.h"

Prompt::Prompt(Context *context, QObject *parent)
    : QObject(parent),
      m_input(stdin),
      m_context(context)
{

}

void Prompt::welcome() const
{
    QTextStream(stdout) << "Welcome to Mere Store Shell v1.0.0" << Qt::endl;
}

QString Prompt::accept()
{
    if (!MereStringUtils::isBlank(m_context->store()))
        QTextStream(stdout) << m_context->store();

    if (!MereStringUtils::isBlank(m_context->slice()))
        QTextStream(stdout) << ":" << m_context->slice();

    QTextStream(stdout) << ">";

    return m_input.readLine();
}
